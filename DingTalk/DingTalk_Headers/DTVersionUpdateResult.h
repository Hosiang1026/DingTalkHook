//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTUpdateInfo;

@interface DTVersionUpdateResult : NSObject
{
    _Bool _hasAvailableUpdate;
    long long _remindNum;
    DTUpdateInfo *_updateInfo;
}

@property(retain, nonatomic) DTUpdateInfo *updateInfo; // @synthesize updateInfo=_updateInfo;
@property(nonatomic) long long remindNum; // @synthesize remindNum=_remindNum;
@property(nonatomic) _Bool hasAvailableUpdate; // @synthesize hasAvailableUpdate=_hasAvailableUpdate;
- (void).cxx_destruct;
- (id)initWithResponseJSON:(id)arg1;

@end
