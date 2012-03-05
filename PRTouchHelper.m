/*
	PRTouchHelper.m
	Copyright (c) 2012 Paolo Ranoso
	
	The MIT License:
	
	Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
	
	The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
	
	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

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
