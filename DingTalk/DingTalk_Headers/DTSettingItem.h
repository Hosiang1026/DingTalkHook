//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTSettingItem : NSObject
{
    _Bool _showRightRedDot;
    _Bool _indicatorHidden;
    NSString *_icon;
    NSString *_title;
    NSString *_detail;
    NSString *_detailIcon;
    NSString *_markIconString;
    SEL _selectAction;
    CDUnknownBlockType _selectedBlock;
}

+ (id)initItemWithTitle:(id)arg1 detail:(id)arg2 icon:(id)arg3 showRightRedDot:(_Bool)arg4 indicatorHidden:(_Bool)arg5 selectedBlock:(CDUnknownBlockType)arg6;
+ (id)initItemWithTitle:(id)arg1 detail:(id)arg2 icon:(id)arg3 markIconString:(id)arg4 indicatorHidden:(_Bool)arg5 selectAction:(SEL)arg6;
+ (id)initItemWithTitle:(id)arg1 detail:(id)arg2 icon:(id)arg3 detailIcon:(id)arg4 indicatorHidden:(_Bool)arg5 selectAction:(SEL)arg6;
+ (id)initItemWithTitle:(id)arg1 detail:(id)arg2 icon:(id)arg3 indicatorHidden:(_Bool)arg4 selectAction:(SEL)arg5;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(nonatomic) SEL selectAction; // @synthesize selectAction=_selectAction;
@property(nonatomic) _Bool indicatorHidden; // @synthesize indicatorHidden=_indicatorHidden;
@property(nonatomic) _Bool showRightRedDot; // @synthesize showRightRedDot=_showRightRedDot;
@property(copy, nonatomic) NSString *markIconString; // @synthesize markIconString=_markIconString;
@property(copy, nonatomic) NSString *detailIcon; // @synthesize detailIcon=_detailIcon;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

@end

