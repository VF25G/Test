//
//  AppDelegate.h
//  learnGit
//
//  Created by MiniCongee on 17/1/18.
//  Copyright © 2017年 MiniCongee. All rights reserved.
//
//  branch test
//  Creating a new branch is quick AND simple.


#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

