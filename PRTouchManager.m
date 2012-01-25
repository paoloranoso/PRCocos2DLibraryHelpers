//
//  PRTouchManager.m
//
//  Created by Paolo Ranoso on 1/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "PRTouchManager.h"

#import "cocos2d.h"

@implementation PRTouchManager

+(CGPoint)locationFromTouch:(UITouch*)touch
{
	CGPoint touchLocation = [touch locationInView: [touch view]];
    
    CCLOG(@"PRTouchManager - touch occurred at: <%f, %f>", touchLocation.x, touchLocation.y );
    
	return [[CCDirector sharedDirector] convertToGL:touchLocation];
}

+(CGPoint)locationFromTouches:(NSSet*)touches
{
	return [self locationFromTouch:[touches anyObject]];
}

+(BOOL)nodeContainsTouch:(CCNode *)node forTouch:(UITouch *)touch{
    CGPoint touchLocation = [self locationFromTouch:touch];
    return (CGRectContainsPoint(node.boundingBox, touchLocation));
}


@end
