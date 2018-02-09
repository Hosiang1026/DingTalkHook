//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTEventModel : Marshal
{
    _Bool _allDayEvent;
    NSNumber *_eventType;
    NSNumber *_startTime;
    NSNumber *_endTime;
    NSString *_subject;
    NSString *_desc;
    NSNumber *_organizerUid;
    NSString *_location;
    NSArray *_alarmList;
    NSArray *_attendeeList;
    NSArray *_recurRuleList;
    NSArray *_exceptionDateList;
    NSNumber *_alarmType;
    NSString *_organizerEmail;
    NSString *_organizerName;
    NSNumber *_locationCode;
    NSNumber *_locationOrgId;
}

@property(retain, nonatomic) NSNumber *locationOrgId; // @synthesize locationOrgId=_locationOrgId;
@property(retain, nonatomic) NSNumber *locationCode; // @synthesize locationCode=_locationCode;
@property(copy, nonatomic) NSString *organizerName; // @synthesize organizerName=_organizerName;
@property(copy, nonatomic) NSString *organizerEmail; // @synthesize organizerEmail=_organizerEmail;
@property(retain, nonatomic) NSNumber *alarmType; // @synthesize alarmType=_alarmType;
@property(copy, nonatomic) NSArray *exceptionDateList; // @synthesize exceptionDateList=_exceptionDateList;
@property(copy, nonatomic) NSArray *recurRuleList; // @synthesize recurRuleList=_recurRuleList;
@property(copy, nonatomic) NSArray *attendeeList; // @synthesize attendeeList=_attendeeList;
@property(copy, nonatomic) NSArray *alarmList; // @synthesize alarmList=_alarmList;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSNumber *organizerUid; // @synthesize organizerUid=_organizerUid;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(nonatomic) _Bool allDayEvent; // @synthesize allDayEvent=_allDayEvent;
@property(retain, nonatomic) NSNumber *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSNumber *eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
