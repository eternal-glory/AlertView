//
//  ViewController.m
//  LHAlertView
//
//  Copyright © 2017年 lei wenhao. All rights reserved.
//

#import "ViewController.h"

#import "WHAlertView.h"


@interface ViewController () <WHAlertViewDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    
    UIButton * button = [UIButton buttonWithType:UIButtonTypeCustom];
    [button setTitle:@"弹框" forState:UIControlStateNormal];
    [button setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
    button.frame = CGRectMake(0, 0, 50, 30);
    button.center = self.view.center;
    [self.view addSubview:button];
    [button addTarget:self action:@selector(buttonClick:) forControlEvents:UIControlEventTouchUpInside];
}

- (void)buttonClick:(UIButton  *)btn {
    WHAlertView * alertView =[WHAlertView alertViewWithTitle:@"提示" delegate:self contentTitle:@"这是一个提示框" alertViewBottomViewType:WHAlertViewBottomViewTypeTwo];
    
    [alertView show];
}

- (void)didSelectedLeftButtonClick {
    NSLog(@"左按钮事件");
}

- (void)didSelectedRightButtonClick {
    NSLog(@"右按钮事件");
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
