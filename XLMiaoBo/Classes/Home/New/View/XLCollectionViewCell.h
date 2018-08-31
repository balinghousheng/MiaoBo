//
//  XLCollectionViewCell.h
//  XLMiaoBo
//
//  Created by XuLi on 16/8/31.
//  Copyright © 2016年 XuLi. All rights reserved.
//

#import "XLHotModel.h"
#import "XLNewModel.h"
#import <UIKit/UIKit.h>

@interface XLCollectionViewCell : UICollectionViewCell

@property (nonatomic, strong) XLNewModel *starModel;
@property (nonatomic, strong) XLHotModel *hotModel;

+ (instancetype)collectionview;
@end
