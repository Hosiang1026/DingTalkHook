//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTAppLaunchDelegate-Protocol.h"
#import "DTConversationSelectViewControllerDelegate-Protocol.h"
#import "DTJumpServiceProtocol-Protocol.h"

@class NSDictionary, NSString, NSURL;

@interface DTJumpService : NSObject <DTConversationSelectViewControllerDelegate, DTAppLaunchDelegate, DTJumpServiceProtocol>
{
    int _shareType;
    NSDictionary *_shareData;
    NSDictionary *_remoteInfo;
    NSURL *_urlToHandle;
}

+ (id)sharedService;
@property(retain, nonatomic) NSURL *urlToHandle; // @synthesize urlToHandle=_urlToHandle;
@property(copy, nonatomic) NSDictionary *remoteInfo; // @synthesize remoteInfo=_remoteInfo;
@property(retain, nonatomic) NSDictionary *shareData; // @synthesize shareData=_shareData;
@property(nonatomic) int shareType; // @synthesize shareType=_shareType;
- (void).cxx_destruct;
- (void)handleLaunchSourceAnalysisWithInfo:(id)arg1;
- (id)buildJumpURLWithAction:(id)arg1 parameters:(id)arg2;
- (id)buildJumpURLWithPath:(id)arg1 parameters:(id)arg2;
- (id)buildJumpURLWithType:(id)arg1 path:(id)arg2 parameters:(id)arg3;
- (id)parselLinkURL:(id)arg1;
- (_Bool)openExternalURL:(id)arg1;
- (_Bool)conformToUnifiedJumpRule:(id)arg1 schemas:(id)arg2;
- (_Bool)conformToUnifiedJumpRule:(id)arg1;
- (id)conversationSelectViewAttachmentDataForSend;
- (int)conversationSelectViewAttachmentType;
- (void)handleRedEnvelopAlipayCallBack:(id)arg1;
- (_Bool)handleShareFileToConversation:(id)arg1;
- (void)handleShareExtensionImageDing:(id)arg1;
- (_Bool)handleShareExtensionImageDingWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleShareExtensionImageWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleShareExtensionLinkWithQueryParams:(id)arg1 fragment:(id)arg2;
- (void)postOrgnizationSwitchNotify:(long long)arg1 suiteId:(id)arg2 appId:(id)arg3 agentId:(id)arg4 tips:(id)arg5 appUrl:(id)arg6 ddParams:(id)arg7;
- (void)disMissModelAndSwitchTab:(long long)arg1 params:(id)arg2;
- (_Bool)handlePageExtContactsWithQueryParams:(id)arg1;
- (_Bool)handleActionJumpRobotWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleActionVpnResultWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleActionFocusDingWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleActionMessageToDingWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleActionMessageReactionWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleActionChangeEnterpriseGroupWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleMailLoginWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleMailConfigWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleActionSwitchTabWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleActionOpenOTOByDingTalkIdWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleActionUpgradeGroupWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleActionDingWordWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleActionDingCheckInQRWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleActionDingCheckInWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handlePrintTaskListPageWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleProjectorManagePageWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleBussinessPageWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleSearchEnteprisePageWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleActionJoinGroupWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleActionRequestWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleActionQROALoginWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleActionDebugConsoleQRLoginWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleActionIPadQRLoginWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleActionQRLoginWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleActionAppWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleActionJumpWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handlePageMyProfile:(id)arg1 fragment:(id)arg2;
- (_Bool)handlePageOrgCustomizeManage:(id)arg1 fragment:(id)arg2;
- (_Bool)handlePageBindMail:(id)arg1 fragment:(id)arg2;
- (_Bool)handleAddStaffWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleJoinTeamInvitePageWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleMyQRCodePageWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleEnterpriseRootPageWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleGroupSettingPageWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleSafeCenterPageWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleDisatchOrgMailsPageWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleBirthdaySettingPageWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleARScanPageWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleSubManagerRoleAddingWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleManagerRoleSettingWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleMyRedenvelopPageWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleRobotsSettingPageWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleRobotsAddFinishPageWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)dealWithSmartDevice:(long long)arg1 queryParams:(id)arg2;
- (_Bool)resetDeviceWifi:(long long)arg1 queryParams:(id)arg2;
- (_Bool)startBindDevice:(long long)arg1 queryParams:(id)arg2;
- (void)jumpToNavController:(id)arg1;
- (void)gotoSmartDeviceUnsupportPage;
- (void)gotoSmartDeviceAppUpgradePage:(id)arg1;
- (_Bool)handleSmartDeviceBindUIWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleDeviceDetailClosedWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)processSmartDeviceActionType:(id)arg1;
- (_Bool)handleSmartDeviceBindWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleSmartDeviceSocketBindWithQueryParams:(id)arg1;
- (_Bool)handleVersionControlledSmartDeviceBindWithQueryParams:(id)arg1 userInfo:(id)arg2 url:(id)arg3;
- (_Bool)handleRobotsMarketPageWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handleChannelApplyPageWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleChannelDetailPageWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleBatchAddExtContactsWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleChannelManagementPageWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleChannelPageWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleChannelassistantPageWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handlePageCoFolderListWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleExternalContactPageWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleDiagnositicsPageWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handlePageAttendAssistantWithQueryParams:(id)arg1;
- (_Bool)handleEmotionPkgDetailPageWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleJoinGroupValidationWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handlePageMobileNumberChangeWithQueryParams:(id)arg1;
- (_Bool)handlePageMobileNumberWithQueryParams:(id)arg1;
- (_Bool)handlePageDingAccountWithQueryParams:(id)arg1;
- (_Bool)handlePageDingXiaoMiWithQueryParams:(id)arg1;
- (long long)orgIdWithQueryParams:(id)arg1;
- (_Bool)handleRedpacketsDetailWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleGroupChatWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (void)openConversation:(id)arg1;
- (_Bool)handleOpenCRMConversationWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (void)startCreatingTeam:(long long)arg1 from:(unsigned long long)arg2;
- (_Bool)handleOrgCreateFromConversationWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleOrgCreateV2H5WithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleOrgCreateV2WithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleOrgCreateV1WithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleNewOrgCreateV1WithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleOrgCreateWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleAlphaServerQuickConnectWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleOrgQRInviteWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleOrgInviteWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleChooseCallPanelWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleBizCallPanelWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleInternationalConferencePanelWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleConferencePanelWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handlePageVideoConferenceListWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleVideoConferenceWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleConferenceWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleBusinessConferenceOrgWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleBossListWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleManageOrgWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleWorkAttenDetailWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleOrgInfoWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleWorkAttendanceWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleWorkCalendarWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleWorkMessageWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handlePageCSpaceWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handlePageFilesHelperWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handlePageFriendRequestWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleOrgApplyListRequestWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handlePageConferenceListWithQueryParams:(id)arg1;
- (_Bool)handlePageMailSignatureListWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handlePageMailDetailWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handlePageMailComposeWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)handlePageMailListWithQueryParams:(id)arg1 userInfo:(id)arg2;
- (_Bool)mailCanJumpWithInterrupt:(_Bool)arg1;
- (_Bool)handleJumpServiceWithRocetMode:(id)arg1 openAppBizType:(long long)arg2 isFirstPage:(_Bool)arg3 corpId:(id)arg4 appId:(id)arg5 agentId:(id)arg6 navigationController:(id)arg7;
- (_Bool)handlePageHTMLWithQueryParams:(id)arg1 fragment:(id)arg2 userInfo:(id)arg3;
- (_Bool)handlePageMobileProfileWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handlePageProfileWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handlePageDingCreateWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handlePageDingDetailWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)handlePageDingListWithQueryParams:(id)arg1;
- (void)showWarningAlertWithTitle:(id)arg1;
- (_Bool)handlePageConversationWithQueryParams:(id)arg1 fragment:(id)arg2;
- (_Bool)dispatchOpenApiWithURL:(id)arg1;
- (_Bool)dispatchShareExtensionWithName:(id)arg1 queryParams:(id)arg2 fragment:(id)arg3;
- (_Bool)dispatchActionWithName:(id)arg1 queryParams:(id)arg2 fragment:(id)arg3;
- (_Bool)dispatchPageWithName:(id)arg1 queryParams:(id)arg2 fragment:(id)arg3 userInfo:(id)arg4 url:(id)arg5;
- (id)generateQueryParamsWithQuery:(id)arg1;
- (_Bool)handleURL:(id)arg1 userInfo:(id)arg2;
- (_Bool)handleURL:(id)arg1;
- (void)handleLaunchActionWithInfo:(id)arg1;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)handleAuthAlipayCallback:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)applicationDidEnterMainPage;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

