<?php

/**
 * Implementation of hook_profile_default_profile_fields().
 */
function ft_profile_profile_default_profile_fields() {
$profile_fields = array();
$profile_fields['profile_aboutme'] = array(
  'title' => 'About Me',
  'name' => 'profile_aboutme',
  'explanation' => '',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'textarea',
  'weight' => '-10',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_birthday'] = array(
  'title' => 'Birthday',
  'name' => 'profile_birthday',
  'explanation' => '',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'date',
  'weight' => '-9',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_books'] = array(
  'title' => 'Favorite books',
  'name' => 'profile_books',
  'explanation' => '',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '-4',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_hometown'] = array(
  'title' => 'Hometown',
  'name' => 'profile_hometown',
  'explanation' => '',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '-6',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_howheard'] = array(
  'title' => 'How you heard about us',
  'name' => 'profile_howheard',
  'explanation' => 'How did you hear about GetHealthyHarlem.org?  Please choose the best option.',
  'category' => 'Personal information',
  'page' => 'How heard? %value',
  'type' => 'selection',
  'weight' => '0',
  'required' => '1',
  'register' => '1',
  'visibility' => '1',
  'autocomplete' => '0',
  'options' => 'Please choose...
A street fair or other health fair
Another Website (specify below)
Touro College of Pharmacy
I received a GetHealthyHarlem.org brochure or postcard
A community meeting (specify below)
Word of Mouth
I am somehow involved with GetHealthyHarlem.org (CAB, HAB, WPDG)
Other (specify below)',
);
$profile_fields['profile_howheard_specify'] = array(
  'title' => 'Please specify',
  'name' => 'profile_howheard_specify',
  'explanation' => 'Please tell us more about how you found GetHealthyHarlem.org.  Your answer is very important to us!',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '0',
  'required' => '0',
  'register' => '1',
  'visibility' => '1',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_interests'] = array(
  'title' => 'Interests',
  'name' => 'profile_interests',
  'explanation' => '',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'textarea',
  'weight' => '-5',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_movies'] = array(
  'title' => 'Favorite movies',
  'name' => 'profile_movies',
  'explanation' => '',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '-3',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_occupation'] = array(
  'title' => 'Occupation',
  'name' => 'profile_occupation',
  'explanation' => '',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '-7',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_organization_about_us'] = array(
  'title' => 'About us',
  'name' => 'profile_organization_about_us',
  'explanation' => '',
  'category' => 'Organization',
  'page' => '',
  'type' => 'textarea',
  'weight' => '0',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_organization_contact_information'] = array(
  'title' => 'Contact information',
  'name' => 'profile_organization_contact_information',
  'explanation' => '',
  'category' => 'Organization',
  'page' => '',
  'type' => 'textarea',
  'weight' => '0',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_organization_member_list'] = array(
  'title' => 'Member list',
  'name' => 'profile_organization_member_list',
  'explanation' => '',
  'category' => 'Organization',
  'page' => '',
  'type' => 'textarea',
  'weight' => '0',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_organization_mission_statement'] = array(
  'title' => 'Mission statement',
  'name' => 'profile_organization_mission_statement',
  'explanation' => '',
  'category' => 'Organization',
  'page' => '',
  'type' => 'textarea',
  'weight' => '0',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_organization_name'] = array(
  'title' => 'Organization name',
  'name' => 'profile_organization_name',
  'explanation' => '',
  'category' => 'Organization',
  'page' => '',
  'type' => 'textfield',
  'weight' => '-8',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_organization_one_line_info'] = array(
  'title' => 'One line intro',
  'name' => 'profile_organization_one_line_info',
  'explanation' => '',
  'category' => 'Organization',
  'page' => '',
  'type' => 'textfield',
  'weight' => '0',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_organization_website'] = array(
  'title' => 'Organization website',
  'name' => 'profile_organization_website',
  'explanation' => '',
  'category' => 'Organization',
  'page' => '',
  'type' => 'url',
  'weight' => '0',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_real_name'] = array(
  'title' => 'Real Name',
  'name' => 'profile_real_name',
  'explanation' => 'The name will be used in the emails sent to other users.',
  'category' => 'Personal Information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '-10',
  'required' => '0',
  'register' => '0',
  'visibility' => '3',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_tvshows'] = array(
  'title' => 'Favorite TV shows',
  'name' => 'profile_tvshows',
  'explanation' => '',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '-2',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_website'] = array(
  'title' => 'Website',
  'name' => 'profile_website',
  'explanation' => '',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'url',
  'weight' => '-1',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_zodiac'] = array(
  'title' => 'Zodiac Sign',
  'name' => 'profile_zodiac',
  'explanation' => '',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '-8',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
return $profile_fields;
}