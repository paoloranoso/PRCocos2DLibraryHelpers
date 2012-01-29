//
//  PRTouchHelper.h - Helper/convenience methods to deal with handling touch input much easily
//
//  Created by Paolo Ranoso on 1/25/12.
//  Copyright (c) 2012 Paolo Ranoso. All rights reserved.
//

#import "cocos2d.h"

@interface PRTouchHelper : NSObject{
    
}

+(CGPoint) locationFromTouch:(UITouch*)touch;
+(CGPoint) locationFromTouches:(NSSet*)touches;
+(BOOL)nodeContainsTouch:(CCNode *)node forTouch:(UITouch *)touch;


@end
