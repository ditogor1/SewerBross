//
//  SKBLedge.h
//  Sewer Bros
//
//  Created by victor alejandro reza rodriguez on 16/09/14.
//  Copyright (c) 2014 victor alejandro reza rodriguez. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SpriteKit/SpriteKit.h>
#import "SKBAppDelegate.h"
#define kLedgeBrickFileName                         @"LedgeBrick.png"
#define kLedgeBrickSpacing                          9
#define kLedgeSideBufferSpacing                     4



@interface SKBLedge : NSObject


- (void)createNewSetOfLedgeNodes:(SKScene *)whichScene startingPoint:(CGPoint)leftSide withHowManyBlocks:(int)blockCount startingIndex:(int)indexStart;


@end
