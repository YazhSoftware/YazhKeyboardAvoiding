//
//  YazhKACollectionViewController.m
//  YazhKeyboardAvoidingSample
//
//  Created by Yazh on 26/06/2015.
//  Copyright (c) 2015 YazhSoft. All rights reserved.
//

#import "YazhKACollectionViewController.h"

@implementation YazhKACollectionViewController

static NSString * const reuseIdentifier = @"Cell";

#pragma mark Collection view data source

- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView *)collectionView {
    return 1;
}


- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section {
    return 30;
}

- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath {
    YazhKACollectionViewControllerCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:reuseIdentifier forIndexPath:indexPath];
    
    cell.label.text = [NSString stringWithFormat:@"Label %d", (int)indexPath.row];
    cell.textField.placeholder = [NSString stringWithFormat:@"Field %d", (int)indexPath.row];
    
    return cell;
}

@end

@implementation YazhKACollectionViewControllerCell
@end
