//
//  XLWatchLiveViewController.h
//  XLMiaoBo
//
//  Created by XuLi on 16/8/31.
//  Copyright © 2016年 XuLi. All rights reserved.
//

#import "XLHotModel.h"
#import <UIKit/UIKit.h>

/**
 直播页面
 */
@interface XLWatchLiveViewController : UIViewController

@property (nonatomic, strong) XLHotModel *hotModel;

@property (nonatomic, strong) NSArray *allModels;

@property (nonatomic, strong) UIImage *image;
@end
