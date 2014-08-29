//
//  KLBJSONController.h
//  Battle of Blades
//
//  Created by Chase Gosingtian on 8/29/14.
//  Copyright (c) 2014 KLab Cyscorpions, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KLBJSONController : NSObject

+ (NSDictionary *) loadJSONfromFile:(NSString *)file;
+ (void) saveJSONtoFile:(NSString *)file contents:(NSDictionary *)dictionary;

@end