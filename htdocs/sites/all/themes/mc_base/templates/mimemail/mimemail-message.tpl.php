<?php

/**
 * @file
 * Default theme implementation to format an HTML mail.
 *
 * Copy this file in your default theme folder to create a custom themed mail.
 * Rename it to mimemail-message--[mailkey].tpl.php to override it for a
 * specific mail.
 *
 * Available variables:
 * - $recipient: The recipient of the message
 * - $subject: The message subject
 * - $body: The message body
 * - $css: Internal style sheets
 * - $mailkey: The message identifier
 *
 * @see template_preprocess_mimemail_message()
 */
?>
<?php
$settings = variable_get('theme_settings', array());
if(!empty($settings)){
  $logo_path = $settings['logo_path'];
}
?>
<html>
  <head>
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
  </head>
  <body>
    <table width="100%" border="0" cellspacing="0" cellpadding="20" style="border: 1px solid gray">
  <tr>
    <td>
       <div id="center">
      <div id="main" style="margin: 12px;">
        <?php if($logo_path): ?>
      <div><img src="<?php echo $GLOBALS['base_url'] . '/' . $logo_path;?>"></div>
        <?php endif; ?>
        <div style="margin-top: 10px; background: #fff; padding: 10px;">
        <?php print $body ?>
        </div>
      </div>
    </div>
    </td>
  </tr>
</table>
  </body>
</html>
