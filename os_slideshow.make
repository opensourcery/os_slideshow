; $Id$

core = 7.x
api = 2

projects[rotating_banner][subdir] = "contrib"
projects[rotating_banner][download][type] = "git"
projects[rotating_banner][download][revision] = "b31018014"

projects[media][subdir] = "contrib"
projects[media][version] = "1.0-beta5"

; TODO this is adding it one directory too deep.
libraries[jquery_cycle][download][type] = "get"
libraries[jquery_cycle][download][url] = "http://www.malsup.com/jquery/cycle/release/jquery.cycle.zip?v2.86"
libraries[jquery_cycle][destination] = "modules/contrib/rotating_banner/includes"

; TODO this is adding it one directory too deep.
libraries[jquery_easing][download][type] = "get"
libraries[jquery_easing][download][url] = "http://gsgd.co.uk/sandbox/jquery/easing/jquery.easing.1.3.js"
libraries[jquery_easing][destination] = "modules/contrib/rotating_banner/includes"

