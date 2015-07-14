//
//  TestModel.h
//  MJExtensionExample
//
//  Created by qiandong on 7/10/15.
//  Copyright (c) 2015 小码哥. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseModel.h"

typedef enum {
    SexMaleTest,
    SexFemaleTest
} SexTest;


@class InnerModel;

@interface TestModel :BaseModel

@property (copy, nonatomic) NSString *str;
@property (copy, nonatomic) NSString *null;
@property (assign, nonatomic) NSInteger int1;
@property (assign, nonatomic) CGFloat float1;
@property (copy, nonatomic) NSString *date;
@property (assign, nonatomic) BOOL bool1;
@property (assign, nonatomic) BOOL bool2;
@property (assign, nonatomic) SexTest sex;

@property (copy, nonatomic) NSString *keyNeedMapping;
@property (copy, nonatomic) NSString *key1;
@property (copy, nonatomic) NSString *iter;

@property (strong, nonatomic) InnerModel *innerModel;
@property (strong, nonatomic) TestModel *selfModel;

@property (strong, nonatomic) NSArray *innerModelArray;

@property (copy, nonatomic) NSString *missingStr;
@property (assign, nonatomic) NSInteger missingInt;

@end
