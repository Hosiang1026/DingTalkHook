//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UIImageView;

@interface DTDingNotificationCenterEntryPopView : UIView
{
    NSString *_title;
    UIImageView *_bgLeftImageView;
    UIImageView *_bgRightImageView;
    UIButton *_leftBtn;
    UIButton *_rightBtn;
    UIView *_sepLineImageView;
    NSArray *_items;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UIView *sepLineImageView; // @synthesize sepLineImageView=_sepLineImageView;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) UIButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(retain, nonatomic) UIImageView *bgRightImageView; // @synthesize bgRightImageView=_bgRightImageView;
@property(retain, nonatomic) UIImageView *bgLeftImageView; // @synthesize bgLeftImageView=_bgLeftImageView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)btnClicked:(id)arg1;
- (void)configWithItems:(id)arg1;
- (void)loadComponent;
- (id)init;

@end
