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

typedef NS_ENUM(NSUInteger, MKChainedParamsType) {
    MKChainedParamsString = 100,             // String
    MKChainedParamsNumber = 101,             // Number
    MKChainedParamsArray = 102,              // Array
    MKChainedParamsModel = 103,              // Model
};

@interface MKChainedPropertyClass : NSObject


@property (assign, nonatomic) MKChainedParamsType chainedParamsType; //参数的类型

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

//获取错误类型
+ (MKChainedClassErrorType)getMKChainedClassError;

@end


