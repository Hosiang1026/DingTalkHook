//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTWebCookiesManager : NSObject
{
}

+ (id)sharedManager;
- (void)asyncPresetCookiesForURL:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldPresetCookiesForURL:(id)arg1;
- (id)cookieWithCookieModel:(id)arg1 comment:(id)arg2;
- (void)delay_deployValidCookies;
- (void)deployValidCookies;
- (void)onAccountLoggedOutOrTokenInvalid:(id)arg1;
- (void)onAccountLoggedInOrTokenRefreshed:(id)arg1;
- (_Bool)setupCookieWithValue:(id)arg1 forKey:(id)arg2;
- (void)clearCookies;
- (void)clearDingTalkCookies;
- (void)setupCookies;
- (void)dealloc;
- (id)init;

@end

