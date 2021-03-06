//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HPOfficeCastDelegate-Protocol.h"
#import "TMSonicSDKDelegate-Protocol.h"

@class DTBizProjectorDeviceModel, DTProjectorConnectionModel, DTProjectorControlPannel, NSHashTable, NSNumber, NSString, TMSonicSDK, UIAlertView;
@protocol DTProjectorManageProtocol, DTProjectorNetworkProtocol;

@interface DTProjectorsManageHandler : NSObject <HPOfficeCastDelegate, TMSonicSDKDelegate>
{
    TMSonicSDK *_sonicSDK;
    id <DTProjectorNetworkProtocol> _deviceService;
    _Bool _remoteProjectorConnecting;
    _Bool _localProjectorConnecting;
    _Bool _shouldProjectorControlPanelShow;
    _Bool _isProjectModelRestoring;
    _Bool _isRegisteredIsCastingKVO;
    _Bool _lastIsCastingValue;
    _Bool _shouldRestoreDelay;
    DTProjectorConnectionModel *_connectionModel;
    id <DTProjectorManageProtocol> _delegate;
    UIAlertView *_currentAlertView;
    CDUnknownBlockType _createRemoteConnectionCompletionCallback0;
    CDUnknownBlockType _checkProjectorStatusCompletionCallback;
    NSString *_tmpSessionID;
    NSNumber *_tmpLocalProjectorID;
    DTBizProjectorDeviceModel *_tmpLocalProjector;
    DTBizProjectorDeviceModel *_tmpRemoteProjector;
    NSString *_isCastingKeyPath;
    DTProjectorConnectionModel *_possibleRestoredModel;
    NSHashTable *_projectingStateDelegates;
}

+ (_Bool)isProjectingEntranceEnabled;
+ (_Bool)isProjectingFunctionEnabled;
+ (id)sharedInstance;
@property(retain, nonatomic) NSHashTable *projectingStateDelegates; // @synthesize projectingStateDelegates=_projectingStateDelegates;
@property(retain, nonatomic) DTProjectorConnectionModel *possibleRestoredModel; // @synthesize possibleRestoredModel=_possibleRestoredModel;
@property(nonatomic) _Bool shouldRestoreDelay; // @synthesize shouldRestoreDelay=_shouldRestoreDelay;
@property(nonatomic) _Bool lastIsCastingValue; // @synthesize lastIsCastingValue=_lastIsCastingValue;
@property(nonatomic) _Bool isRegisteredIsCastingKVO; // @synthesize isRegisteredIsCastingKVO=_isRegisteredIsCastingKVO;
@property(retain, nonatomic) NSString *isCastingKeyPath; // @synthesize isCastingKeyPath=_isCastingKeyPath;
@property(retain, nonatomic) DTBizProjectorDeviceModel *tmpRemoteProjector; // @synthesize tmpRemoteProjector=_tmpRemoteProjector;
@property(retain, nonatomic) DTBizProjectorDeviceModel *tmpLocalProjector; // @synthesize tmpLocalProjector=_tmpLocalProjector;
@property(retain, nonatomic) NSNumber *tmpLocalProjectorID; // @synthesize tmpLocalProjectorID=_tmpLocalProjectorID;
@property(copy, nonatomic) NSString *tmpSessionID; // @synthesize tmpSessionID=_tmpSessionID;
@property(copy, nonatomic) CDUnknownBlockType checkProjectorStatusCompletionCallback; // @synthesize checkProjectorStatusCompletionCallback=_checkProjectorStatusCompletionCallback;
@property(copy, nonatomic) CDUnknownBlockType createRemoteConnectionCompletionCallback0; // @synthesize createRemoteConnectionCompletionCallback0=_createRemoteConnectionCompletionCallback0;
@property(nonatomic) _Bool isProjectModelRestoring; // @synthesize isProjectModelRestoring=_isProjectModelRestoring;
@property(nonatomic) _Bool shouldProjectorControlPanelShow; // @synthesize shouldProjectorControlPanelShow=_shouldProjectorControlPanelShow;
@property(nonatomic) __weak UIAlertView *currentAlertView; // @synthesize currentAlertView=_currentAlertView;
@property(nonatomic) __weak id <DTProjectorManageProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DTProjectorConnectionModel *connectionModel; // @synthesize connectionModel=_connectionModel;
@property(nonatomic) _Bool localProjectorConnecting; // @synthesize localProjectorConnecting=_localProjectorConnecting;
@property(nonatomic) _Bool remoteProjectorConnecting; // @synthesize remoteProjectorConnecting=_remoteProjectorConnecting;
- (void).cxx_destruct;
- (void)triggerProjectorAlarm:(id)arg1 type:(long long)arg2;
@property(readonly, nonatomic, getter=isProjectingFunctionEnabled) _Bool projectingFunctionEnabled;
- (void)cancelProjectExceptionDisconnectPerform;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeProjectDelegate:(id)arg1;
- (void)addProjectDelegate:(id)arg1;
- (void)didTMSonicSDKReceivePayload:(id)arg1 payload:(id)arg2 error:(id)arg3;
- (void)didTMSonicSDKStartListening:(id)arg1 error:(id)arg2;
- (void)didTMSonicSDKInitialize:(id)arg1 error:(id)arg2;
- (void)stopSuperSonicListening;
- (void)startSuperSonicListening;
- (void)checkOrgnizationsHaveProjectors;
- (void)sendTerminateAirplayConnectionRequest;
- (void)disconnect;
- (void)checkRemoteProjectorStatusWithSessionID:(id)arg1 localProjectorUID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)handleRemoteConnectionFailedWithError:(id)arg1;
- (void)removeRemoteProjectorStatusPushObserver;
- (void)addRemoteProjectorStatusPushObserver;
- (void)cancelReceiveRemoteStatusTimeoutHandler;
- (void)receivedRemoteDevicesStatusChanged:(id)arg1;
- (void)handleReceiveRemoteStatusTimeout;
- (void)createRemoteConnectionWithSessionID:(id)arg1 localProjectorUID:(id)arg2 remoteProjector:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)createRemoteConnectionWithSessionID:(id)arg1 localProjectorCode:(id)arg2 remoteProjector:(id)arg3;
- (void)removeLocalProjectorIPPushObserver;
- (void)addLocalProjectorIPPushObserver;
- (void)handleReceiveLocalIPTimeout;
- (void)receivedLocalProjectorIP:(id)arg1;
- (void)createLocalConnectionWithDeviceUID:(id)arg1;
@property(readonly, nonatomic, getter=isProjecting) _Bool projecting;
- (void)officeCastLogOutput:(id)arg1;
- (void)officeExceptionDisconnect;
- (void)officeCastOccupy;
- (void)officeCastDisconnect;
- (void)airplayConnectWithProjectingCode:(id)arg1;
- (void)reportLocalProjectStatusWithSessionID:(id)arg1 success:(_Bool)arg2;
- (void)accountDidLogout:(id)arg1;
@property(readonly, nonatomic) id <DTProjectorNetworkProtocol> deviceService;
- (void)delayRestoreProjectStateTimeout;
- (void)restoreProjectState:(_Bool)arg1 model:(id)arg2;
- (void)restoreProjectStateIfNeed;
- (void)dealloc;
- (id)init;
- (_Bool)showAlertWhenWiFiDisconnected;
- (void)showAlertWhenAirplayConnectionOccuredError:(id)arg1;
- (void)showAlertWhenRemoteConnectFailureWithError:(id)arg1;
- (void)showAlertWhenLocalConnectFailure:(_Bool)arg1;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 tapBlock:(CDUnknownBlockType)arg5;
- (void)refreshConnectionModel;
- (void)handleFetchSessionIDSuccessWithSessionID:(id)arg1 localProjectorUID:(id)arg2;
- (void)handleChangedLocalProjectingCode:(id)arg1;
- (void)handleRemovedRemoteProjector;
- (void)handleSelectedRemoteProjector:(id)arg1;
- (void)handlePrepareAirplayConnection;
- (void)handleRestoreRemoteProjecting;
- (void)handleStopProjecting;
- (void)handleSuperSonicReceivedProjectingCode:(id)arg1;
- (void)handleRemoteProjectingFailed;
- (void)handleRemoteProjectingSuccessWithSessionID:(id)arg1 localProjectorUID:(id)arg2 remoteProjector:(id)arg3;
- (void)handlePrepareRemoteProjecting;
- (void)handleAirplayDisconnecting;
- (void)handleAirplayConnectFailed;
- (void)handleAirplayConnectSuccess;
- (void)handleAirplayConnectionException;
- (void)pannelDidPan:(id)arg1;
- (void)setProjectorControlPanelHidden:(_Bool)arg1;
- (void)setupProjectorControlPannel;
- (void)showProjectorsManageViewControllerAndRemoveMiddleViewControllers;
- (void)showProjectorsManageViewController;
@property(retain, nonatomic) DTProjectorControlPannel *projectorControlPannel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

