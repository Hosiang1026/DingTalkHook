//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTLiveVideoConfig : NSObject
{
}

+ (id)sharedConfig;
- (_Bool)canSimulGroupLive;
- (_Bool)canAddStoppedSimulGroup;
- (_Bool)addAnchorEnabledWithCid:(id)arg1;
- (_Bool)liveSettingEnabledWithConv:(id)arg1;
- (_Bool)startLiveEnabledWithCid:(id)arg1;
- (_Bool)ownerSetAnchorEnabled;
- (_Bool)enterpriseInternalLimitDisabled;
- (_Bool)isGrayAnchor;
- (_Bool)isInGrayOrganization;
- (_Bool)isGrayOrganization:(long long)arg1;
- (_Bool)isFullScaleRelease;
- (_Bool)liveVideoEnabled;

@end
