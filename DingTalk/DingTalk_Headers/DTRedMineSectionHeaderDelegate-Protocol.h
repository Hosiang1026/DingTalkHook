//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTRedMineSectionHeader, NSString, UIView;

@protocol DTRedMineSectionHeaderDelegate <NSObject>
- (UIView *)mineSectionHeader:(DTRedMineSectionHeader *)arg1 midViewForStatus:(long long)arg2;
- (NSString *)mineSectionHeader:(DTRedMineSectionHeader *)arg1 switcherTextForStatus:(long long)arg2;

@optional
- (void)mineSectionHeader:(DTRedMineSectionHeader *)arg1 didSwitchStatus:(long long)arg2;
@end
