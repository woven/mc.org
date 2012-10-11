<?php

function _mc_location_api_reverse_getAddressParts($latitude, $longitude){
    $address = $latitude . ',' . $longitude;
    $address_encoded = urlencode($address);
    $json = file_get_contents('http://maps.googleapis.com/maps/api/geocode/json?latlng=' . $address_encoded . '&sensor=false');
    $results = json_decode($json);
    if($results->status=='OK'){
        $parts = array(
            'name'=>array('point_of_interest','establishment'),
            'address'=>array('street_number','route'),
            'city'=>array('locality'),
            'state'=>array('administrative_area_level_1'),
            'zip'=>array('postal_code'),
        );
        if (!empty($results->results['0']->address_components)){
            $ac = $results->results['0']->address_components;
            foreach($parts as $need=>&$types) {
                foreach($ac as &$a) {
                    if (in_array($a->types['0'],$types)){
                        if(!empty($address_out[$need])){
                            $address_out[$need] .= ' ' . $a->short_name;
                        }
                        else {
                            $address_out[$need] = $a->short_name;
                        }
                    }
                    elseif (empty($address_out[$need])){
                        $address_out[$need] = '';
                    }
                }
            }
        }
        return $address_out;
    }
    else {
        return array();
    }
}

function _mc_location_api_getAddressParts($address){
    if($address=='webinar'){
        return array(
            'name' => $address,
            'address'=>'',
            'city'=>'',
            'state'=>'',
            'zip'=>'',
        );
    }

    if(preg_match('/\(.+,{1,}.+\)/i', $address)){
        $address_parts = array();
        $parts = explode('(', $address);

        $address_parts['name'] = $parts['0'];
        $parts = explode(')', $parts['1']);
        $parts = $parts['0'];
        $parts = explode(', ', $parts);

        $address_parts['address'] = $parts['0'];
        $address_parts['city'] = $parts[count($parts) - 2];
        $parts = explode(' ', $parts[count($parts) - 1]);
        $address_parts['state'] = $parts['0'];
        $address_parts['zip'] = $parts['1'];
        return $address_parts;
    }
    $address_with_no_floor = preg_replace('/(floor \d((th|st|nd|rd|)))|(\d(th|st|nd|rd|)) floor/i', '', $address);
    $address_encoded = urlencode($address_with_no_floor);
    $address_out = _mc_location_api_google_map_call($address_with_no_floor);
    if(count($address_out)){
        if(empty($address_out['address'])){
            $new_address = ereg_replace("[^A-Za-z0-9 ]", "", $address_with_no_floor);
            $address_parts = preg_split('/ [0-9]+ /', $new_address);
            if(preg_match('/ [0-9]+ /', $new_address, $matches)){
                $address_number = $matches['0'];
                $address_filtered = $address_number .' ' . $address_parts['1'];
                $address_out = _mc_location_api_google_map_call($address_filtered);
                if(!preg_match('/^[0-9]{1,}\s/i', $address_parts['address'])){
                    $address_filtered = preg_replace('/[A-Z]{2}|[0-9]{5}$/', '', $address_filtered);
                    $address_out = _mc_location_api_google_map_call($address_filtered);
                }
            }
        }
        if(!preg_match('/ - \#[0-9]{1,} - /i', $address_parts['address'])){
            $address_filtered = preg_replace('/ - \#[0-9]{1,} -/i', '', $address);
            $address_out = _mc_location_api_google_map_call($address_filtered);
        }
        if(empty($address_out['zip'])){
            $new_address = ereg_replace("[^A-Za-z0-9 ]", "", $address_with_no_floor);
            $address_parts = preg_split('/ [0-9]+ /', $new_address);
            if(preg_match('/ [0-9]+ /', $new_address, $matches)){
                $address_number = $matches['0'];
                $address_filtered = $address_number .' ' . $address_parts['1'];
                $new_address = preg_replace('/\b\w{2} \d{5}| \d{5}|\d{5}/i', '', $address_filtered);
                $address_out = _mc_location_api_google_map_call($new_address);
            }
        }

        $address_parts = explode(' ', !empty($address_out['address'])? $address_out['address'] : $address_out['city']);
        $address_start = $address_parts['0'];
        if(!empty($address_start)){
            $address_parts = explode($address_start, $address);
        }
        $address_out['name'] = preg_replace("/[^A-Za-z0-9 #\-&]/", "", $address_parts['0']);
        $address_out['name'] = preg_replace('/\s$|^\s/i', '', $address_out['name']);
        $address_out['name']= str_replace(' -', '', $address_out['name']);
        return $address_out;
    }
    else {
        return array();
    }
}

function _mc_location_api_google_map_call($address){
    $address_encoded = urlencode($address);
    $json = file_get_contents('http://maps.googleapis.com/maps/api/geocode/json?address=' . $address_encoded . '&sensor=false');
    $results = json_decode($json);
    if($results->status=='OK'){
        $parts = array(
            'name'=>array('point_of_interest','establishment'),
            'address'=>array('street_number','route'),
            'city'=>array('locality'),
            'state'=>array('administrative_area_level_1'),
            'zip'=>array('postal_code'),
        );
        if (!empty($results->results['0']->address_components)){
            $ac = $results->results['0']->address_components;
            foreach($parts as $need=>&$types) {
                foreach($ac as &$a) {
                    if (in_array($a->types['0'],$types)){
                        if(!empty($address_out[$need])){
                            $address_out[$need] .= ' ' . $a->short_name;
                        }
                        else {
                            $address_out[$need] = $a->short_name;
                        }
                    }
                    elseif (empty($address_out[$need])){
                        $address_out[$need] = '';
                    }
                }
            }
        }
        return $address_out;
    }
    else {
        return array();
    }
}

function _mc_location_api_google_get_georeference($address){
    $address_encoded = urlencode($address);
    $json = file_get_contents('http://maps.googleapis.com/maps/api/geocode/json?address=' . $address_encoded . '&sensor=false');
    $results = json_decode($json);
    if($results->status=='OK'){
        $address_out['latitude'] = $results->results['0']->geometry->location->lat;
        $address_out['longitude'] = $results->results['0']->geometry->location->lng;;
        return $address_out;
    }
    else {
        return array();
    }
}
