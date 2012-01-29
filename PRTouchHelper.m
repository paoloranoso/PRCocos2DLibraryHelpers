//
//  PRTouchHelper.m
//
//  Created by Paolo Ranoso on 1/25/12.
//  Copyright (c) 2012 Paolo Ranoso. All rights reserved.
//

#import "PRTouchHelper.h"

@implementation PRTouchHelper

+(CGPoint)locationFromTouch:(UITouch*)touch
{
	CGPoint touchLocation = [touch locationInView: [touch view]];
    
//    CCLOG(@"PRTouchHelper - touch occurred at: <%f, %f>", touchLocation.x, touchLocation.y );
    
	return [[CCDirector sharedDirector] convertToGL:touchLocation];
}

+(CGPoint)locationFromTouches:(NSSet*)touches
{
	return [self locationFromTouch:[touches anyObject]];
}

+(BOOL)nodeContainsTouch:(CCNode *)node forTouch:(UITouch *)touch{
    CGPoint touchLocation = [self locationFromTouch:touch];
        
//    CCLOG(@"PRTouchHelper - touch occurred at: <%f, %f>....checking if node contains this point", touchLocation.x, touchLocation.y );
//    CCLOG(@"node bounding box origin is: <%f, %f>", node.boundingBox.origin.x, node.boundingBox.origin.y);

    return (CGRectContainsPoint(node.boundingBox, touchLocation));
}


@end
