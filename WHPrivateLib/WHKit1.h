//
//  WHKit1.h
//  WHKit1
//
//  Created by zhgz on 2018/3/12.
//  Copyright © 2018年 Migu Video Technology. All rights reserved.
//

#ifndef WHKit1_h
#define WHKit1_h

#import "NSObject+ObjDic.h"
#import "UIView+Event.h"
#import "UIResponder+Event.h"
#import "NSObject+CurrentNav.h"
#import "MGNotify.h"
#import "MGResource.h"
#import "MGMacro.h"
#import "NSObject+MGModel.h"

#define MGScaleValue(value) ((value) * MIN([UIScreen mainScreen].bounds.size.width, [UIScreen mainScreen].bounds.size.height)/ 375.f)
#define MG_IS_IPHONE_X (MAX([UIScreen mainScreen].bounds.size.width, [UIScreen mainScreen].bounds.size.height) > 800)

#define iPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone6_Plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(1125, 2001), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size)) : NO)
#define iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)

// iOS系统版本
#define SYSTEM_VERSION    [[[UIDevice currentDevice] systemVersion] doubleValue]
// 标准系统状态栏高度
#define SYS_STATUSBAR_HEIGHT		20
// 热点栏高度
#define HOTSPOT_STATUSBAR_HEIGHT	20
// 工具栏（UINavigationController.UIToolbar）高度
#define TOOLBAR_HEIGHT 				44
// 标签栏（UITabBarController.UITabBar）高度
#define TABBAR_HEIGHT 				50
// 导航栏（UINavigationController.UINavigationBar）高度
#define NAVIGATION_BAR_HEIGHT 		44
// STATUS_BAR_HEIGHT=SYS_STATUSBAR_HEIGHT+[HOTSPOT_STATUSBAR_HEIGHT]
#define STATUS_BAR_HEIGHT [UIApplication sharedApplication].statusBarFrame.size.height
// 根据STATUS_BAR_HEIGHT判断是否存在热点栏
#define IS_HOTSPOT_CONNECTED (STATUS_BAR_HEIGHT==(SYS_STATUSBAR_HEIGHT+HOTSPOT_STATUSBAR_HEIGHT)?YES:NO)
// 无热点栏时，标准系统状态栏高度+导航栏高度
#define NORMAL_STATUS_AND_NAV_BAR_HEIGHT (SYS_STATUSBAR_HEIGHT+NAVIGATION_BAR_HEIGHT)
// 实时系统状态栏高度+导航栏高度，如有热点栏，其高度包含在STATUS_BAR_HEIGHT中。
#define STATUS_AND_NAV_BAR_HEIGHT (STATUS_BAR_HEIGHT+NAVIGATION_BAR_HEIGHT)
//键盘高度
#define KEYBOARD_HEIGHT       260.0

#endif /* WHKit1_h */
