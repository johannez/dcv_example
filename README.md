dcv_example
====================

Contains the sample code and presentation from the DrupalCamp Vancouver 2012


Basic installation with Drush & MAMP
====================================

1. Download the latest Drupal version to your document root

  drush dl drupal


2. Change into the newly created directory and do a Drush standard site install (drush si --help for more info)

  drush si standard --db-url=mysql://root:root@localhost:3306/d7_standard --db-su=root --db-su-pw=root --site-name="Drupal 7 standard" --account-name=admin --account-pass=admin


3. Create the custom module folder sites/all/modules/custom and go there

  mkdir sites/all/modules/custom
  cd sites/all/modules/custom


4. Clone the example module in that director with git

  git clone git://github.com/johannez/dcv_example.git


5. Enable the module through the browser (login: admin/admin) or with Drush

  drush en dcv_example


