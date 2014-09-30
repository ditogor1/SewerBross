//
//  SKBCoin.h
//  Sewer Bros
//
//  Created by victor alejandro reza rodriguez on 17/09/14.
//  Copyright (c) 2014 victor alejandro reza rodriguez. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import "SKBAppDelegate.h"
#import "SKBSpriteTextures.h"


#define kCoinRunningIncrement                                   40
#define kCoinPointValue                                         60


#define kCoinSpawnSoundFileName                                 @"SpawnCoin.caf"
#define kCoinCollectedSoundFileName                             @"CoinCollected.caf"


typedef enum : int {
    
    SBCoinRunningLeft = 0,
    SBCoinRunningRight
    
} SBCoinStatus;



@interface SKBCoin : SKSpriteNode


@property int coinStatus;
@property int lastKnownXposition, lastKnownYposition;
@property (nonatomic, strong) NSString *lastKnownContactedLedge;
@property (nonatomic, strong) SKBSpriteTextures *spriteTextures;
@property (nonatomic, strong) SKAction *spawnSound, *collectedSound;


+ (SKBCoin *)initNewCoin:(SKScene *)whichScene startingPoint:(CGPoint)location coinIndex:(int)index;

- (void)spawnedInScene:(SKScene *)whichScene;

- (void)wrapCoin:(CGPoint)where;

- (void)coinHitPipe;
- (void)coinCollected:(SKScene *)whichScene;

- (void)runRight;
- (void)runLeft;
- (void)turnRight;
- (void)turnLeft;

@end
