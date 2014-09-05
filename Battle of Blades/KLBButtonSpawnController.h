//
//  KLBButtonSpawnController.h
//  Battle of Blades
//
//  Created by Chase Gosingtian on 9/4/14.
//  Copyright (c) 2014 KLab Cyscorpions, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KLBButtonSpawnDelegate.h"

extern CGFloat const KLB_BUTTON_SPAWN_DELAY;

@interface KLBButtonSpawnController : UIView <KLBButtonSpawnDelegate>

@property (unsafe_unretained, nonatomic) UIButton *button;
@property (nonatomic) Class buttonClass;
@property (nonatomic) CGRect buttonFrame;
@property (nonatomic) BOOL canLoadButton;

- (void)initializeSpawnerWithButtonClass:(Class)class frame:(CGRect)frame;

@end