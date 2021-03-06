/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIButton.h"
#import "UIKit-Structs.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface UICalloutBarButton : UIButton {
@private
	SEL m_action;
	int m_position;
	NSTimer* m_flashTimer;
	float m_contentWidth;
	float m_contentScale;
	int m_flashCount;
	BOOL m_isText;
	BOOL m_configured;
	BOOL m_single;
}
@property(readonly, assign, nonatomic) SEL action;
@property(readonly, assign, nonatomic) float contentWidth;
@property(readonly, assign, nonatomic) float contentScale;
+(id)buttonWithTitle:(id)title action:(SEL)action inView:(id)view;
+(id)buttonWithImage:(id)image action:(SEL)action inView:(id)view;
-(void)setupWithTitle:(id)title action:(SEL)action;
-(void)setupWithImage:(id)image action:(SEL)action;
-(void)dealloc;
-(void)configureLabel;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(CGRect)titleRectForContentRect:(CGRect)contentRect;
-(CGRect)imageRectForContentRect:(CGRect)contentRect;
-(void)configureForSingle;
-(void)configureForLeftPosition;
-(void)configureForMiddlePosition;
-(void)configureForRightPosition;
-(void)setContentScale:(float)scale;
-(void)setHighlighted:(BOOL)highlighted;
-(void)sendCallback;
-(void)cancelFlash;
-(void)flash;
-(void)flashCallback:(id)callback;
@end

