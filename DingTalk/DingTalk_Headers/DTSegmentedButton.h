//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class DTBadgeView;

@interface DTSegmentedButton : UIButton
{
    DTBadgeView *_badgeView;
}

@property(retain, nonatomic) DTBadgeView *badgeView; // @synthesize badgeView=_badgeView;
- (void).cxx_destruct;
- (void)setBadgeValue:(id)arg1 style:(unsigned long long)arg2;
- (void)loadComponents;
- (void)layoutSubviews;
- (id)init;

@end

