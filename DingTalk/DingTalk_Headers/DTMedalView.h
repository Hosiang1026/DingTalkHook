//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTMedalViewModel, DTWebImageView, UILabel;

@interface DTMedalView : UIView
{
    DTMedalViewModel *_viewModel;
    DTWebImageView *_iconView;
    UIView *_bgView;
    UILabel *_titleView;
}

@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) DTWebImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) DTMedalViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)tapEvent:(id)arg1;
- (void)updateViewModel:(id)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)setupDatasource;
- (void)loadConponent;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

@end

