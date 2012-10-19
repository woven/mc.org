<?php
class MeetupParser{
  private $group_url;
  private $small_name;
  private $title;
  private $event_feed;
  private $body;
  private $logo_url;
  public $status;

  public function get_content($url){
    $html = file_get_contents($url);
    if($html === false){
      throw new Exception("Sorry, we can't find that page. Please try again.",1);
    }else{
      return $html;
    }
  }
  public function __construct($url) {
    if(preg_match('/(http:|https:|)(.+|)(meetup.com\/.+)/i', $url) ){
      $no_domain_url =  preg_replace('/(http:|https:|)(.+|)(meetup.com)(\/{1,})/i', '', $url);
      $this->small_name = preg_replace('/(^\/)|(\/.+)|(\/)/i', '', $no_domain_url);
      if(!empty($this->small_name)){
        $this->event_feed = 'http://www.meetup.com/' . $this->small_name . '/events/ical';
        $this->group_url = 'http://www.meetup.com/' . $this->small_name;
        $page = $this->get_content($this->group_url);
        $options = array('convert_to_encoding'=>'utf-8');
        $this->title = htmlqp($page, '#bannerGroupName', $options)->text();
        $this->body = htmlqp($page, '#groupDesc', $options)->innerHTML();
        $this->body = preg_replace(array('/<br.+>/i', '/\n<br.+>\n/i'), '', $this->body);
        $this->logo_url = htmlqp($page, '#C_nav #C_metabox .groupPhotoMeta img', $options)->attr('src');
      }
    }else{
      if(preg_match('/(https|http):\/{2}/i', $url)){
        $temp = $this->get_content($url);
      }else{
        $temp = $this->get_content('http://'. $url);
      }
      if (preg_match('/<body id="meetupbody"/i', $temp)) {
        preg_match('/((\w+\.|)\w+\.[a-z.]{1,}(\/|))/i', $url, $result);
        $this->group_url = $result['0'];
        $no_domain = preg_replace('/[a-z0-9-]+\.\w+(\/|)$/i','',$this->group_url);
        $domain = str_replace($no_domain, '', $this->group_url);
        $this->small_name = preg_replace('/\..+$/i','', $domain);
        if(!empty($this->small_name)){
          $domain = str_replace('/','', $this->group_url);
          $this->event_feed = 'http://' . $domain . '/events/ical';
          $page = $this->get_content('http://' . $domain . '/');
          $options = array('convert_to_encoding'=>'utf-8');
          $this->title = htmlqp($page, '#bannerGroupName', $options)->text();
          $this->body = htmlqp($page, '#groupDesc', $options)->innerHTML();
          $this->logo_url = htmlqp($page, '#C_nav #C_metabox .groupPhotoMeta img', $options)->attr('src');
        }
      }
      else {
        throw new Exception('Url does not match meetup known addresses',2);
      }
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
