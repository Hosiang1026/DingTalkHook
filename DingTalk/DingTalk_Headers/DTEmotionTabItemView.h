//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class DTBadgeView, DTEmotionTabItem, DTWebAnimatedImageView, UIView;

@interface DTEmotionTabItemView : UIButton
{
    DTEmotionTabItem *_item;
    DTWebAnimatedImageView *_iconView;
    UIView *_leftLine;
    UIView *_rightLine;
    DTBadgeView *_badgeView;
}

@property(retain, nonatomic) DTBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) DTWebAnimatedImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) DTEmotionTabItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)tabAction:(id)arg1;
- (void)configureWithItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

