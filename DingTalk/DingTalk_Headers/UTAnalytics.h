//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, UTSelfStaticsManager, UTTracker;

@interface UTAnalytics : NSObject
{
    UTTracker *mDefaultTracker;
    NSMutableDictionary *mTrackers;
    UTSelfStaticsManager *mSelfStaticsManager;
}

+ (void)unregisterPlugin:(id)arg1;
+ (void)registerPlugin:(id)arg1;
+ (id)utsid;
+ (_Bool)handleUrl:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
- (void).cxx_destruct;
- (void)_turnOnRealTimeDebugOrNot;
- (void)setCrashCaughtListener:(id)arg1;
- (void)turnOffCrashHandler;
- (void)turnOffAllUTLog;
- (void)turnOnUTInfo;
- (void)turnOnDebug;
- (_Bool)setAppKey:(id)arg1 secret:(id)arg2 authCode:(id)arg3 index:(int)arg4;
- (_Bool)setAppKey:(id)arg1 authCode:(id)arg2 index:(int)arg3;
- (_Bool)setAppKey:(id)arg1 authCode:(id)arg2;
- (_Bool)setAppKey:(id)arg1 secret:(id)arg2;
- (_Bool)setAppKey:(id)arg1 index:(int)arg2;
- (_Bool)setAppKey:(id)arg1;
- (id)getTracker:(id)arg1;
- (id)getDefaultTracker;
- (void)updateSessionProperties:(id)arg1;
- (void)userRegister:(id)arg1;
- (void)updateUserAccount:(id)arg1 userid:(id)arg2;
- (void)setChannel:(id)arg1;
- (void)setAppVersion:(id)arg1;
- (void)setRequestAuthentication:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
