//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTBizDingCommentModel, DTBizDingMinutesModel, DTBizDingModel, NSArray, NSDictionary;

@protocol DTDingServicePersistenceProtocol <NSObject>
- (void)recursionCorrectConferenceEndTimeLimitCount:(long long)arg1 completeBlock:(void (^)(_Bool))arg2;
- (long long)loadExpiredCountWithCurrentTime:(double)arg1 loadType:(unsigned long long)arg2;
- (void)loadExpiredTasksWithCurrentTime:(double)arg1 limitCount:(long long)arg2 completeBlock:(void (^)(NSArray *))arg3;
- (long long)loadExpiredTasksWithCurrentTime:(double)arg1;
- (void)loadLocalSubTasksWithParentId:(long long)arg1 cursor:(long long)arg2 pageSize:(unsigned long long)arg3 completeBlock:(void (^)(NSArray *, _Bool))arg4;
- (void)updateCommentReadStatusWithDingId:(long long)arg1;
- (NSArray *)loadUnconfirmDingsWithStartTime:(long long)arg1 pageSize:(long long)arg2;
- (void)deleteAllLocalDing;
- (NSArray *)loadTasksWithStartTime:(long long)arg1 endTime:(long long)arg2 limit:(long long)arg3;
- (NSArray *)loadEventDatesWithStartTime:(long long)arg1 endTime:(long long)arg2 limit:(long long)arg3;
- (DTBizDingCommentModel *)loadDingComment:(long long)arg1;
- (NSArray *)loadLastUnfinishedTasksCount:(long long)arg1;
- (NSArray *)loadFinishedTasksCursor:(long long)arg1 limit:(long long)arg2 type:(long long)arg3;
- (NSArray *)loadUnfinishedTasksCursor:(long long)arg1 limit:(long long)arg2 type:(long long)arg3;
- (NSArray *)loadNeedResetCommentStatusDingIds;
- (void)resetUnReadCommentCountWithDingIds:(NSArray *)arg1;
- (NSArray *)loadDingsWithUid:(long long)arg1 cursor:(long long)arg2 limit:(long long)arg3;
- (unsigned long long)loadSendDingCountWithSenderUid:(long long)arg1;
- (NSArray *)loadLocalSenderUids;
- (void)confirmAllDing;
- (NSArray *)updateAllDingCommentUnReadStatus:(_Bool)arg1;
- (long long)dingUnConfirmDingCountInLocalDBV2;
- (long long)dingUnConfirmDingCountInLocalDB;
- (long long)dingUnreadCommentsCountInLocalDB;
- (NSArray *)loadLocalUnreadDingCommentswithCursor:(long long)arg1 limit:(long long)arg2;
- (void)removeDingCommentByIds:(NSArray *)arg1;
- (void)removeDingCommentById:(long long)arg1;
- (_Bool)saveDingComment:(DTBizDingCommentModel *)arg1;
- (_Bool)hasSendDingInLocal;
- (NSArray *)localDeadlineDings;
- (long long)hasExpireDeadlingCount;
- (long long)willExpireDeadlineDingCount;
- (NSArray *)longestDeadlineDingsWithNum:(long long)arg1;
- (void)deleteOldDingWithStatus:(_Bool)arg1 deleteCount:(long long)arg2;
- (long long)lastDingModifyAtNormalDing:(_Bool)arg1;
- (long long)dingCountInLocalWithStatus:(_Bool)arg1;
- (void)updateAllDingsHiddenWithType:(long long)arg1;
- (void)batchUpdateHiddenStatus:(long long)arg1 dingIds:(NSArray *)arg2;
- (void)batchRemoveDing:(NSArray *)arg1;
- (void)clearDeletedDing;
- (NSArray *)loadEarlierReceivedDings:(long long)arg1 withCursor:(long long)arg2 andLimit:(long long)arg3;
- (NSArray *)loadLatesReceivedDings:(long long)arg1 withCursor:(long long)arg2 andLimit:(long long)arg3;
- (NSArray *)loadLatesReceivedDings:(long long)arg1 withLimit:(long long)arg2;
- (unsigned long long)loadNewRepliedDingCountWithFilterType:(long long)arg1;
- (unsigned long long)loadUnconfirmedCountWithFilterType:(long long)arg1;
- (NSDictionary *)loadUnreadCommentDing;
- (NSArray *)loadEarlierSentDings:(long long)arg1 withCursor:(long long)arg2 andLimit:(long long)arg3;
- (NSArray *)loadLatesSentDings:(long long)arg1 withCursor:(long long)arg2 andLimit:(long long)arg3;
- (NSArray *)loadLatesSentDings:(long long)arg1 withLimit:(long long)arg2;
- (NSArray *)loadDingsForDingIds:(NSArray *)arg1;
- (void)asyncLoadDing:(long long)arg1 doneBlock:(void (^)(DTBizDingModel *))arg2;
- (DTBizDingMinutesModel *)loadDingMinutes:(long long)arg1;
- (DTBizDingModel *)loadDing:(long long)arg1;
- (_Bool)batchSaveDing:(NSArray *)arg1 isUpdateUnreadComments:(_Bool)arg2;
- (_Bool)updateDingByLocalId:(DTBizDingModel *)arg1;
- (_Bool)saveDing:(DTBizDingModel *)arg1 isUpdateUnreadComments:(_Bool)arg2;
- (_Bool)saveDingMinutes:(DTBizDingMinutesModel *)arg1;
- (_Bool)saveDing:(DTBizDingModel *)arg1;
@end

