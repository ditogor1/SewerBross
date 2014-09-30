//
//  SKBViewController.m
//  Sewer Bros
//
//  Created by victor alejandro reza rodriguez on 11/09/14.
//  Copyright (c) 2014 victor alejandro reza rodriguez. All rights reserved.
//

#import "SKBViewController.h"
#import "SKBSplashScene.h"

@implementation SKBViewController

- (void)viewDidLoad
{
    [super viewDidLoad];

    // Configure the view.

}

- (void)viewWillLayoutSubviews
{
    [super viewWillLayoutSubviews];
    // Configure the view.
    SKView * skView = (SKView *)self.view;
    if (!skView.scene) {
        skView.showsFPS = YES;
        skView.showsNodeCount = YES;
        // Create and configure the scene.
        
        //SKScene *scene = [SKScene sceneWithSize:skView.bounds.size];
        SKBSplashScene *scene = [[SKBSplashScene alloc] initWithSize:skView.bounds.size];
        
        scene.scaleMode = SKSceneScaleModeAspectFill;
        // Present the scene.
        [skView presentScene:scene];
    }
}

- (BOOL)shouldAutorotate
{
    return YES;
}

- (NSUInteger)supportedInterfaceOrientations
{
    if ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone) {
        return UIInterfaceOrientationMaskLandscape;
    } else {
        return UIInterfaceOrientationMaskLandscape;
    }
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Release any cached data, images, etc that aren't in use.
}

@end
