//
//  User.h
//  ObjectCChained
//
//  Created by sny on 2018/5/21.
//  Copyright © 2018年 HuangYangYang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MKChainedObject/MKChainedObject.h>

@interface User : MKChainedClass

@property (copy, nonatomic) NSString *userId;

@property (copy, nonatomic) NSString *userName;

@property (copy, nonatomic) NSString *userAge;

@property (copy, nonatomic) NSString *userSex;

@end
