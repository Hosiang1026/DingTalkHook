//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTBizCSpaceInfo, DTOrganization, NSString;

@interface DTOrganizationSpaceInfo : NSObject
{
    _Bool _chooseEnable;
    _Bool _needExpand;
    _Bool _expandLoading;
    _Bool _isEnableAcl;
    _Bool _isShowNewBadge;
    NSString *_name;
    NSString *_brief;
    NSString *_mainSpaceId;
    NSString *_logoMediaId;
    DTOrganization *_organization;
    unsigned long long _actions;
    DTBizCSpaceInfo *_spaceInfo;
}

@property(nonatomic) _Bool isShowNewBadge; // @synthesize isShowNewBadge=_isShowNewBadge;
@property(retain, nonatomic) DTBizCSpaceInfo *spaceInfo; // @synthesize spaceInfo=_spaceInfo;
@property(nonatomic) _Bool isEnableAcl; // @synthesize isEnableAcl=_isEnableAcl;
@property(nonatomic) unsigned long long actions; // @synthesize actions=_actions;
@property(retain, nonatomic) DTOrganization *organization; // @synthesize organization=_organization;
@property(nonatomic) _Bool expandLoading; // @synthesize expandLoading=_expandLoading;
@property(nonatomic) _Bool needExpand; // @synthesize needExpand=_needExpand;
@property(copy, nonatomic) NSString *logoMediaId; // @synthesize logoMediaId=_logoMediaId;
@property(nonatomic) _Bool chooseEnable; // @synthesize chooseEnable=_chooseEnable;
@property(copy, nonatomic) NSString *mainSpaceId; // @synthesize mainSpaceId=_mainSpaceId;
@property(copy, nonatomic) NSString *brief; // @synthesize brief=_brief;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

