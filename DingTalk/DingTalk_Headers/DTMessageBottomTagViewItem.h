//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTMessageBottomTagViewItem : NSObject
{
    NSString *_tagIconURL;
    NSString *_title;
    CDUnknownBlockType _clickBlock;
}

+ (id)buildWithTagIconURL:(id)arg1 title:(id)arg2 clickBlock:(CDUnknownBlockType)arg3;
+ (id)buildWithMessage:(id)arg1 conversation:(id)arg2 cModel:(id)arg3;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *tagIconURL; // @synthesize tagIconURL=_tagIconURL;
- (void).cxx_destruct;

@end
