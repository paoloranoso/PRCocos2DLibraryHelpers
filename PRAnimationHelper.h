/*
	PRAnimationHelper.h - Helper/convenience methods to deal with handling touch input much easily
	Copyright (c) 2012 Paolo Ranoso
	
	The MIT License:
	
	Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
	
	The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
	
	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#import "cocos2d.h"

@interface PRAnimationHelper : NSObject{
    
}


//The below function was taken from the Rod Strougo/Ray Wenderlich book, pg 77-78.
//The plist format should be pretty much how Rod Strougo/Ray Wenderlich have it in their sample code.
//Example:  For viking animations, I could have a viking.plist with a key called @"breathingAnimation"
//          whose value would contain a dictionary with these keys(all of which are required):
//          -filenamePrefix  => @"breathing_"
//          -delay           => @"1.0"
//          -animationFrames => @"1,2,3,3,2,1"
//
//          Then I could do something like:
//          CCAnimation *breathingAnimation = [PRAnimationHelper animationFromAnimationName:@"breathingAnimation" usingPlistName:@"viking"];
//          ...and then run this animation on my viking sprite to make him have a breathing animation!
//
//
//So, in full, if you are a n0ob like me, the complete order of how to run an animation on a sprite goes like this:
//0 - have your plist and texture atlas already made and in your project
//1 - load in your texture atlas first in your layer(  e.g: [[CCSpriteFrameCache sharedSpriteFrameCache] addSpriteFramesWithFile:@"scene1atlas.plist"];  )
//2 - Now you can make a sprite (e.g: CCSprite *vikingSprite = [CCSprite spriteWithFile:@"viking.png"]; ) 
//3 - Get an animation you want that are defined in your plist ( CCAnimation *breathingAnimation = [PRAnimationHelper animationFromAnimationName:@"breathingAnimation" usingPlistName:@"viking"]; )
//4 - create an animation action based on your animation (  e.g: CCAnimate* animateAction = [CCAnimate actionWithAnimation:breathingAnimation];  )
//5 - run the animation action on your desired sprite [vikingSprite runAction:animateAction];   
//
+(CCAnimation*)animationFromAnimationName:(NSString *)animationName usingPlistName:(NSString *)plistName;

@end
