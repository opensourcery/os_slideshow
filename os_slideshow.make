; Drush Makefile for OpenSourcery Slideshow feature.
core = 7.x
api = 2

; Bean
projects[bean][subdir] = "contrib"
projects[bean][type] = "module"
projects[bean][download][type] = "git"
projects[bean][download][revision] = "4e71d6323bd547440fc7d5883300e0bd483be83b"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.0-beta10"

projects[field_collection][subdir] = "contrib"
projects[field_collection][version] = "1.0-beta2"

projects[link][subdir] = "contrib"
projects[link][version] = "1.0-beta1"

; We're using Media 7.x-2.x
projects[media][subdir] = "contrib"
projects[media][type] = "module"
projects[media][download][type] = "git"
projects[media][download][revision] = "80fc1808219b53af529bbf2a05fe53e3feb68af4"

; We want file_styles to be exportable, so we need bleeding edge Styles
projects[styles][subdir] = "contrib"
projects[styles][type] = "module"
projects[styles][download][type] = "git"
projects[styles][download][revision] = "7175402da2251c067b1bdc97cbf3a7ec03350435"

projects[views_slideshow][subdir] = "contrib"
projects[views_slideshow][version] = "3.x-dev"

libraries[jquery.cycle][download][type] = "get"
libraries[jquery.cycle][download][url] = "https://raw.github.com/malsup/cycle/master/jquery.cycle.all.js"
