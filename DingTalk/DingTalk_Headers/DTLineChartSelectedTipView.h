//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface DTLineChartSelectedTipView : UIView
{
    long long _lineStyle;
    UILabel *_scoreLabel;
    UIImageView *_tipBgImageView;
}

@property(retain, nonatomic) UIImageView *tipBgImageView; // @synthesize tipBgImageView=_tipBgImageView;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(nonatomic) long long lineStyle; // @synthesize lineStyle=_lineStyle;
- (void).cxx_destruct;
- (id)imageWithStyle:(long long)arg1;
- (void)setScore:(long long)arg1;
- (void)setCircelCenterY:(double)arg1;
- (void)addViews;
- (id)initWithFrame:(struct CGRect)arg1 lineStyle:(long long)arg2;

@end

