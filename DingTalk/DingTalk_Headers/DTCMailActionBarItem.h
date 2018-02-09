//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTCMail, NSString, UIColor, UIImage;

@interface DTCMailActionBarItem : NSObject
{
    _Bool _disable;
    int _style;
    UIColor *_tintColor;
    long long _tag;
    id _target;
    SEL _preClickSelector;
    UIImage *_iconImage;
    UIImage *_iconHighlightImage;
    NSString *_title;
    CDUnknownBlockType _actionBlock;
    DTCMail *_contextMail;
}

@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) DTCMail *contextMail; // @synthesize contextMail=_contextMail;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *iconHighlightImage; // @synthesize iconHighlightImage=_iconHighlightImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) _Bool disable; // @synthesize disable=_disable;
@property(nonatomic) SEL preClickSelector; // @synthesize preClickSelector=_preClickSelector;
@property(nonatomic) id target; // @synthesize target=_target;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void).cxx_destruct;
- (void)onClick:(id)arg1;
- (id)createButtonWithContextMail:(id)arg1;
- (id)createBarButtonItemWithContextMail:(id)arg1;
- (id)initWithIconImage:(id)arg1 highlightImage:(id)arg2 title:(id)arg3 action:(CDUnknownBlockType)arg4 style:(long long)arg5;
- (id)initWithIconImage:(id)arg1 highlightImage:(id)arg2 title:(id)arg3 action:(CDUnknownBlockType)arg4;

@end
