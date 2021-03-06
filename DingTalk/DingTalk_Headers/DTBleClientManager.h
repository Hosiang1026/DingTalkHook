//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTBleClientDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface DTBleClientManager : NSObject <DTBleClientDelegate>
{
    NSMutableDictionary *_clientMap;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *clientMap; // @synthesize clientMap=_clientMap;
- (void).cxx_destruct;
- (void)clientWillConnect:(id)arg1;
- (void)clientDidConnected:(id)arg1;
- (void)client:(id)arg1 didConnectBroken:(id)arg2;
- (void)client:(id)arg1 didConnectFailed:(id)arg2;
- (void)closeClient:(id)arg1;
- (_Bool)reconnectClient:(id)arg1;
- (id)openClient:(id)arg1 name:(id)arg2 serviceUUID:(id)arg3 timeout:(double)arg4 autoReconnect:(_Bool)arg5;
- (id)openClient:(id)arg1 name:(id)arg2 serviceUUID:(id)arg3;
- (id)fetchClient:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

