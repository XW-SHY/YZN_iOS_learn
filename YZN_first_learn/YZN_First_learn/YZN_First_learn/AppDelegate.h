//
//  AppDelegate.h
//  YZN_First_learn
//
//  Created by 张宁 on 2018/1/25.
//  Copyright © 2018年 XXX. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

