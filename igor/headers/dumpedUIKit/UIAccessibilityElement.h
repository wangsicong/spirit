/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <Foundation/NSObject.h>

@class NSString;

@interface UIAccessibilityElement : NSObject {
@private
	id _storage;
}
@property(retain, nonatomic) NSString* accessibilityLabel;
@property(retain, nonatomic) NSString* accessibilityValue;
@property(retain, nonatomic) NSString* accessibilityHint;
@property(assign, nonatomic) CGRect accessibilityFrame;
@property(assign, nonatomic) unsigned long long accessibilityTraits;
@property(assign, nonatomic) BOOL isAccessibilityElement;
@property(assign, nonatomic) id accessibilityContainer;
-(id)initWithAccessibilityContainer:(id)accessibilityContainer;
@end

