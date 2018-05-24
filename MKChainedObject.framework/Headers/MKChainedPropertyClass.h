//
//  MKChainedPropertyClass.h
//  ObjectCChained
//
//  Created by sny on 2018/5/21.
//  Copyright © 2018年 HuangYangYang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import "MKChainedClassConst.h"
#import "MKChainedClassError.h"

//数据源类型
typedef NS_ENUM(NSUInteger, MKChainedParamsType) {
    MKChainedParamsDictionary = 101,         // Dictionary
    MKChainedParamsArray = 102              // Array
};

@interface MKChainedPropertyClass : NSObject


@property (assign, nonatomic) MKChainedParamsType chainedParamsType; //参数的类型

@property (assign, nonatomic) BOOL allowEmpty;                      //是否允许空值的存在

//根据不同的方式来进行数据赋值

- (void)setValueWithCount:(NSUInteger)count WithParams:(NSArray *_Nullable)params withProperties:(objc_property_t _Nullable *_Nullable)properties;

- (void)setValueWithCount:(NSUInteger)count WithDictionaryParams:(NSDictionary *_Nullable)params withProperties:(objc_property_t _Nullable *_Nullable)properties;

@end

//对参数params内的数据进行判断的类
@interface MKChainedCheckPropertyClass : MKChainedPropertyClass

//显示获取当前类的属性类型
+ (NSString *_Nullable)PropertiesName:(const char * _Nullable)property_Attributes;

//获取数组内元素的类型
+ (NSString *_Nullable)ParamsItemsName:(id _Nullable )paramsItems;

//检查赋值与被赋值的属性是否一致
+ (BOOL)checkNODifferenceWithPropertyName:(NSString * _Nullable )propertyName
                           WithParamsName:(NSString *_Nullable)paramsName
                              AndProperty:(NSString *_Nullable)property;

@end


