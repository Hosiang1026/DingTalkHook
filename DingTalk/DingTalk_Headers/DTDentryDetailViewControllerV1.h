//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTDentryDetailInterfaceV1-Protocol.h"
#import "DTDentryPickerDelegate-Protocol.h"
#import "DTTipsViewDelegate-Protocol.h"
#import "LANJKWebViewProgressDelegate-Protocol.h"
#import "LAWebViewDelegate-Protocol.h"
#import "QLPreviewControllerDataSource-Protocol.h"
#import "QLPreviewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIDocumentInteractionControllerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class BLDentrySimple, BLPreviewItem, DTBizCSpaceDentry, DTDentryAudioPlayView, DTDentryDetailPresenterV1, DTDownloadFileViewV1, DTTipsView, DTWaterMarkView, LANJKWebViewProgress, LANJKWebViewProgressView, LAWebView, NSArray, NSString, NSURL, QLPreviewController, UIButton, UIDocumentInteractionController, UIImageView, UILabel, UITapGestureRecognizer, UIView;
@protocol DTFileBasedInterfaceRouteDelegate;

@interface DTDentryDetailViewControllerV1 : DTViewController <QLPreviewControllerDataSource, QLPreviewControllerDelegate, UIAlertViewDelegate, UIDocumentInteractionControllerDelegate, UIWebViewDelegate, LANJKWebViewProgressDelegate, DTDentryPickerDelegate, DTTipsViewDelegate, LAWebViewDelegate, DTDentryDetailInterfaceV1>
{
    _Bool _isSupportOpenFileUsingOtherApp;
    _Bool _isBossMode;
    _Bool _didSetupConstraints;
    _Bool _shouldRotate;
    _Bool _originShouldAutorotate;
    _Bool _isRotatingToPortait;
    _Bool _navigationBarHidden;
    _Bool _shouldReloadPreviewController;
    DTDentryDetailPresenterV1 *_detailModule;
    DTBizCSpaceDentry *_dentry;
    BLDentrySimple *_dentrySimple;
    id <DTFileBasedInterfaceRouteDelegate> _routeDelegate;
    id _spaceContext;
    unsigned long long _actions;
    id _extraInfo;
    UIImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_expireDateLabel;
    UILabel *_tipLabel;
    UIButton *_fileOperationBtn;
    UIView *_contentView;
    UIView *_bottomToolbarView;
    DTDownloadFileViewV1 *_downloadView;
    LANJKWebViewProgressView *_webProgressView;
    LAWebView *_previewWebView;
    DTWaterMarkView *_waterMarkView;
    UIImageView *_previewImageView;
    LANJKWebViewProgress *_webProgressProxy;
    QLPreviewController *_previewController;
    BLPreviewItem *_previewItem;
    UIDocumentInteractionController *_docInteractionController;
    NSArray *_actionButtons;
    UITapGestureRecognizer *_tapGesture;
    NSURL *_fileURL;
    NSString *_creatorName;
    DTTipsView *_tipsView;
    NSString *_emlFilePath;
    DTDentryAudioPlayView *_audioPlayView;
    NSString *_audioFilePath;
    DTTipsView *_printGuideView;
}

+ (id)fileIcons;
@property(nonatomic) DTTipsView *printGuideView; // @synthesize printGuideView=_printGuideView;
@property(nonatomic) _Bool shouldReloadPreviewController; // @synthesize shouldReloadPreviewController=_shouldReloadPreviewController;
@property(copy, nonatomic) NSString *audioFilePath; // @synthesize audioFilePath=_audioFilePath;
@property(retain, nonatomic) DTDentryAudioPlayView *audioPlayView; // @synthesize audioPlayView=_audioPlayView;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(copy, nonatomic) NSString *emlFilePath; // @synthesize emlFilePath=_emlFilePath;
@property(nonatomic) _Bool isRotatingToPortait; // @synthesize isRotatingToPortait=_isRotatingToPortait;
@property(nonatomic) _Bool originShouldAutorotate; // @synthesize originShouldAutorotate=_originShouldAutorotate;
@property(nonatomic) _Bool shouldRotate; // @synthesize shouldRotate=_shouldRotate;
@property(retain, nonatomic) DTTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(copy, nonatomic) NSString *creatorName; // @synthesize creatorName=_creatorName;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) NSArray *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(retain, nonatomic) UIDocumentInteractionController *docInteractionController; // @synthesize docInteractionController=_docInteractionController;
@property(retain, nonatomic) BLPreviewItem *previewItem; // @synthesize previewItem=_previewItem;
@property(retain, nonatomic) QLPreviewController *previewController; // @synthesize previewController=_previewController;
@property(retain, nonatomic) LANJKWebViewProgress *webProgressProxy; // @synthesize webProgressProxy=_webProgressProxy;
@property(retain, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(retain, nonatomic) DTWaterMarkView *waterMarkView; // @synthesize waterMarkView=_waterMarkView;
@property(retain, nonatomic) LAWebView *previewWebView; // @synthesize previewWebView=_previewWebView;
@property(retain, nonatomic) LANJKWebViewProgressView *webProgressView; // @synthesize webProgressView=_webProgressView;
@property(retain, nonatomic) DTDownloadFileViewV1 *downloadView; // @synthesize downloadView=_downloadView;
@property(retain, nonatomic) UIView *bottomToolbarView; // @synthesize bottomToolbarView=_bottomToolbarView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *fileOperationBtn; // @synthesize fileOperationBtn=_fileOperationBtn;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *expireDateLabel; // @synthesize expireDateLabel=_expireDateLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) id extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) _Bool isBossMode; // @synthesize isBossMode=_isBossMode;
@property(nonatomic) _Bool isSupportOpenFileUsingOtherApp; // @synthesize isSupportOpenFileUsingOtherApp=_isSupportOpenFileUsingOtherApp;
@property(nonatomic) unsigned long long actions; // @synthesize actions=_actions;
@property(retain, nonatomic) id spaceContext; // @synthesize spaceContext=_spaceContext;
@property(nonatomic) __weak id <DTFileBasedInterfaceRouteDelegate> routeDelegate; // @synthesize routeDelegate=_routeDelegate;
@property(retain, nonatomic) BLDentrySimple *dentrySimple; // @synthesize dentrySimple=_dentrySimple;
@property(retain, nonatomic) DTBizCSpaceDentry *dentry; // @synthesize dentry=_dentry;
@property(retain, nonatomic) DTDentryDetailPresenterV1 *detailModule; // @synthesize detailModule=_detailModule;
- (void).cxx_destruct;
- (void)printGuideViewTapAction:(id)arg1;
- (void)removePrintGuideViewIfNeed;
- (void)showPrintGuideIfNeed;
- (void)getConversationWithCid:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)buildTransmitContent;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
- (void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1;
- (void)webView:(id)arg1 progress:(double)arg2;
- (void)webViewProgress:(id)arg1 updateProgress:(float)arg2;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)loadDetailCommentCount:(id)arg1;
- (void)postError:(id)arg1;
- (void)endLoading;
- (void)startLoading;
- (void)didPlayAudio:(id)arg1;
- (void)didShowEml:(id)arg1 previewImmediately:(_Bool)arg2;
- (void)changeShowEMLBtn;
- (void)showPhotoBrowser:(id)arg1;
- (void)didRenameSuccess:(id)arg1;
- (void)didDeleteDentryFailure:(id)arg1;
- (void)didDeleteDentrySuccess;
- (void)didOnlinePreviewFailWithReason:(id)arg1;
- (void)didShowPreviewAvailable;
- (void)didShowPreviewByURL:(id)arg1;
- (void)reloadPreviewControllerOnce;
- (void)didDownloadFile:(id)arg1 previewImmediately:(_Bool)arg2;
- (void)didShowImage:(id)arg1;
- (void)updateDownloadProgress:(double)arg1 currentSize:(id)arg2 totalSize:(id)arg3;
- (void)showDentryDownloadStatus:(unsigned long long)arg1;
- (void)didDownloadFailure:(id)arg1;
- (void)showDentrySize:(id)arg1;
- (void)showDentryType:(id)arg1;
- (void)showPreviewSupportStatus:(id)arg1 size:(unsigned long long)arg2 isEncrypt:(_Bool)arg3;
- (void)showDentryExpireDate:(id)arg1;
- (void)showDentryName:(id)arg1;
- (void)loadBottomOperationBarWith:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)didAccessFail:(id)arg1;
- (void)didDecryptFail:(id)arg1 canRepeat:(_Bool)arg2;
- (void)willStartShowOnlinePreview;
- (void)willStartShowDentryFile:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dentryPicker:(id)arg1 didChooseDentry:(id)arg2;
- (void)dentryPickerDidCancel:(id)arg1;
- (void)refreshCommentDetailBottomButton:(int)arg1;
- (void)rotateDeviceToPortrait;
- (void)showGoLandscapeUserTips;
- (void)dentryPopBack:(id)arg1;
- (void)sendToFileAssit;
- (void)moveClicked;
- (void)openLike:(id)arg1;
- (void)openComment:(id)arg1;
- (void)onPrintClicked;
- (void)onShareLinkClicked;
- (void)onOpenInOtherClick:(id)arg1;
- (void)onTapPressImage:(id)arg1;
- (void)sheetActionEvent:(unsigned long long)arg1;
- (void)moreClicked:(id)arg1;
- (void)bizShareSaveToSpace:(id)arg1;
- (void)checkNeedToAddSaveToSpace:(id)arg1;
- (void)onCancelDownloadClick:(id)arg1;
- (void)onDownloadClick:(id)arg1;
- (void)onPreviewDocClick:(id)arg1;
- (void)onBottomBarItemClicked:(id)arg1;
- (void)handleAction:(unsigned long long)arg1;
- (void)processWarterMarkOnView:(id)arg1;
- (void)layoutBottombarSubviews;
- (void)setupBottomToolBarWithEncrypt:(_Bool)arg1 fileExtension:(id)arg2 isReadOnly:(_Bool)arg3;
- (void)tipsViewDidClick:(id)arg1;
- (_Bool)shouldHideBottomToolbar;
- (void)disableBottomToolBar;
- (void)enableBottomToolBar;
- (void)enableRightButtonItem:(_Bool)arg1;
- (void)hiddenRightButtonItem:(_Bool)arg1;
- (void)addVerticalLineToView:(id)arg1;
- (id)getDentryFileInfoTitle;
- (unsigned long long)findActionItemByTitle:(id)arg1;
- (id)bottomToolbarButtonWithTitle:(id)arg1 imageName:(id)arg2 frame:(struct CGRect)arg3 action:(SEL)arg4;
- (id)bottomToolbarButtonWithTitle:(id)arg1 image:(id)arg2 frame:(struct CGRect)arg3 action:(SEL)arg4;
- (void)rotateToPortraitAndQuitFullScreenIfNeeded;
- (void)videoFinished;
- (void)enterBackground;
- (void)onAccountLogoutNotification:(id)arg1;
- (void)moveFailedNotification:(id)arg1;
- (void)renameNotification:(id)arg1;
- (void)deleteNotification:(id)arg1;
- (void)addNotification;
- (void)switchToFullScreen:(_Bool)arg1;
- (void)orientationChanged:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)updateViewConstraints;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

