//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LWSQLiteContextDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface DTMailSQLiteContextManager : NSObject <LWSQLiteContextDelegate>
{
    NSMutableDictionary *_contextMap;
    NSMutableDictionary *_dbMap;
}

+ (id)sharedManager;
+ (id)contextLock;
@property(retain, nonatomic) NSMutableDictionary *dbMap; // @synthesize dbMap=_dbMap;
@property(retain, nonatomic) NSMutableDictionary *contextMap; // @synthesize contextMap=_contextMap;
- (void).cxx_destruct;
- (id)sqliteFetchObjectsWithSql:(id)arg1 parameters:(id)arg2 database:(id)arg3 entityClazz:(Class)arg4 shardingId:(id)arg5 onlyHookConn:(_Bool)arg6;
- (long long)sqliteGetRowIdWithEntity:(id)arg1;
- (id)sqliteGetTableNameWithDatabase:(id)arg1 entityClazz:(Class)arg2 shardingId:(id)arg3;
- (void)setContextWithDatabase:(id)arg1 forAccount:(id)arg2;
- (void)setContext:(id)arg1 forAccount:(id)arg2;
- (void)clearContextExclude:(id)arg1;
- (id)contextForAccount:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
