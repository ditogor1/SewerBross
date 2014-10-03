//
//  SKBAppDelegate.h
//  Sewer Bros
//
//  Created by victor alejandro reza rodriguez on 11/09/14.
//  Copyright (c) 2014 victor alejandro reza rodriguez. All rights reserved.
//

#import <UIKit/UIKit.h>


#define kCastOfCharactersFileName               @"CastOfCharacters"


// Global project constants
static const uint32_t kPlayerCategory =         0x1 << 0;
static const uint32_t kBaseCategory =           0x1 << 1;
static const uint32_t kWallCategory =           0x1 << 2;
static const uint32_t kPipeCategory =           0x1 << 3;
static const uint32_t kLedgeCategory =          0x1 << 4;
static const uint32_t kCoinCategory =           0x1 << 5;
static const uint32_t kRatzCategory =           0x1 << 6;
static const uint32_t kGatorzCategory =         0x1 << 7;



#define kEnemySpawnEdgeBufferX                  30
#define kEnemySpawnEdgeBufferY                  30


typedef enum : uint8_t {
    
    SKBEnemyTypeCoin = 0,
    SKBEnemyTypeRatz,
    SKBEnemyTypeGatorz
    
} SKBEnemyTypes;



@interface SKBAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;



@end
