//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WKSyncRegisterProtocol-Protocol.h"

@class NSString;
@protocol WKSyncNoticeHandlerProtocol;

@interface DTBombRedEnvelopSyncHandler : NSObject <WKSyncRegisterProtocol>
{
}

- (void)getBizDataWithTypes:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)receiveDatas:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (id)modelClasses;
- (id)types;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <WKSyncNoticeHandlerProtocol> noticeHandler;
@property(readonly) Class superclass;

@end

