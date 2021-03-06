//
//  SKBGameScene.h
//  Sewer Bros
//
//  Created by victor alejandro reza rodriguez on 12/09/14.
//  Copyright (c) 2014 victor alejandro reza rodriguez. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import "SKBPlayer.h"
#import "SKBAppDelegate.h"
#import "SKBLedge.h"
#import "SKBRatz.h"
#import "SKBCoin.h"
#import "SKBScores.h"


@interface SKBGameScene : SKScene <SKPhysicsContactDelegate>



@property (strong, nonatomic) SKBPlayer *playerSprite;
@property (strong, nonatomic) SKBSpriteTextures *spriteTextures;
@property (strong, nonatomic) NSArray *cast_TypeArray, *cast_DelayArray, *cast_StartXindexArray;

@property int frameCounter;
@property int spawnedEnemyCount;
@property BOOL enemyIsSpawningFlag;

@property (nonatomic, strong) SKBScores *scoreDisplay;
@property int playerScore;


@end
