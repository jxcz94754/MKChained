//
//  MKChainedClass.h
//  ObjectCChained
//
//  Created by sny on 2018/5/21.
//  Copyright © 2018年 HuangYangYang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import "MKChainedPropertyClass.h"

@interface MKChainedClass : MKChainedPropertyClass

#pragma mark - SubClass - Version_0.0.1

/**
 Chain assignment Will be divided into two forms A is a form of array (recommended) in the form of another way to use a dictionary
 
 链式赋值 共分为两种形式 一种是数组的形式(推荐) 另外一种使用字典的形式*/

/**
 数组形式的链式赋值
 */
@property (copy, nonatomic) MKChainedClass *(^initParamsWithArray)(NSArray *params);

/**
 字典形式的链式赋值
 */
@property (copy, nonatomic) MKChainedClass *(^intParamsWithDictionary)(NSDictionary *params);

/**
 是否允许属性值为空

 @return 是否
 */
- (BOOL)propertyAllowEmpty;


@end
