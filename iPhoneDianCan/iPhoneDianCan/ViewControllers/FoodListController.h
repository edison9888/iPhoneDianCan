//
//  FirstViewController.h
//  iPhoneDianCan
//
//  Created by 李炜 on 13-1-1.
//  Copyright (c) 2013年 ztb. All rights reserved.
//
@class Order;
@class Restaurant;
#import <UIKit/UIKit.h>

@interface FoodListController : UIViewController<UITableViewDataSource,UITableViewDelegate,UIAlertViewDelegate,UIScrollViewDelegate>
@property NSInteger rid;// 餐厅id
@property(nonatomic,retain)UITableView *table;
@property(nonatomic,retain)NSMutableArray *allCatagores;//所有种类
@property(nonatomic,retain)Order *currentOrder;
-(id)initWithRecipe:(Restaurant *)restaurant;
- (void)synchronizeOrder:(Order *)order ;
@end
