//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTDingCreateBasePresenter.h"

@class DTBizDingSendModel, DTDingCreatorInputParams, DTDingSendTimesModel, NSArray, NSDictionary, NSString;

@interface DTDingCreatorPresenter : DTDingCreateBasePresenter
{
    _Bool _checkMaxContentCount;
    _Bool _checkMemeberCountLimitByPhone;
    _Bool _checkTooLateByPhone;
    _Bool _isSetuped;
    _Bool _canSendToAll;
    _Bool _isCheckingSendTimes;
    _Bool _isSending;
    _Bool _isUploading;
    DTBizDingSendModel *_bizDingSendModel;
    DTDingSendTimesModel *_dingSendTimesModel;
    NSString *_amrFilePath;
    NSArray *_remindBeforeDeadlineSelections;
    NSDictionary *_minituesMap;
    DTDingCreatorInputParams *_inputParams;
}

+ (id)formatUserIds:(id)arg1;
@property(retain, nonatomic) DTDingCreatorInputParams *inputParams; // @synthesize inputParams=_inputParams;
@property(copy, nonatomic) NSDictionary *minituesMap; // @synthesize minituesMap=_minituesMap;
@property(copy, nonatomic) NSArray *remindBeforeDeadlineSelections; // @synthesize remindBeforeDeadlineSelections=_remindBeforeDeadlineSelections;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(nonatomic) _Bool isSending; // @synthesize isSending=_isSending;
@property(copy, nonatomic) NSString *amrFilePath; // @synthesize amrFilePath=_amrFilePath;
@property(retain, nonatomic) DTDingSendTimesModel *dingSendTimesModel; // @synthesize dingSendTimesModel=_dingSendTimesModel;
@property(readonly, nonatomic) DTBizDingSendModel *bizDingSendModel; // @synthesize bizDingSendModel=_bizDingSendModel;
@property(nonatomic) _Bool isCheckingSendTimes; // @synthesize isCheckingSendTimes=_isCheckingSendTimes;
@property(nonatomic) _Bool canSendToAll; // @synthesize canSendToAll=_canSendToAll;
@property(nonatomic) _Bool isSetuped; // @synthesize isSetuped=_isSetuped;
@property(nonatomic) _Bool checkTooLateByPhone; // @synthesize checkTooLateByPhone=_checkTooLateByPhone;
@property(nonatomic) _Bool checkMemeberCountLimitByPhone; // @synthesize checkMemeberCountLimitByPhone=_checkMemeberCountLimitByPhone;
@property(nonatomic) _Bool checkMaxContentCount; // @synthesize checkMaxContentCount=_checkMaxContentCount;
- (void).cxx_destruct;
- (id)taskRemindUgentLevelText;
- (long long)taskRemindUgentLevel;
- (void)setTaskRemindUgentLevel:(long long)arg1;
- (id)draftModel;
- (void)setupTaskDeadline:(long long)arg1;
- (id)customTitle;
- (long long)carbonCopyCount;
- (id)userIconModelWithUids:(id)arg1;
- (id)ccIconModels;
- (id)dingAddedCcUids;
- (void)setDingAddedCcUids:(id)arg1;
- (id)dingCcUids;
- (void)setDingCcUids:(id)arg1;
- (void)setTaskRemindMinutesIndex:(long long)arg1;
- (id)taskRemindDisableIndexes;
- (id)remindTextWithIndex:(long long)arg1;
- (long long)taskRemindMinutesWithIndex:(long long)arg1;
- (long long)indexOfRemindMinutes:(long long)arg1;
- (long long)remindMinutesBeforeDeadlineWithIndex:(long long)arg1;
- (id)taskRemindText;
- (long long)taskRemindMinutesIndex;
- (id)taskRemindMinutesText;
- (_Bool)isReplyVisibility;
- (void)setReplyVisibility:(_Bool)arg1;
- (_Bool)isTask;
- (void)setTask:(_Bool)arg1;
- (id)cycleRemindRule;
- (void)setCycleRemindRule:(id)arg1;
- (id)cycleRemindText;
- (_Bool)isCycleRemind;
- (void)setIsCycleRemind:(_Bool)arg1;
- (_Bool)isRemindAtDelayTime;
- (void)setIsRemindAtDelayTime:(_Bool)arg1;
- (id)remindTime;
- (void)setRemindTime:(id)arg1;
- (id)dingSendTime;
- (void)setDefaultDingSendTime;
- (void)setDingSendTime:(id)arg1;
- (long long)remindMinutesBeforeDeadline;
- (void)setRemindMinutesBeforeDeadline:(long long)arg1;
- (id)dingDeadline;
- (void)setDingDeadline:(id)arg1;
- (id)dingReceiverIconModels;
- (id)dingAddedReceiverUids;
- (void)setDingAddedReceiverUids:(id)arg1;
- (void)setReceiverCount:(long long)arg1;
- (long long)receiverCount;
- (id)dingReceiverUids;
- (void)setDingReceiverUids:(id)arg1;
- (long long)dingUgentLevel;
- (void)setDingUgentLevel:(long long)arg1;
- (id)dingAttachments;
- (void)setDingAttachments:(id)arg1;
- (long long)dingContentType;
- (void)setDingContentType:(long long)arg1;
- (void)deleteDingAudio;
- (id)localDingAudioPath;
- (id)dingAudio;
- (void)setDingAudioWithPath:(id)arg1 mediaId:(id)arg2 duration:(long long)arg3 volumns:(id)arg4;
- (void)setDingAudioWithMessageAudioAttach:(id)arg1;
- (id)dingContent;
- (void)setDingContent:(id)arg1;
- (_Bool)isConfirm;
- (void)setConfirm:(_Bool)arg1;
- (id)messageAudioWithMessage:(id)arg1;
- (id)buildBizDingAttachmentWithMessage:(id)arg1;
- (void)updateDingTaskSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)updateDingSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)sendTaskDirectlyWithMessage:(id)arg1 inConversation:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)sendDingDirectlyWithMessage:(id)arg1 inConversation:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)uploadAudio:(id)arg1 message:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (long long)sendDingWithMessage:(id)arg1 inConversation:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)sendDingWithInputParams:(id)arg1 attatchedViewController:(id)arg2 loadingTitle:(id)arg3 changeRemindTypeBlock:(CDUnknownBlockType)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)handleSendDingError:(long long)arg1 withAttatchedViewController:(id)arg2 inputParams:(id)arg3 changeRemindTypeBlock:(CDUnknownBlockType)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)correctInvalidOptions;
- (_Bool)isReceiversOnlySelf;
- (long long)checkSendDingRequirement;
- (void)setDingExtension:(id)arg1 value:(id)arg2;
- (_Bool)hasHistoryDing;
- (_Bool)isConfirmNeedWhenQuit;
- (id)deadlineTextWithSuffix:(id)arg1;
- (id)sendTimeText;
- (_Bool)onlyCanDingByApp;
- (id)maxReceiverCountOverLimitString;
- (long long)maxReceiverCountAtATime;
- (long long)orgDingQuota;
- (long long)personDingQuota;
- (long long)maxReceiverCount;
- (void)checkDingTimesWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)setupPresenterWithParam:(id)arg1;
- (_Bool)isNotificationDing;
- (void)configAttachmentExtraWithInputParam:(id)arg1;
- (id)defaultDeadLine;
- (id)init;

@end

