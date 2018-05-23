//
//  Focus.h
//  ObjectCChained
//
//  Created by sny on 2018/5/21.
//  Copyright © 2018年 HuangYangYang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MKChainedObject/MKChainedObject.h>

@interface Focus : MKChainedClass

@property (assign, nonatomic) int type;

@property (strong, nonatomic) NSString *imageUrl;

@end

@interface FocusList : MKChainedClass

@property (strong, nonatomic) NSArray<Focus *> *list;

@end
