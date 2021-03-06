//
//  KLBHomeFooterView.h
//  Battle of Blades
//
//  Created by Chase Gosingtian on 8/28/14.
//  Copyright (c) 2014 KLab Cyscorpions, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KLBHomeFooterView : UIView
@property (retain, nonatomic) IBOutlet UIButton *battleButton;
@property (retain, nonatomic) IBOutlet UIButton *battleButtonAverage;
@property (retain, nonatomic) IBOutlet UIButton *battleButtonHard;
@property (retain, nonatomic) IBOutlet UIImageView *imageHint;

@property (nonatomic) enum BattleDifficulty selectedDifficulty;

@end
