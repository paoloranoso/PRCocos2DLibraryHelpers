//
//  PRAnimationHelper.h - Helper/convenience methods to deal with handling touch input much easily
//
//  Created by Paolo Ranoso on 1/29/12.
//  Copyright (c) 2012 Paolo Ranoso. All rights reserved.
//

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
