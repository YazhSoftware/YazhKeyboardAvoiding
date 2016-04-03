//
//  YazhKeyboardAvoidingScrollView.h
//  YazhKeyboardAvoiding
//
//  Created by Yazh on 30/09/2013.
//  Copyright 2015 YazhSoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIScrollView+YazhKeyboardAvoidingAdditions.h"

@interface YazhKeyboardAvoidingScrollView : UIScrollView <UITextFieldDelegate, UITextViewDelegate>
- (void)contentSizeToFit;
- (BOOL)focusNextTextField;
- (void)scrollToActiveTextField;
@end
