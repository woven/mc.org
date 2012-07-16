<?php
class MeetupParser{
  private $group_url;
  private $small_name;
  private $title;
  private $event_feed;
  private $body;
  private $logo_url;

  public function __construct($url, $querypath_path) {
    include_once $querypath_path;
    if(preg_match('/(http:|https:).+(meetup.com)(\/{0,})/i', $url) ){
      $no_domain_url =  preg_replace('/(http:|https:).+(meetup.com)(\/{0,})/i', '', $url);
      $this->small_name = preg_replace('/(^\/)|(\/.+)|(\/)/i', '', $no_domain_url);
      if(!empty($this->small_name)){
        $this->event_feed = 'http://www.meetup.com/' . $this->small_name . '/events/ical';
        $this->group_url = 'http://www.meetup.com/' . $this->small_name;
        $page = file_get_contents($this->group_url);
        $this->title = htmlqp($page, '#bannerGroupName')->text();
        $this->body = htmlqp($page, '#groupDesc')->innerHTML();
        $this->logo_url = htmlqp($page, '#C_nav #C_metabox .groupPhotoMeta img')->attr('src');
      }
    }
    else {
      throw new Exception('Url does not match meetup known addresses');
    }
  }

  public function groupNode(){
    $node = new StdClass();
    $node->title = $this->title;
    $node->body = $this->body;
    $node->field_small_name['0']['value'] = $this->small_name;
    $node->field_group_url['0']['url'] = $this->group_url;
    $node->body = $this->body;
    return $node;
  }

  public function eventFeedUrl(){
    return $this->event_feed;
  }

  public function logoUrl(){
    return $this->logo_url;
  }
}

?>