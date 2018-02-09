//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"

@class CBCentralManager, NSString;

@interface DTBlueToothChecker : NSObject <CBCentralManagerDelegate>
{
    CBCentralManager *_centralManager;
    long long _state;
    CDUnknownBlockType _finishBlock;
}

@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
- (void).cxx_destruct;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)checkBlueToothStatus:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
