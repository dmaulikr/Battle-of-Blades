//
//  KLBNotifications.h
//  Battle of Blades
//
//  Created by Chase Gosingtian on 8/29/14.
//  Copyright (c) 2014 KLab Cyscorpions, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const KLB_NOTIFICATION_BATTLE_START_ATTEMPT;
extern NSString *const KLB_NOTIFICATION_BATTLE_START;
extern NSString *const KLB_NOTIFICATION_BATTLE_END;
extern NSString *const KLB_NOTIFICATION_PLAYER_NAME_CHANGED;
extern NSString *const KLB_NOTIFICATION_PLAYER_LEVEL_CHANGED;
extern NSString *const KLB_NOTIFICATION_PLAYER_EXPERIENCE_CHANGED;
extern NSString *const KLB_NOTIFICATION_PLAYER_ENERGY_CHANGED;
extern NSString *const KLB_NOTIFICATION_ENEMY_TIME_OVER;
extern NSString *const KLB_NOTIFICATION_ENEMY_HEALTH_ZERO;
extern NSString *const KLB_NOTIFICATION_ENEMY_NAME_CHANGED;
extern NSString *const KLB_NOTIFICATION_ENEMY_LEVEL_CHANGED;
extern NSString *const KLB_NOTIFICATION_ENEMY_HEALTH_CHANGED;
extern NSString *const KLB_NOTIFICATION_ENEMY_TIME_CHANGED;
extern NSString *const KLB_NOTIFICATION_ENEMY_BLOCK_APPLIED;
extern NSString *const KLB_NOTIFICATION_ATTACK_SUCCESS;
extern NSString *const KLB_NOTIFICATION_BLOCK_SUCCESS;
extern NSString *const KLB_NOTIFICATION_BUTTON_SPAWN_START;
extern NSString *const KLB_NOTIFICATION_CHEAT_CLEAR_SHIELDS;
extern NSString *const KLB_NOTIFICATION_CHEAT_GAIN_LEVEL;

typedef enum BattleDifficulty: NSInteger BattleDifficulty;
enum BattleDifficulty : NSInteger {
    Easy = 0,
    Average = 1,
    Hard = 2
};

@interface KLBNotifications : NSObject

@end
