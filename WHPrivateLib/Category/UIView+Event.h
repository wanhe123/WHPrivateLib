//
//  UIView+Event.h
//  MiGuKit
//
//  Created by zhgz on 2018/3/28.
//  Copyright © 2018年 Migu Video Technology. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^TouchBlock)(void);

@interface UIView (Event)<UIGestureRecognizerDelegate>

//================优先使用
- (void)blockClick:(TouchBlock)block;
- (void)blockLongPress:(TouchBlock)block;
- (void)blockDoubleClick:(TouchBlock)block;
- (void)blockTwoFingerTapped:(TouchBlock)block;
//================优先使用

//- (void)blockTapped:(TouchBlock)block;

//- (void)blockTouchedDown:(TouchBlock)block;
//- (void)blockTouchedUp:(TouchBlock)block;

@end



//typedef NS_ENUM(NSUInteger, MGGestureRecognizerState) {
//	MGGestureRecognizerStateBegan, ///< gesture start
//	MGGestureRecognizerStateMoved, ///< gesture moved
//	MGGestureRecognizerStateEnded, ///< gesture end
//	MGGestureRecognizerStateCancelled, ///< gesture cancel
//};

//@property(nonatomic,assign)BOOL enableEvent;
//
//@property (nonatomic, copy) void (^touchBlock)(UIView *view, MGGestureRecognizerState state, NSSet *touches, UIEvent *event);
