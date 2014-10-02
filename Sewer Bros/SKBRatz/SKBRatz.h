//
//  SKBRatz.h
//  Sewer Bros
//
//  Created by victor alejandro reza rodriguez on 16/09/14.
//  Copyright (c) 2014 victor alejandro reza rodriguez. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

#import "SKBAppDelegate.h"
#import "SKBSpriteTextures.h"


#define kRatzSpawnSoundFileName         @"SpawnEnemy.caf"
#define kRatzSplashedSoundFileName      @"Splash.caf"


#define kRatzRunningIncrement           40
#define kRatzKickedIncrement            5
#define kRatzPointValue                 100
#define kTimeKnockedRat                 0.3

#define kRatzKOSoundFileName            @"EnemyKO.caf"
#define kRatzCollectedSoundFileName     @"EnemyCollected.caf"


typedef enum : int {
    
    SBRatzRunningLeft = 0,
    SBRatzRunningRight,
    SBRatzKOfacingLeft,
    SBRatzKOfacingRight,
    SBRatzKicked
    
} SBRatzStatus;


@interface SKBRatz : SKSpriteNode


@property int ratzStatus;
@property int lastKnownXposition, lastKnownYposition;
@property (nonatomic, strong) NSString *lastKnownContactedLedge;
@property (nonatomic, strong) SKBSpriteTextures *spriteTextures;
@property (nonatomic, strong) SKAction *spawnSound, *koSound, *collectedSound, *splashSound;


+ (SKBRatz *)initNewRatz:(SKScene *)whichScene startingPoint:(CGPoint)location ratzIndex:(int)index;

- (void)spawnedInScene:(SKScene *)whichScene;

- (void)wrapRatz:(CGPoint)where;
- (void)ratzHitLeftPipe:(SKScene *)whichScene;
- (void)ratzHitRightPipe:(SKScene *)whichScene;

- (void)ratzKnockedOut:(SKScene *)whichScene;
- (void)ratzCollected:(SKScene *)whichScene;
- (void)ratzHitWater:(SKScene *)whichScene;

- (void)runRight;
- (void)runLeft;
- (void)turnRight;
- (void)turnLeft;



@end
