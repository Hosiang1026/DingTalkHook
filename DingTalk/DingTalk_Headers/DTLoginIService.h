//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface DTLoginIService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
- (void)tokenLoginByThirdParty:(id)arg1 mobile:(id)arg2 smsCode:(id)arg3 appKey:(id)arg4 t:(id)arg5 personalDeviceModel:(id)arg6 secureModel:(id)arg7 callback:(id)arg8;
- (void)verifyThirdPartyAccount:(id)arg1 authCode:(id)arg2 appKey:(id)arg3 t:(id)arg4 personalDeviceModel:(id)arg5 secureModel:(id)arg6 callback:(id)arg7;
- (void)getAuthSign:(id)arg1 type:(id)arg2 callback:(id)arg3;
- (void)logout:(id)arg1 callback:(id)arg2;
- (void)showUsersForVerify:(id)arg1 tmpCode:(id)arg2 callback:(id)arg3;
- (void)reportForLost:(id)arg1 pwd:(id)arg2 secureModel:(id)arg3 pdm:(id)arg4 callback:(id)arg5;
- (void)captchaGenSessionid:(id)arg1 callback:(id)arg2;
- (void)loginBySelectUser:(id)arg1 mobile:(id)arg2 tmpCode:(id)arg3 verifyCatId:(id)arg4 verifySelectUser:(id)arg5 t:(id)arg6 callback:(id)arg7;
- (void)loginByDevice:(id)arg1 sn:(id)arg2 activeCode:(id)arg3 secret:(id)arg4 callback:(id)arg5;
- (void)tokenLogin:(id)arg1 mobile:(id)arg2 smsCode:(id)arg3 appKey:(id)arg4 smsTokenDeprecated:(id)arg5 t:(id)arg6 secureModel:(id)arg7 callback:(id)arg8;
- (void)login:(id)arg1 mobile:(id)arg2 pwd:(id)arg3 appKey:(id)arg4 t:(id)arg5 secureModel:(id)arg6 callback:(id)arg7;
- (void)checkTmpCode:(id)arg1 callback:(id)arg2;
- (void)needInit:(id)arg1 callback:(id)arg2;
- (void)checkVerifyCode:(id)arg1 smsCode:(id)arg2 bizType:(id)arg3 callback:(id)arg4;
- (void)sendVerifyCode:(id)arg1 bizType:(id)arg2 viaType:(id)arg3 callback:(id)arg4;
- (void)sendSmsCode:(id)arg1 callback:(id)arg2;
- (void)umidToken:(id)arg1;
- (void)createTempSessionInfo:(id)arg1;
- (void)getAuthTmpCode:(id)arg1 callback:(id)arg2;

@end
