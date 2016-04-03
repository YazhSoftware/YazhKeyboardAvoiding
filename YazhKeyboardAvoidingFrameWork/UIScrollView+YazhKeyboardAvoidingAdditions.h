//
//  UIScrollView+YazhKeyboardAvoidingAdditions.h
//  YazhKeyboardAvoiding
//
//  Created by Yazh on 30/09/2013.
//  Copyright 2015 YazhSoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView (YazhKeyboardAvoidingAdditions)
- (BOOL)YazhKeyboardAvoiding_focusNextTextField;
- (void)YazhKeyboardAvoiding_scrollToActiveTextField;

- (void)YazhKeyboardAvoiding_keyboardWillShow:(NSNotification*)notification;
- (void)YazhKeyboardAvoiding_keyboardWillHide:(NSNotification*)notification;
- (void)YazhKeyboardAvoiding_updateContentInset;
- (void)YazhKeyboardAvoiding_updateFromContentSizeChange;
- (void)YazhKeyboardAvoiding_assignTextDelegateForViewsBeneathView:(UIView*)view;
- (UIView*)YazhKeyboardAvoiding_findFirstResponderBeneathView:(UIView*)view;
-(CGSize)YazhKeyboardAvoiding_calculatedContentSizeFromSubviewFrames;
@end
