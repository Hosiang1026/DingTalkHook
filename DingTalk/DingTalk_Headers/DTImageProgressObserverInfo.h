//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol DTMessageImageProgressDelegate;

@interface DTImageProgressObserverInfo : NSObject
{
    unsigned long long _hashValue;
    id <DTMessageImageProgressDelegate> _observer;
}

@property(readonly, nonatomic) __weak id <DTMessageImageProgressDelegate> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithObserver:(id)arg1;
- (id)init;

@end

