//
//  PRTouchManager.h
//
//  Created by Paolo Ranoso on 1/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CCNode;

@interface PRTouchManager : NSObject{
    
}

+(CGPoint) locationFromTouch:(UITouch*)touch;
+(CGPoint) locationFromTouches:(NSSet*)touches;
+(BOOL)nodeContainsTouch:(CCNode *)node forTouch:(UITouch *)touch;


@end
