//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString;

@protocol DTAlphaServiceProtocol <NSObject>
- (void)jumpToWiFiList;
- (_Bool)checkIfConnectAlphaWiFiAndShowAlert:(_Bool)arg1;
- (_Bool)checkIfWANInput;
- (void)scanWiFiWithPWD:(NSString *)arg1 ssids:(NSArray *)arg2;
- (int)sendTcpMessage:(NSData *)arg1 sock:(int)arg2;
- (void)stopAlphaDiscoverService;
- (void)stopAlphaService:(_Bool)arg1;
- (void)startAlphaService;
- (void)logoutToStopAlphaService;
- (void)loginToStartAlphaService;
@end
