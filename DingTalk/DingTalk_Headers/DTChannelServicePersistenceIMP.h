//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTChannelServicePersistenceProtocol-Protocol.h"

@class DTWorkPersistence, NSString, OpenDatabase;

@interface DTChannelServicePersistenceIMP : NSObject <DTChannelServicePersistenceProtocol>
{
    OpenDatabase *_dbConnection;
    DTWorkPersistence *_workPersistence;
}

@property(retain, nonatomic) DTWorkPersistence *workPersistence; // @synthesize workPersistence=_workPersistence;
@property(retain, nonatomic) OpenDatabase *dbConnection; // @synthesize dbConnection=_dbConnection;
- (void).cxx_destruct;
- (void)asyncSaveAflowBusinessOrderWithOrgId:(long long)arg1 businessOrder:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)queryLocalAflowBusinessOrderWithOrgId:(long long)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (id)initWithDbConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
