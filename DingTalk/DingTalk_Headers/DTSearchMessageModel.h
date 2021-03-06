//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTSearchMessageModel : Marshal
{
    NSString *_messageId;
    NSNumber *_senderUid;
    NSString *_cid;
    NSNumber *_timeStamp;
    NSString *_content;
    NSString *_senderAvatar;
    NSString *_senderName;
}

@property(copy, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(copy, nonatomic) NSString *senderAvatar; // @synthesize senderAvatar=_senderAvatar;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSNumber *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSNumber *senderUid; // @synthesize senderUid=_senderUid;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

