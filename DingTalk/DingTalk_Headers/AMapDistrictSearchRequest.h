//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSString;

@interface AMapDistrictSearchRequest : AMapSearchObject
{
    _Bool _requireExtension;
    _Bool _showBusinessArea;
    NSString *_keywords;
    long long _subdistrict;
}

@property(nonatomic) long long subdistrict; // @synthesize subdistrict=_subdistrict;
@property(nonatomic) _Bool showBusinessArea; // @synthesize showBusinessArea=_showBusinessArea;
@property(nonatomic) _Bool requireExtension; // @synthesize requireExtension=_requireExtension;
@property(copy, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
- (void).cxx_destruct;
- (id)init;

@end
