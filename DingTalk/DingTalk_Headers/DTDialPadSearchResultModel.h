//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString, UIImage;

@interface DTDialPadSearchResultModel : NSObject <NSCopying>
{
    _Bool _isDingCard;
    NSNumber *_uid;
    NSString *_nickName;
    NSString *_mediaID;
    NSString *_mobileNumber;
    NSString *_title;
    NSString *_keyWords;
    UIImage *_image;
}

@property(nonatomic) _Bool isDingCard; // @synthesize isDingCard=_isDingCard;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *keyWords; // @synthesize keyWords=_keyWords;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *mobileNumber; // @synthesize mobileNumber=_mobileNumber;
@property(copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

