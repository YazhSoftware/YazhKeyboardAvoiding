//
//  YazhKeyboardAvoidingCollectionView.h
//  YazhKeyboardAvoiding
//
//  Created by Michael Tyson on 30/09/2013.
//  Copyright 2015 A Tasty Pixel & The CocoaBots. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIScrollView+YazhKeyboardAvoidingAdditions.h"

@interface YazhKeyboardAvoidingCollectionView : UICollectionView <UITextFieldDelegate, UITextViewDelegate>
- (BOOL)focusNextTextField;
- (void)scrollToActiveTextField;
@end
