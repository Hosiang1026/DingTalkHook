//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class YYThreadSafeDictionary;

@interface DTMicroAppIdProvider : NSObject
{
    YYThreadSafeDictionary *_rInfoMap;
    YYThreadSafeDictionary *_hInfoMap;
}

+ (id)sharedProvider;
+ (long long)extContactsAppId;
+ (long long)customerManageAppId;
@property(retain, nonatomic) YYThreadSafeDictionary *hInfoMap; // @synthesize hInfoMap=_hInfoMap;
@property(retain, nonatomic) YYThreadSafeDictionary *rInfoMap; // @synthesize rInfoMap=_rInfoMap;
- (void).cxx_destruct;
- (id)fetchHostInfo;
- (id)fetchRecordIdInfo;
- (void)persistInfo;
- (id)parseAppNameWithURL:(id)arg1 appContext:(id)arg2;
- (id)parseAppIdWithURL:(id)arg1 precise:(_Bool)arg2 appContext:(id)arg3;
- (id)recordIdForURL:(id)arg1;
- (id)parseAppNameWithURL:(id)arg1;
- (id)parseAppIdWithURL:(id)arg1 precise:(_Bool)arg2;
- (id)parseAppIdWithURL:(id)arg1;
- (void)recordAppId:(id)arg1 agentId:(id)arg2 appName:(id)arg3 withURL:(id)arg4;

@end

