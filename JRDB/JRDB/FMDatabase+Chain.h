//
//  FMDatabase+Chain.h
//  JRDB
//
//  Created by JMacMini on 16/7/11.
//  Copyright © 2016年 Jrwong. All rights reserved.
//

#import <FMDB/FMDB.h>
#import "JRPersistent.h"

@class JRDBChain;

@interface FMDatabase (Chain)

- (BOOL)jr_executeUpdateChain:(JRDBChain *)chain;
- (void)jr_executeUpdateChain:(JRDBChain *)chain complete:(JRDBComplete)complete;


- (NSArray<id<JRPersistent>> *)jr_executeQueryChain:(JRDBChain *)chain;

@end