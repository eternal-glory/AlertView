//
//  WHAlertView.h
//  LHAlertView
//
//  Copyright © 2017年 lei wenhao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WHAlertView;

typedef enum : NSUInteger {
    WHAlertViewBottomViewTypeOne,
    WHAlertViewBottomViewTypeTwo,
} WHAlertViewBottomViewType;

@protocol WHAlertViewDelegate <NSObject>

@optional
/** right 按钮的点击事件(WHAlertViewBottomViewTypeOne 类型的确定按钮；WHAlertViewBottomViewTypeTwo 类型是right) */
- (void)didSelectedRightButtonClick;
/** left 按钮的点击事件(点击事件针对 WHAlertViewBottomViewTypeTwo 类型起作用) */
- (void)didSelectedLeftButtonClick;

@end

@interface WHAlertView : UIView

/** 确定(Right)按钮标题(WHAlertViewBottomViewTypeTwo 默认为Right按钮) */
@property (strong, nonatomic) NSString * right_btnTitle;
/** left 按钮标题 */
@property (strong, nonatomic) NSString * left_btnTitle;
/** 确定(Right)按钮标题颜色(WHAlertViewBottomViewTypeTwo 默认为Right按钮)*/
@property (strong, nonatomic) UIColor * right_btnTitleColor;
/** left 按钮标题颜色(WHAlertViewBottomViewTypeTwo 样式的Left按钮)*/
@property (strong, nonatomic) UIColor * left_btnTitleColor;

+ (instancetype)alertViewWithTitle:(NSString *)title delegate:(id<WHAlertViewDelegate>)delegate contentTitle:(NSString *)contentTitle alertViewBottomViewType:(WHAlertViewBottomViewType)alertViewBottomViewType;

- (void)show;

@end
