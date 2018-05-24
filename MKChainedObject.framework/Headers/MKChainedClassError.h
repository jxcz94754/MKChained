//
//  MKChainedClassError.h
//  ObjectCChained
//
//  Created by sny on 2018/5/21.
//  Copyright © 2018年 HuangYangYang. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
    This class contains the type of error, error of arrays and dictionaries in it.Generally includes dictionary keys do not conform with the properties of the data model, the dictionary has a value of null values.The number of array and attribute quantity does not meet.The preaching of objects are neither an array or dictionary
 
    本类中包含的错误类型,数组和字典的错误在其中。一般包括字典键与数据模型的属性不相符合，字典的值为空值。数组的数量和属性数量不相符合。所传的对象既不是数组也不是字典
 */

typedef NS_ENUM(NSUInteger, MKChainedClassErrorType) {
    MKChainedClassErrorKey = 1001,             // key error
    MKChainedClassErrorValue = 1002,           // value error
    MKChainedClassErrorCrossing = 1003,        // arrray error
    MKChainedClassErrorInvalid = 1004          // object error
};

@interface MKChainedClassError : NSObject

@property (assign, nonatomic) MKChainedClassErrorType classErrorType; //MKChainedClassErrorType

+ (void)showErrorWithMKChainedClassErrorType:(MKChainedClassErrorType)classErrorType; //show NSLog with MKChainedClassErrorType

+ (void)showErrorWithMKChainedClassErrorType:(MKChainedClassErrorType)classErrorType
                              WithErrorValue:(NSString *)errorValue; //show NSLog with MKChainedClassErrorType and errorValue

/**
 显示错误的类型名字

 @param propertyName 属性名称
 @param errorType 错误的属性
 @param correctType 正确的属性
 */
+ (void)showErrrorPropertyName:(NSString *)propertyName
           ErrorParamsProperty:(NSString *)errorType
             CorrectParamsName:(NSString *)correctType;

//获取错误的类型
- (MKChainedClassErrorType)getMKChainedClassErrorType;

@end
