//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString, NSValue;

@interface DTLineChartItem : NSObject
{
    _Bool _isValidData;
    NSString *_xChartString;
    NSString *_yChartString;
    NSNumber *_xNumber;
    NSNumber *_yNumber;
    NSValue *_centerPointValue;
    NSValue *_rightPoint;
    NSValue *_leftPoint;
    NSValue *_centerPtValue;
}

+ (id)lineDefaultData;
+ (id)lineDataWithRecentDataList:(id)arg1;
@property(copy, nonatomic) NSValue *centerPtValue; // @synthesize centerPtValue=_centerPtValue;
@property(copy, nonatomic) NSValue *leftPoint; // @synthesize leftPoint=_leftPoint;
@property(copy, nonatomic) NSValue *rightPoint; // @synthesize rightPoint=_rightPoint;
@property(nonatomic) _Bool isValidData; // @synthesize isValidData=_isValidData;
@property(copy, nonatomic) NSValue *centerPointValue; // @synthesize centerPointValue=_centerPointValue;
@property(retain, nonatomic) NSNumber *yNumber; // @synthesize yNumber=_yNumber;
@property(retain, nonatomic) NSNumber *xNumber; // @synthesize xNumber=_xNumber;
@property(copy, nonatomic) NSString *yChartString; // @synthesize yChartString=_yChartString;
@property(copy, nonatomic) NSString *xChartString; // @synthesize xChartString=_xChartString;
- (void).cxx_destruct;
- (id)initWithXString:(id)arg1 yString:(id)arg2 xNumber:(id)arg3 yNumber:(id)arg4;

@end

