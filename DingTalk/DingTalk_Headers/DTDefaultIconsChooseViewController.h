//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class DTBizConversation, DTDefaultIconsHeadView, DTDefaultIconsMenuView, DTEnterpriseCard, NSString;

@interface DTDefaultIconsChooseViewController : DTViewController
{
    long long _chooseIconNextStyle;
    DTEnterpriseCard *_enterpriseCard;
    DTBizConversation *_conversation;
    NSString *_iconMediaId;
    CDUnknownBlockType _finishBlock;
    DTDefaultIconsHeadView *_topIconView;
    DTDefaultIconsMenuView *_iconChooseView;
    long long _iconActionType;
}

@property(nonatomic) long long iconActionType; // @synthesize iconActionType=_iconActionType;
@property(retain, nonatomic) DTDefaultIconsMenuView *iconChooseView; // @synthesize iconChooseView=_iconChooseView;
@property(retain, nonatomic) DTDefaultIconsHeadView *topIconView; // @synthesize topIconView=_topIconView;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(copy, nonatomic) NSString *iconMediaId; // @synthesize iconMediaId=_iconMediaId;
@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) DTEnterpriseCard *enterpriseCard; // @synthesize enterpriseCard=_enterpriseCard;
@property(nonatomic) long long chooseIconNextStyle; // @synthesize chooseIconNextStyle=_chooseIconNextStyle;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)configPhotoImage:(id)arg1;
- (void)onPhotoPick:(long long)arg1;
- (void)chooseFromAlbum;
- (void)openCamera;
- (void)onPhotoClick;
- (id)getIconsActionItems:(id)arg1;
- (void)getDefaultIcons;
- (id)getEnterpriseIconActionItem;
- (void)configHeadView;
- (double)statusBarAndNavigationBarHeight;
- (void)onUpdateDefaultIcon:(id)arg1;
- (void)onFinishBlock:(id)arg1;
- (void)configNavigationBar;
- (void)didReceiveMemoryWarning;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

@end

