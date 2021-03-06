//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSOperationQueue;

@interface H5AMZipArchiveManager : NSObject
{
    NSOperationQueue *_unzipQueue;
    NSMutableArray *_unzipApps;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *unzipApps; // @synthesize unzipApps=_unzipApps;
@property(retain, nonatomic) NSOperationQueue *unzipQueue; // @synthesize unzipQueue=_unzipQueue;
- (void).cxx_destruct;
- (void)unzipApp:(id)arg1 moveTmpFile:(id)arg2 process:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)unzipApp:(id)arg1 process:(CDUnknownBlockType)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (_Bool)isUnzippingApp:(id)arg1;
- (id)init;

@end

