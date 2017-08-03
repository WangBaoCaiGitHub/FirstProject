//
//  AppDelegate.h
//  GitHubFirstProject
//
//  Created by WangBC on 2017/8/3.
//  Copyright © 2017年 WangBC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

