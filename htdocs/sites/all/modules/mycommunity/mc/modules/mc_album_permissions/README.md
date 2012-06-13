###This module contains 3 kind of permissions:
* Add photos in any album: lets a user adds photos in any album inside the site.
* Add photos in any public album: lets a user add photos to any album marked as public (when you edit/add a album you will see a checkbox which reads "Album is open").
* Add photos in any album of the groups I manage: lets the user add photos to any album inside one of the groups where he is marked as group manager.

This module also forces the photo to belong to an album through the url, so it checks the url when adding an photo is like this: /node/add/photo/[album nid].