//
//  Restaurant.h
//  iPhoneDianCan
//
//  Created by 李炜 on 13-1-15.
//  Copyright (c) 2013年 ztb. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RestaurantUser.h"
//餐厅实体类
@interface Restaurant : NSObject///属性
@property NSInteger rid;
@property(nonatomic,retain)NSString *name;
@property(nonatomic,retain)NSString *address;
@property(nonatomic,retain)NSString *telephone;
@property double x;
@property double y;
@property(nonatomic,retain)RestaurantUser *restaurantUser;

//方法
-(id)initWithID:(NSInteger)aRid name:(NSString *)aName address:(NSString *)anAddress telephone:(NSString *)aTelephone  RestaurantUser:(RestaurantUser *)aRestaurantUser x:(double)aX y:(double)aY;
-(id)initWithDictionary:(NSDictionary *)dictionary;

@end
