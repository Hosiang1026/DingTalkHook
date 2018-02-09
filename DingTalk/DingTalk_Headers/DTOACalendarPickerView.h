//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTOACalendarPickerActionBarDelegate-Protocol.h"
#import "DTOACalendarPikcerComponentDelegate-Protocol.h"

@class DTOACalendarPickerActionBar, NSArray, NSDate, NSString;
@protocol DTOACalendarPikcerComponentProtocol;

@interface DTOACalendarPickerView : UIView <DTOACalendarPickerActionBarDelegate, DTOACalendarPikcerComponentDelegate>
{
    unsigned long long _firstType;
    unsigned long long _secondType;
    NSString *_corpId;
    NSArray *_bizTypes;
    CDUnknownBlockType _completeBlock;
    CDUnknownBlockType _cancelBlock;
    unsigned long long _selectIdx;
    UIView *_baseView;
    UIView *_backgroundView;
    NSString *_firstPrefix;
    UIView<DTOACalendarPikcerComponentProtocol> *_firstComponent;
    NSDate *_firstDate;
    NSString *_secondPrefix;
    UIView<DTOACalendarPikcerComponentProtocol> *_secondComponent;
    NSDate *_secondDate;
    DTOACalendarPickerActionBar *_actionBar;
}

+ (void)showWithCorpId:(id)arg1 bizTypes:(id)arg2 firstType:(unsigned long long)arg3 firstPrefix:(id)arg4 firstDate:(id)arg5 secondType:(unsigned long long)arg6 secondPrefix:(id)arg7 secondDate:(id)arg8 completeBlock:(CDUnknownBlockType)arg9 cancelBlock:(CDUnknownBlockType)arg10;
+ (void)showWithCorpId:(id)arg1 bizTypes:(id)arg2 firstType:(unsigned long long)arg3 firstDate:(id)arg4 secondType:(unsigned long long)arg5 secondDate:(id)arg6 completeBlock:(CDUnknownBlockType)arg7 cancelBlock:(CDUnknownBlockType)arg8;
@property(retain, nonatomic) DTOACalendarPickerActionBar *actionBar; // @synthesize actionBar=_actionBar;
@property(retain, nonatomic) NSDate *secondDate; // @synthesize secondDate=_secondDate;
@property(retain, nonatomic) UIView<DTOACalendarPikcerComponentProtocol> *secondComponent; // @synthesize secondComponent=_secondComponent;
@property(copy, nonatomic) NSString *secondPrefix; // @synthesize secondPrefix=_secondPrefix;
@property(retain, nonatomic) NSDate *firstDate; // @synthesize firstDate=_firstDate;
@property(retain, nonatomic) UIView<DTOACalendarPikcerComponentProtocol> *firstComponent; // @synthesize firstComponent=_firstComponent;
@property(copy, nonatomic) NSString *firstPrefix; // @synthesize firstPrefix=_firstPrefix;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) unsigned long long selectIdx; // @synthesize selectIdx=_selectIdx;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(copy, nonatomic) NSArray *bizTypes; // @synthesize bizTypes=_bizTypes;
@property(copy, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
@property(nonatomic) unsigned long long secondType; // @synthesize secondType=_secondType;
@property(nonatomic) unsigned long long firstType; // @synthesize firstType=_firstType;
- (void).cxx_destruct;
- (void)displayPickerView:(_Bool)arg1 animation:(_Bool)arg2;
- (void)dismiss;
- (void)show;
- (void)backgroudPressed:(id)arg1;
- (void)OACalendarPikcerComponent:(id)arg1 didSelectDate:(id)arg2 byUser:(_Bool)arg3;
- (void)animateToSecondIndex;
- (void)animateToFirstIndex;
- (void)OACalendarPickerActionBar:(id)arg1 didClickedButton:(id)arg2;
- (void)OACalendarPickerActionBar:(id)arg1 didSelectIndex:(unsigned long long)arg2;
- (void)layoutSubviews;
- (unsigned long long)actionBarStyle;
- (void)loadComponents;
- (id)initWithFrame:(struct CGRect)arg1 corpId:(id)arg2 bizTypes:(id)arg3 firstType:(unsigned long long)arg4 firstDate:(id)arg5 secondType:(unsigned long long)arg6 secondDate:(id)arg7 completeBlock:(CDUnknownBlockType)arg8 cancelBlock:(CDUnknownBlockType)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
