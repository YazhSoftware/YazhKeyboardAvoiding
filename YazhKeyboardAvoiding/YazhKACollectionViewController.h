//
//  YazhKACollectionViewController.h
//  YazhKeyboardAvoidingSample
//
//  Created by Yazh on 26/06/2015.
//  Copyright (c) 2015 YazhSoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YazhKACollectionViewController : UICollectionViewController

@end

@interface YazhKACollectionViewControllerCell : UICollectionViewCell
@property (nonatomic, strong) IBOutlet UILabel * label;
@property (nonatomic, strong) IBOutlet UITextField * textField;
@end