//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FLAnimatedImageView.h"

@class NSString;
@protocol SDWebImageOperation;

@interface DTWebAnimatedImageView : FLAnimatedImageView
{
    id <SDWebImageOperation> _sdOperation;
    NSString *_url;
}

@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 key:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)cancelCurrentImageLoad;
- (void)getImageWithURL:(id)arg1 placeholderImage:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 succeedBlock:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5;
- (id)webImageManager;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 succeedBlock:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5 completeBlock:(CDUnknownBlockType)arg6;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 succeedBlock:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5;
- (void)setImageWithURL:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)setImageWithURL:(id)arg1;
- (void)dealloc;

@end
