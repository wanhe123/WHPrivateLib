#import <UIKit/UIKit.h>

@interface UIViewController (MGContainer)

@property (nonatomic, assign) CGFloat mgTopHeight;
@property (nonatomic, strong, nullable) id mgTop;
@property (nonatomic, strong, nullable) id mgMain;

@property (nonatomic, assign) CGFloat mgBottomHeight;
@property (nonatomic, strong, nullable) id mgBottom;

@property (nonatomic, weak, nullable) id mgUpMore;
@property (nonatomic, strong, readonly, nullable) UIButton * mgMoreCloseButton;

- (void)mgInShowUpMore:(nonnull id)more;

@end



typedef NS_ENUM(NSInteger,MGContainerElementType) {
	MGContainerElementTop,
	MGContainerElementMain,
	MGContainerElementBottom,
};

@protocol MGContainerProtocol <NSObject>
@optional

-(void)mgContainerEvent:(nonnull NSString *)eventName info:(nullable id)info;

// 隐藏、显示部分元素
- (void)mgHidePartlyElement;
- (void)mgShowPartlyElement;
@end

@interface UIResponder (MGContainerNotify)

// 修改自己的高度
- (void)mgChangeSelfHeight:(CGFloat)height animationDuration:(CGFloat)duration;

// 修改指定元素的高度
- (void)mgChangeContainer:(MGContainerElementType)element height:(CGFloat)height animationDuration:(CGFloat)duration;

// 调用MGContainerProtocol里隐藏/显示部分元素的方法
- (void)mgHidePartlyContainer:(MGContainerElementType)element;
- (void)mgShowPartlyContainer:(MGContainerElementType)element;

- (void)mgShowMoreRes:(nonnull id)more;

@end
