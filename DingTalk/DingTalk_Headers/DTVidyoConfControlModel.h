//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTVidyoConfControlModel : Marshal
{
    NSString *_conferenceId;
    NSArray *_uids;
    NSNumber *_control;
    NSNumber *_msgType;
    NSArray *_devUids;
}

@property(copy, nonatomic) NSArray *devUids; // @synthesize devUids=_devUids;
@property(retain, nonatomic) NSNumber *msgType; // @synthesize msgType=_msgType;
@property(retain, nonatomic) NSNumber *control; // @synthesize control=_control;
@property(copy, nonatomic) NSArray *uids; // @synthesize uids=_uids;
@property(copy, nonatomic) NSString *conferenceId; // @synthesize conferenceId=_conferenceId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

