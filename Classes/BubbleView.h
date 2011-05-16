//
//  BubbleView.h
//  ProtoMesh2
//
//  Created by Clément RUCHETON on 12/05/11.
//  Copyright 2011 Plouf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "BubbleSprite.h"

@interface BubbleView : CCNode {
    
}

@end

@protocol BubbleTrackable <NSObject>

-(CGPoint)bubblePoint;
-(BubbleSprite*)bubbleSprite;

@end