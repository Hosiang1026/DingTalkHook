//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTWorkAssistantModel, NSArray, NSNumber, NSString;

@interface DTWorkAssistantPageModel : Marshal
{
    _Bool _hasChecked;
    DTWorkAssistantModel *_workAssistant;
    NSArray *_positionList;
    NSString *_tips;
    NSNumber *_planCheckTime;
}

@property(retain, nonatomic) NSNumber *planCheckTime; // @synthesize planCheckTime=_planCheckTime;
@property(nonatomic) _Bool hasChecked; // @synthesize hasChecked=_hasChecked;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) NSArray *positionList; // @synthesize positionList=_positionList;
@property(retain, nonatomic) DTWorkAssistantModel *workAssistant; // @synthesize workAssistant=_workAssistant;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

