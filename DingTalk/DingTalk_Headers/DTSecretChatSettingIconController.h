//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class NSTimer, UIImageView;

@interface DTSecretChatSettingIconController : DTTableViewController
{
    _Bool _hasMessage;
    unsigned long long _level;
    NSTimer *_timer;
    UIImageView *_headImageView;
}

@property(nonatomic) _Bool hasMessage; // @synthesize hasMessage=_hasMessage;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)didMoveToParentViewController:(id)arg1;
- (void)reload;
- (void)onChangeToLevel:(unsigned long long)arg1;
- (void)loadDataSource;
- (void)showHeaderAnimation;
- (id)headerView:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;

@end
