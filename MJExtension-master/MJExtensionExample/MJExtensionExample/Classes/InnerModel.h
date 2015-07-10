//
//  InnerModel.h
//  MJExtensionExample
//
//  Created by qiandong on 7/10/15.
//  Copyright (c) 2015 小码哥. All rights reserved.
//

#import <Foundation/Foundation.h>

@class TestModel;
@interface InnerModel : NSObject

@property (copy, nonatomic) NSString *innerStr;
@property (assign, nonatomic) NSInteger innerInt;

@property (strong, nonatomic) TestModel *testModel;

@property (copy, nonatomic) NSString *innerMissing;

@end
