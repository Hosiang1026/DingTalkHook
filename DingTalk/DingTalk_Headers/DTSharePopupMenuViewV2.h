//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTShareJSInfoModel, DTShareShortenAdpater, NSArray, NSString, UIButton, UIColor, UILabel, UIViewController, UTShareContent;

@interface DTSharePopupMenuViewV2 : UIView
{
    _Bool _isShowing;
    NSString *_topTitle;
    UIColor *_mainBackgroundColor;
    UIColor *_defaultMenuItemColor;
    long long _channelStyle;
    long long _operateStyle;
    UIViewController *_viewController;
    CDUnknownBlockType _clickSuccessBlock;
    CDUnknownBlockType _clickIconCallbackBlock;
    CDUnknownBlockType _clickFailureBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _channelNameBlock;
    CDUnknownBlockType _argsBlock;
    CDUnknownBlockType _clickFailureWithChannelTypeBlock;
    CDUnknownBlockType _cancelWithChannelTypeBlock;
    UTShareContent *_shareContent;
    NSString *_pageOriginalURL;
    DTShareJSInfoModel *_shareInfo;
    UTShareContent *_defaultShareContent;
    NSString *_defaultPageOriginalURL;
    UIButton *_backgroundButton;
    UILabel *_topTitleLabel;
    UIView *_containerView;
    UIView *_dividingLine;
    UIView *_cancelButton;
    NSArray *_channelArray;
    NSArray *_operateArray;
    DTShareShortenAdpater *_shortURLAdpater;
    UIView *_bgBlurView;
}

+ (id)shareStrFromStyle:(long long)arg1;
+ (long long)channelTypeFromOrderKey:(id)arg1;
+ (id)channelNameForInviteWithChannelStyle:(long long)arg1;
@property(retain, nonatomic) UIView *bgBlurView; // @synthesize bgBlurView=_bgBlurView;
@property(retain, nonatomic) DTShareShortenAdpater *shortURLAdpater; // @synthesize shortURLAdpater=_shortURLAdpater;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(copy, nonatomic) NSArray *operateArray; // @synthesize operateArray=_operateArray;
@property(copy, nonatomic) NSArray *channelArray; // @synthesize channelArray=_channelArray;
@property(retain, nonatomic) UIView *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *dividingLine; // @synthesize dividingLine=_dividingLine;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *topTitleLabel; // @synthesize topTitleLabel=_topTitleLabel;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(copy, nonatomic) NSString *defaultPageOriginalURL; // @synthesize defaultPageOriginalURL=_defaultPageOriginalURL;
@property(retain, nonatomic) UTShareContent *defaultShareContent; // @synthesize defaultShareContent=_defaultShareContent;
@property(retain, nonatomic) DTShareJSInfoModel *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(copy, nonatomic) NSString *pageOriginalURL; // @synthesize pageOriginalURL=_pageOriginalURL;
@property(retain, nonatomic) UTShareContent *shareContent; // @synthesize shareContent=_shareContent;
@property(copy, nonatomic) CDUnknownBlockType cancelWithChannelTypeBlock; // @synthesize cancelWithChannelTypeBlock=_cancelWithChannelTypeBlock;
@property(copy, nonatomic) CDUnknownBlockType clickFailureWithChannelTypeBlock; // @synthesize clickFailureWithChannelTypeBlock=_clickFailureWithChannelTypeBlock;
@property(copy, nonatomic) CDUnknownBlockType argsBlock; // @synthesize argsBlock=_argsBlock;
@property(copy, nonatomic) CDUnknownBlockType channelNameBlock; // @synthesize channelNameBlock=_channelNameBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType clickFailureBlock; // @synthesize clickFailureBlock=_clickFailureBlock;
@property(copy, nonatomic) CDUnknownBlockType clickIconCallbackBlock; // @synthesize clickIconCallbackBlock=_clickIconCallbackBlock;
@property(copy, nonatomic) CDUnknownBlockType clickSuccessBlock; // @synthesize clickSuccessBlock=_clickSuccessBlock;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) long long operateStyle; // @synthesize operateStyle=_operateStyle;
@property(nonatomic) long long channelStyle; // @synthesize channelStyle=_channelStyle;
@property(retain, nonatomic) UIColor *defaultMenuItemColor; // @synthesize defaultMenuItemColor=_defaultMenuItemColor;
@property(retain, nonatomic) UIColor *mainBackgroundColor; // @synthesize mainBackgroundColor=_mainBackgroundColor;
@property(copy, nonatomic) NSString *topTitle; // @synthesize topTitle=_topTitle;
- (void).cxx_destruct;
- (void)showTipWithMessage:(id)arg1;
- (void)swipeHandler:(id)arg1;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)showInView:(id)arg1 animation:(_Bool)arg2;
- (long long)convertShareType:(int)arg1;
- (void)shareToThirdPartyPlatform:(int)arg1 withShareContent:(id)arg2;
- (void)didClickSharePlatform:(long long)arg1;
- (void)mergeShareContentFromDic:(id)arg1 forShareContent:(id)arg2;
- (id)deepCopyShareContent;
- (id)createShareContent:(int)arg1;
- (void)statisticsWithType:(long long)arg1;
- (void)stickBackConversationList:(id)arg1;
- (void)stickToConversationList:(id)arg1;
- (void)saveImage:(id)arg1;
- (void)addToConfInvite:(id)arg1;
- (void)addToFavorite:(id)arg1;
- (void)refreshLink:(id)arg1;
- (void)copyLink:(id)arg1;
- (void)shareToSafari:(id)arg1;
- (void)shareToSMS:(id)arg1;
- (void)shareToQQ:(id)arg1;
- (void)shareToSina:(id)arg1;
- (void)shareToAlipayTimeline:(id)arg1;
- (void)shareToAlipaySession:(id)arg1;
- (void)shareToWeixinFeed:(id)arg1;
- (void)shareToWeixinFriend:(id)arg1;
- (void)shareToWhatsapp:(id)arg1;
- (void)shareToFaceBook:(id)arg1;
- (void)shareToDingCircle:(id)arg1;
- (void)shareToDingFriend:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)backgroundButtonPressed:(id)arg1;
- (void)configureOperateArray;
- (id)buildQQFriendActionItem;
- (id)buildConfInviteItemItemActionItem;
- (id)buildSmsActionItem;
- (id)buildSinaActionItem;
- (id)buildAlipayActionItem;
- (id)buildWhatsappActionItem;
- (id)buildFaceBookActionItem;
- (id)buildWeixinFeedActionItem;
- (id)buildWeixinFriendActionItem;
- (id)buildDingCircleActionItem;
- (id)buildDingFriendActionItem;
- (void)configureChannelArray;
- (void)configureOrderedChannelArray;
- (void)directShowToChannelInView:(id)arg1;
- (id)nameWithChannel:(long long)arg1;
- (void)onActionButtonClick:(id)arg1;
- (void)configureScrollView;
- (void)addGesture;
- (void)configurePopupMenuView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

