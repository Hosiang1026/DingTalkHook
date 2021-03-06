//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, WKBizXpnPushModel;
@protocol WKBizMessage;

@protocol WKMessageServiceProtocol <NSObject>
- (void)updateAtMeStatusWithCursor:(long long)arg1 completion:(void (^)(_Bool, id, id <IMError>))arg2;
- (void)listAtMeMessagesWithCursor:(long long)arg1 pageSize:(unsigned long long)arg2 completion:(void (^)(_Bool, id, id <IMError>))arg3;
- (void)updateLastestMessagesWithCId:(NSString *)arg1 completeBlock:(void (^)(NSArray *))arg2;
- (void)querySecretMsgReadStatus:(NSArray *)arg1 cId:(NSString *)arg2 successBlock:(void (^)(NSArray *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)shieldMessage:(long long)arg1 ofConversation:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (NSArray *)loadEarlierMessagesCreateAt:(long long)arg1 count:(long long)arg2 attachmentType:(long long)arg3 inConversation:(NSString *)arg4;
- (NSArray *)loadMessagesLaterCreateAt:(long long)arg1 attachmentType:(long long)arg2 inConversation:(NSString *)arg3;
- (unsigned long long)reDecryptThirdPartyEncryptMessage:(id <WKBizMessage>)arg1;
- (void)forwardMergeMessage:(NSArray *)arg1 nickName:(NSString *)arg2 toConversation:(NSString *)arg3 senderNames:(NSDictionary *)arg4 customTransformMsgList:(NSArray *)arg5 xpnModel:(WKBizXpnPushModel *)arg6 successBlock:(void (^)(id <WKBizMessage>))arg7 failureBlock:(void (^)(id <IMError>))arg8;
- (void)forwardWithTransformBatchMessage:(NSArray *)arg1 nickName:(NSString *)arg2 toConversation:(NSString *)arg3 successBlock:(void (^)(NSArray *))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)forwardBatchMessage:(NSArray *)arg1 nickName:(NSString *)arg2 toConversation:(NSString *)arg3 saveLocalMessagesBlock:(void (^)(NSArray *))arg4 successBlock:(void (^)(NSArray *))arg5 failureBlock:(void (^)(id <IMError>))arg6;
- (id <WKBizMessage>)updateToShieldStatus:(long long)arg1 conversationId:(NSString *)arg2 beforeBatchSave:(void (^)(id <WKBizMessage>))arg3;
- (id <WKBizMessage>)updateToRecallStatus:(long long)arg1 conversationId:(NSString *)arg2 beforeBatchSave:(void (^)(id <WKBizMessage>))arg3;
- (void)updateMessageExtension:(NSDictionary *)arg1 messageId:(long long)arg2 ofConversation:(NSString *)arg3 successBlock:(void (^)(void))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)loadReceiversOfMessage:(long long)arg1 ofConversation:(NSString *)arg2 successBlock:(void (^)(NSArray *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)loadUnreadReceivers:(NSArray *)arg1 ofMessage:(long long)arg2 ofConversation:(NSString *)arg3 successBlock:(void (^)(NSArray *))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)loadUnreadReceiversOfMessage:(long long)arg1 ofConversation:(NSString *)arg2 successBlock:(void (^)(NSArray *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)updateMessagePrivateExtension:(NSDictionary *)arg1 messageId:(long long)arg2 ofConversation:(NSString *)arg3 openIds:(NSArray *)arg4 successBlock:(void (^)(void))arg5 failureBlock:(void (^)(id <IMError>))arg6;
- (void)updateMessagePrivateTag:(long long)arg1 messageId:(long long)arg2 ofConversation:(NSString *)arg3 openIds:(NSArray *)arg4 successBlock:(void (^)(void))arg5 failureBlock:(void (^)(id <IMError>))arg6;
- (_Bool)isMessageContentChanged:(NSString *)arg1 messageId:(long long)arg2 inConversation:(NSString *)arg3;
- (_Bool)isRecallAllowed:(id <WKBizMessage>)arg1;
- (void)recallMessage:(long long)arg1 ofConversation:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (_Bool)removeMessages:(NSArray *)arg1 localIds:(NSArray *)arg2 inConversation:(NSString *)arg3 successBlock:(void (^)(void))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (_Bool)removeMessagesBefore:(id <WKBizMessage>)arg1 inConversation:(NSString *)arg2;
- (_Bool)deleteMessages:(NSArray *)arg1 ofConversation:(NSString *)arg2;
- (_Bool)removeMessages:(NSArray *)arg1 ofConversation:(NSString *)arg2;
- (void)removeMessage:(id <WKBizMessage>)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)removeMessages:(NSArray *)arg1 ofConversation:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)removeMessage:(long long)arg1 ofConversation:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)markMessagesToView:(NSArray *)arg1 ofConversation:(NSString *)arg2;
- (void)markMessagesToRead:(NSArray *)arg1 ofConversation:(NSString *)arg2;
- (void)readySendSingleMessage:(id <WKBizMessage>)arg1 toConversation:(NSString *)arg2 withNickname:(NSString *)arg3 needFilter:(_Bool)arg4 needCustomUploadTypeList:(NSArray *)arg5 uploadCustomAttachs:(void (^)(WKBizMessage *, void (^)(void), void (^)(WKBizMessage *, id <IMError>)))arg6 successBlock:(void (^)(id <WKBizMessage>))arg7 failureBlock:(void (^)(id <IMError>))arg8;
- (void)readySendSingleMessage:(id <WKBizMessage>)arg1 toConversation:(NSString *)arg2 withNickname:(NSString *)arg3 needFilter:(_Bool)arg4 successBlock:(void (^)(id <WKBizMessage>))arg5 failureBlock:(void (^)(id <IMError>))arg6;
- (void)prepareSendBatchMessages:(NSArray *)arg1 toConversation:(NSString *)arg2 withNickname:(NSString *)arg3 needFilter:(_Bool)arg4;
- (void)saveBatchLocalMessages:(NSArray *)arg1 toConversation:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)sendMessage:(id <WKBizMessage>)arg1 toConversation:(NSString *)arg2 withNickname:(NSString *)arg3 needFilter:(_Bool)arg4 needCustomUploadTypeList:(NSArray *)arg5 saveLocalMessageBlock:(void (^)(id <WKBizMessage>))arg6 uploadCustomAttachs:(void (^)(WKBizMessage *, void (^)(void), void (^)(WKBizMessage *, id <IMError>)))arg7 successBlock:(void (^)(id <WKBizMessage>))arg8 failureBlock:(void (^)(id <IMError>))arg9;
- (void)sendMessage:(id <WKBizMessage>)arg1 toConversation:(NSString *)arg2 withNickname:(NSString *)arg3 needFilter:(_Bool)arg4 saveLocalMessageBlock:(void (^)(id <WKBizMessage>))arg5 successBlock:(void (^)(id <WKBizMessage>))arg6 failureBlock:(void (^)(id <IMError>))arg7;
- (void)sendMessage:(id <WKBizMessage>)arg1 toConversation:(NSString *)arg2 withNickname:(NSString *)arg3 needFilter:(_Bool)arg4 successBlock:(void (^)(id <WKBizMessage>))arg5 failureBlock:(void (^)(id <IMError>))arg6;
- (void)sendMessage:(id <WKBizMessage>)arg1 toConversation:(NSString *)arg2 nickName:(NSString *)arg3 successBlock:(void (^)(id <WKBizMessage>))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)loadFirstMessageOfConversation:(NSString *)arg1 successBlock:(void (^)(id <WKBizMessage>))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)loadUnsafeOrderMessage:(long long)arg1 ofConversation:(NSString *)arg2 successBlock:(void (^)(id <WKBizMessage>))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)loadMessage:(long long)arg1 ofConversation:(NSString *)arg2 successBlock:(void (^)(id <WKBizMessage>))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)loadMessagesOfConversation:(NSString *)arg1 count:(unsigned long long)arg2 beforeMessage:(id <WKBizMessage>)arg3 canGapRpc:(_Bool)arg4 successBlock:(void (^)(NSArray *, _Bool))arg5 failureBlock:(void (^)(id <IMError>))arg6;
- (void)loadMessagesOfConversation:(NSString *)arg1 count:(unsigned long long)arg2 beforeMessage:(id <WKBizMessage>)arg3 successBlock:(void (^)(NSArray *, _Bool))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)loadMessagesOfConversation:(NSString *)arg1 count:(unsigned long long)arg2 before:(long long)arg3 canGapRpc:(_Bool)arg4 successBlock:(void (^)(NSArray *, _Bool))arg5 failureBlock:(void (^)(id <IMError>))arg6;
- (void)loadMessagesOfConversation:(NSString *)arg1 count:(unsigned long long)arg2 before:(long long)arg3 successBlock:(void (^)(NSArray *, _Bool))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (NSArray *)loadImageMessagesWithTimeCursor:(long long)arg1 isLoadNext:(_Bool)arg2 attachmentTypes:(NSArray *)arg3 senderId:(long long)arg4 limit:(long long)arg5 inConversation:(NSString *)arg6;
- (id <WKBizMessage>)loadMessageWithTimeCursor:(long long)arg1 offset:(long long)arg2 inConversation:(NSString *)arg3;
- (void)loadMessagesOfConversation:(NSString *)arg1 count:(unsigned long long)arg2 afterMessage:(id <WKBizMessage>)arg3 needGapRPC:(_Bool)arg4 finishBlock:(void (^)(NSArray *, _Bool))arg5;
- (NSArray *)loadMessagesWithAttachmentType:(long long)arg1 senderId:(long long)arg2 count:(unsigned long long)arg3 after:(long long)arg4 inConversation:(NSString *)arg5;
- (NSArray *)loadMessagesWithAttachmentType:(long long)arg1 senderId:(long long)arg2 count:(unsigned long long)arg3 before:(long long)arg4 inConversation:(NSString *)arg5;
- (NSArray *)loadMessagesOfConversation:(NSString *)arg1 count:(unsigned long long)arg2 beforeMessage:(id <WKBizMessage>)arg3;
- (void)setMessageFields:(NSDictionary *)arg1 messageId:(long long)arg2 conversationId:(NSString *)arg3;
- (NSArray *)resetSendingMessagesToFailedInConversation:(NSString *)arg1;
- (NSArray *)latestMessagesWithAttachmentType:(long long)arg1 senderId:(long long)arg2 limit:(long long)arg3 conversationId:(NSString *)arg4;
- (NSArray *)latestMessagesWithAttachmentType:(long long)arg1 limit:(long long)arg2 conversationId:(NSString *)arg3;
- (NSArray *)loadMessages:(NSArray *)arg1 inConversation:(NSString *)arg2;
- (id <WKBizMessage>)messageWithMessageLocalId:(NSString *)arg1 conversationId:(NSString *)arg2;
- (id <WKBizMessage>)messageWithMessageId:(long long)arg1 conversationId:(NSString *)arg2;
- (long long)atAllUid;
@end

