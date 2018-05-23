//
//  ViewController.m
//  MKChainedDemo
//
//  Created by sny on 2018/5/23.
//  Copyright © 2018年 HuangYangYang. All rights reserved.
//

#import "ViewController.h"
#import "User.h"
#import "Focus.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    //1.链式写法
    User *user = (User *)[[User alloc] init].initParamsWithArray(@[@"10086",@"张三",@"18",@"女"]);
    
    NSLog(@"user.username : %@ user.userid : %@",user.userName,user.userId);
    
    NSLog(@"user.usersex : %@",user.userSex);//其中 我们看到了UserSex的赋值产生了错误
    
    Focus *focus = (Focus *)[[Focus alloc] init].initParamsWithArray(@[@100,@"123123123"]);
    
    FocusList *list = (FocusList *)[[FocusList alloc] init].initParamsWithArray(@[@[focus]]);
    
    NSLog(@"FocusList.focus.imageUrl : %@",[list.list[0] valueForKeyPath:@"imageUrl"]);
    NSLog(@"FocusList.focus.type : %d",[[list.list[0] valueForKeyPath:@"type"] intValue]);
    
    
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
