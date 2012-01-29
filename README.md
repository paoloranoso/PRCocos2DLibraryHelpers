PRCocos2DLibraryHelpers
=======================

What is it?
-----------
PRCocos2DLibraryHelpers is just a bunch of helper/convenience/wrapper classes that make a lot of common cocos2d tasks easier.  
Need to tell if an object was touched?  PRTouchHelper has you covered.  Annoyed by how much code it takes to set up a simple animation?  Use PRAnimationHelper!


Why did you do such a thing?
----------------------------
I thought this would be a good way for me to learn cocos2d-iphone, as well as write my own reusable code at the same time...an engaging
and productive way to learn, indeed!

I'm trying to mainly write helper stuff mainly in the form of convenience methods for loose coupling and ease.  I want to advocate
composition (e.g: has-a relationship) over inheritance, which is why I am NOT making any prefabricated stuff like GameObject.h.


Installation
------------
Simply drag and drop the whole folder into your cocos2d-iphone project, and #import "PRCocos2DLibraryHelpers" wherever needed.
If you're lazy like me, #import it in your precompiled header(.pch) file(s).


Documentation
-------------
Uhhh...yeaaahhhh there isn't really any *detailed* documentation at the moment.  I include notes in the .h files if I need to explain
stuff, but for the most part, I try to code in such a way that should be self-documenting...for example:
+(BOOL)nodeContainsTouch:(CCNode *)node forTouch:(UITouch *)touch;  --- you can probably tell that this function tells you if the node was touched...

If you are REALLY interested, go forth and improve on this project yourself :D!


Extra notes from Paolo
----------------------
Hiya, I'm Paolo.  I wrote this library for myself, but thought I'd put it on github in hopes that it would help you out a bit.
That said, code may be sloppy and have bad style, but at the end of the day, it's all about building a product!

Attribution/mad propz would be cool, but not necessary.

-paolo 1/29/2012
