//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface DTKeyedHeightCache : NSObject
{
    NSMutableDictionary *_heights;
}

@property(retain, nonatomic) NSMutableDictionary *heights; // @synthesize heights=_heights;
- (void).cxx_destruct;
- (void)invalidateAllHeightCache;
- (void)invalidateHeightForKey:(id)arg1;
- (double)heightForKey:(id)arg1 withTableView:(id)arg2;
- (void)cacheHeight:(double)arg1 byKey:(id)arg2 withTableView:(id)arg3;
- (_Bool)existsHeightForKey:(id)arg1 withTableView:(id)arg2;
- (id)mutableHeightsByKeyWithTableView:(id)arg1;
- (id)init;

@end

