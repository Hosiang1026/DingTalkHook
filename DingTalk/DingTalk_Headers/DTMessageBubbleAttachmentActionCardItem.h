//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface DTMessageBubbleAttachmentActionCardItem : NSObject
{
    _Bool _isFullDisplay;
    _Bool _canForward;
    NSString *_title;
    NSString *_markdownString;
    unsigned long long _btnOrientation;
    NSArray *_btns;
    NSString *_bottomTitle;
    NSString *_bottomURL;
    NSDictionary *_atList;
    NSDictionary *_authMediaMap;
    NSString *_cId;
    long long _mId;
}

+ (id)buildWithMessage:(id)arg1;
@property(nonatomic) long long mId; // @synthesize mId=_mId;
@property(copy, nonatomic) NSString *cId; // @synthesize cId=_cId;
@property(copy, nonatomic) NSDictionary *authMediaMap; // @synthesize authMediaMap=_authMediaMap;
@property(copy, nonatomic) NSDictionary *atList; // @synthesize atList=_atList;
@property(nonatomic) _Bool canForward; // @synthesize canForward=_canForward;
@property(nonatomic) _Bool isFullDisplay; // @synthesize isFullDisplay=_isFullDisplay;
@property(copy, nonatomic) NSString *bottomURL; // @synthesize bottomURL=_bottomURL;
@property(copy, nonatomic) NSString *bottomTitle; // @synthesize bottomTitle=_bottomTitle;
@property(retain, nonatomic) NSArray *btns; // @synthesize btns=_btns;
@property(nonatomic) unsigned long long btnOrientation; // @synthesize btnOrientation=_btnOrientation;
@property(copy, nonatomic) NSString *markdownString; // @synthesize markdownString=_markdownString;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
