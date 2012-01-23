<!-- First set any specified height and width -->

<?php if ($height > 0): ?>
  <style type="text/css">
    #<?php print $container ?> { 
      height: <?php print $height ?>px; 
    }
  </style>
<?php endif; ?>

<?php if ($width > 0): ?>
  <style type="text/css">
    #<?php print $container ?> {
      width: <?php print $width ?>px;
    }
  </style>
<?php endif; ?>

<!-- Then output the container itself -->

<div id="<?php print $container ?>"></div>