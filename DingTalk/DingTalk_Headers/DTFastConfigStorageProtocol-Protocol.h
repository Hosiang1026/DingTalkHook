//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol DTFastConfigStorageProtocol <NSObject>
- (void)asyncQueryFastConfigTopicJson:(NSString *)arg1 finishBlock:(void (^)(NSString *, NSString *))arg2;
- (void)asyncSaveFastConfigTopicJson:(NSString *)arg1 subJson:(NSString *)arg2 finishBlock:(void (^)(_Bool))arg3;
- (void)asyncQueryFastConfigMainJson:(void (^)(NSString *))arg1;
- (void)asyncSaveFastConfigMainJson:(NSString *)arg1 finishBlock:(void (^)(_Bool))arg2;
@end

