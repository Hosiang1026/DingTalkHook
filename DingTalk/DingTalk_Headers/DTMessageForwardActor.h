//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTShareMegCardDelegate-Protocol.h"

@class DTBizConversation, DTBizMessage, DTSendMessageAsMailActor, NSArray, NSDictionary, NSString, UIViewController;

@interface DTMessageForwardActor : NSObject <DTShareMegCardDelegate>
{
    long long _action;
    DTBizMessage *_forwardMessage;
    NSArray *_forwardMessageList;
    NSDictionary *_forwardMessageInfo;
    NSArray *_selectedConversations;
    NSString *_inputNotes;
    DTSendMessageAsMailActor *_mailActor;
    CDUnknownBlockType _completion;
    UIViewController *_controller;
    DTBizConversation *_originalConversation;
}

+ (void)generateMessageWithfilePath:(id)arg1 originalMessage:(id)arg2 fromConversation:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)downloadAndDecryptFile:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
+ (id)xpnModelForMessage:(id)arg1 inConversation:(id)arg2;
+ (void)sendUserInputNotes:(id)arg1 toConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)doMergeForwardMessageList:(id)arg1 fromConversation:(id)arg2 toConversation:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)doBatchForwardMessageList:(id)arg1 toConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)doForwardMessage:(id)arg1 newWKBizMessage:(id)arg2 toConversation:(id)arg3 userInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)forwardChatRecordMessage:(id)arg1 originalMessage:(id)arg2 toConversation:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)forwardActionCardMessage:(id)arg1 originalMessage:(id)arg2 toConversation:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)forwardNormalMessage:(id)arg1 originalMessage:(id)arg2 toConversation:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)forwardTranslatedTextMessage:(id)arg1 originalMessage:(id)arg2 toConversation:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)forwardGroupAnnounceMessage:(id)arg1 originalMessage:(id)arg2 toConversation:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)forwardSpaceMessage:(id)arg1 originalMessage:(id)arg2 toConversation:(id)arg3 forwardMessageInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)forwardOAMessage:(id)arg1 originalMessage:(id)arg2 toConversation:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)forwardAssistantMessage:(id)arg1 originalMessage:(id)arg2 toConversation:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)forwardTextMessage:(id)arg1 originalMessage:(id)arg2 toConversation:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)globalForwardActor;
@property(readonly, nonatomic) DTBizConversation *originalConversation; // @synthesize originalConversation=_originalConversation;
@property(readonly, nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)sendShareInfoToConversation:(id)arg1;
- (void)cancelSendShareInfoToConversation;
- (_Bool)canDecryptedSendMessage;
- (_Bool)isSupportedBatchSend:(id)arg1;
- (id)generateWKBizMessageFromMessage:(id)arg1;
- (id)customTaskWithConversation:(id)arg1 notes:(id)arg2;
- (id)mergedTaskWithConversation:(id)arg1 messages:(id)arg2;
- (id)batchedTaskWithConversation:(id)arg1 messages:(id)arg2;
- (id)singleTaskWithConversation:(id)arg1 message:(id)arg2;
- (void)serialForwardMessageList:(id)arg1 toConversations:(id)arg2;
- (void)prepareForwardMessageList:(id)arg1 toConversations:(id)arg2;
- (void)checkAllowForwardSpaceMessage:(id)arg1 toConversation:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)checkAllowForwardEncryptSpaceMessage:(id)arg1 toConversation:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)checkAllowForwardMessages:(id)arg1 toConversations:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentShareCardView;
- (void)batchCreateConversations:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkConversations:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlePickedConversations:(id)arg1 keys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handlePickedContacts:(id)arg1 keys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handlePickedContactInfo:(id)arg1 contactKeys:(id)arg2 conversationInfo:(id)arg3 conversationKeys:(id)arg4;
- (void)forwardMessageAsMail;
- (void)dismissLoadingInView:(id)arg1;
- (void)showLoadingInView:(id)arg1 message:(id)arg2 delay:(double)arg3;
- (void)presentMutablePickerInContainer:(id)arg1;
- (void)presentSinglePickerInContainer:(id)arg1 animated:(_Bool)arg2;
- (void)presentSinglePicker:(_Bool)arg1;
- (void)postSendFailureToast;
- (void)postSendSuccessToast;
- (void)dismissConversationPicker:(_Bool)arg1;
- (void)mergeForwardMessages:(id)arg1;
- (void)batchForwardMessages:(id)arg1;
- (void)forwardMessage:(id)arg1;
- (void)reset;
- (void)setupWithController:(id)arg1 conversation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
