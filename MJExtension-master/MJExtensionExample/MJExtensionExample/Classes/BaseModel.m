//
//  BaseModel.m
//  MJExtensionExample
//
//  Created by qiandong on 7/10/15.
//  Copyright (c) 2015 小码哥. All rights reserved.
//

#import "BaseModel.h"

@implementation BaseModel


+ (NSDictionary *)replacedKeyFromPropertyName
{
    return @{@"key1" : @"key2",
             @"iter" : @"iter1.iter2[0].iter3"
             };
}

@end
