//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPIModel.h"

@class NSNumber, NSString;

@interface BLTagAPIModel : BLBaseAPIModel
{
    NSString *_tagId;
    NSString *_tagName;
    NSString *_tagColor;
    NSNumber *_isBeebox;
    NSNumber *_isBysearch;
    NSNumber *_mailTotal;
    NSNumber *_mailUnread;
}

@property(retain, nonatomic) NSNumber *mailUnread; // @synthesize mailUnread=_mailUnread;
@property(retain, nonatomic) NSNumber *mailTotal; // @synthesize mailTotal=_mailTotal;
@property(retain, nonatomic) NSNumber *isBysearch; // @synthesize isBysearch=_isBysearch;
@property(retain, nonatomic) NSNumber *isBeebox; // @synthesize isBeebox=_isBeebox;
@property(copy, nonatomic) NSString *tagColor; // @synthesize tagColor=_tagColor;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(copy, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
