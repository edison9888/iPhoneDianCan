//
//  MainViewController.h
//  iPhoneDianCan
//
//  Created by 李炜 on 13-1-9.
//  Copyright (c) 2013年 ztb. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RestaurantController.h"
#import "TabView.h"
#import "ZBarSDK.h"
@interface MainViewController : UIViewController<UIAlertViewDelegate,ZBarReaderDelegate>
@property(nonatomic,retain)TabView *tabView;
@end
