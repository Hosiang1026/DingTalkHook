//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "BLSDKLoginViewDelegate-Protocol.h"

@class BLSDKLoginView, NSString, UIView;

@interface DTMailSSOLoginController : DTViewController <BLSDKLoginViewDelegate>
{
    CDUnknownBlockType _completion;
    BLSDKLoginView *_ssoView;
    UIView *_emptyView;
}

@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) BLSDKLoginView *ssoView; // @synthesize ssoView=_ssoView;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)onRetryButtonClicked:(id)arg1;
- (void)hideEmptyView;
- (void)showEmptyViewWithTitle:(id)arg1;
- (void)requestCanUnbindStatus;
- (void)loginView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)loginViewDidFinishLoad:(id)arg1;
- (void)loginViewDidStartLoad:(id)arg1;
- (void)loginView:(id)arg1 didCompleteWithResult:(id)arg2 error:(id)arg3;
- (id)langString;
- (void)buildParam;
- (void)startLoadSSOView;
- (void)startLoad;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
