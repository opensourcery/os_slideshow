; Drush Makefile for OpenSourcery Slideshow feature.
core = 7.x
api = 2

; Bean
projects[bean][subdir] = "contrib"
projects[bean][type] = "module"
projects[bean][download][type] = "git"
projects[bean][download][revision] = "c931601f189b5fc704e72f0632f6ae259a1b45cf"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.0-beta11"

projects[field_collection][subdir] = "contrib"
projects[field_collection][version] = "1.0-beta2"

projects[link][subdir] = "contrib"
projects[link][version] = "1.0"

projects[media][subdir] = "contrib"
projects[media][version] = "2.0-unstable3"

; We want file_styles to be exportable, so we need bleeding edge Styles
projects[styles][subdir] = "contrib"
projects[styles][type] = "module"
projects[styles][download][type] = "git"
projects[styles][download][revision] = "7175402da2251c067b1bdc97cbf3a7ec03350435"

projects[views_slideshow][subdir] = "contrib"
projects[views_slideshow][type] = "module"
projects[views_slideshow][download][type] = "git"
projects[views_slideshow][download][revision] = "3573ad635d8c8725df0346ca2cc6f81a96e356c4"

libraries[jquery.cycle][download][type] = "get"
libraries[jquery.cycle][download][url] = "https://raw.github.com/malsup/cycle/master/jquery.cycle.all.js"
