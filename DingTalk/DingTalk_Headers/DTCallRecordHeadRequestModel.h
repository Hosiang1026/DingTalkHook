//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTCallRecordHeadRequestModel : Marshal
{
    NSNumber *_iUid;
    NSString *_iNumber;
    NSNumber *_lastPts;
    NSNumber *_needSize;
    NSNumber *_type;
}

@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *needSize; // @synthesize needSize=_needSize;
@property(retain, nonatomic) NSNumber *lastPts; // @synthesize lastPts=_lastPts;
@property(copy, nonatomic) NSString *iNumber; // @synthesize iNumber=_iNumber;
@property(retain, nonatomic) NSNumber *iUid; // @synthesize iUid=_iUid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

