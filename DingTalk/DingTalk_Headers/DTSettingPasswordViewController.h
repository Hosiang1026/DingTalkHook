//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class DTLoginPasswordInputView, NSString, UIButton, UILabel, UIScrollView;

@interface DTSettingPasswordViewController : DTViewController
{
    _Bool _enableBackButton;
    _Bool _enableRightButton;
    _Bool _canShouldSkipButton;
    NSString *_headerTitle;
    NSString *_headerDetail;
    CDUnknownBlockType _finishBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _passwordShouldSet;
    UIScrollView *_containerView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    DTLoginPasswordInputView *_passwordView;
    UILabel *_remarkLabel;
    UIButton *_doneButton;
}

@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UILabel *remarkLabel; // @synthesize remarkLabel=_remarkLabel;
@property(retain, nonatomic) DTLoginPasswordInputView *passwordView; // @synthesize passwordView=_passwordView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType passwordShouldSet; // @synthesize passwordShouldSet=_passwordShouldSet;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(nonatomic) _Bool canShouldSkipButton; // @synthesize canShouldSkipButton=_canShouldSkipButton;
@property(nonatomic) _Bool enableRightButton; // @synthesize enableRightButton=_enableRightButton;
@property(nonatomic) _Bool enableBackButton; // @synthesize enableBackButton=_enableBackButton;
@property(copy, nonatomic) NSString *headerDetail; // @synthesize headerDetail=_headerDetail;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (void)updateDoneButtonState;
- (void)checkPasswordSetting;
- (void)addSkipingButton;
- (void)doneButtonPressed:(id)arg1;
- (void)skipSettingPassword:(id)arg1;
- (void)resignFirstResponds:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)containerViewPressed:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadDatasource;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end
