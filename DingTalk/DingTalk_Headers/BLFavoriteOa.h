//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLFavoriteContent.h"

@class NSString;

@interface BLFavoriteOa : BLFavoriteContent
{
    NSString *_oaMediaId;
    NSString *_oaUrl;
    NSString *_oaPicUrl;
}

+ (id)toFavoriteContentFromApiModel:(id)arg1;
+ (id)toFavoriteContentApiModel:(id)arg1;
@property(copy, nonatomic) NSString *oaPicUrl; // @synthesize oaPicUrl=_oaPicUrl;
@property(copy, nonatomic) NSString *oaUrl; // @synthesize oaUrl=_oaUrl;
@property(copy, nonatomic) NSString *oaMediaId; // @synthesize oaMediaId=_oaMediaId;
- (void).cxx_destruct;

@end
