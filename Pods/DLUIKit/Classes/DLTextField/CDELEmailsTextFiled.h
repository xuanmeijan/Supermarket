//
//  LJCEmailsTextFiled.h
//  LJCTextFiled
//
//  Created by 刘建成 on 14-3-31.
//  Copyright (c) 2014年 刘建成. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CDELEmailsTextFiled;
@protocol CDELEmailsTextFieldDelegate <NSObject>

@optional
- (BOOL)emailsTextField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string;

@required
- (void)userEmails:(BOOL)IsTrue;

@end
@interface CDELEmailsTextFiled : UITextField

/**description
 初始化函数
 @param
 frame:控件frame
 @param
 imageStr:图片名称
 @param
 plaStr:占位字符串
 @param
 delegate:代理
 */
- (id)initWithFrame:(CGRect)frame
       andWithImage:(NSString *)imageStr
 andWithPlaceholder:(NSString *)plaStr
           delegate:(id<CDELEmailsTextFieldDelegate>)delegate;

@property (nonatomic, copy) NSString * plaStr;
@property (nonatomic, copy) NSString * imageStr;
@property (nonatomic, assign) id<CDELEmailsTextFieldDelegate> del;
@property (nonatomic, assign) BOOL isTrue;

@end
