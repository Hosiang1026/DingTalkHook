//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LWSBJson4StreamWriterDelegate-Protocol.h"

@class NSMutableData;

@interface LWMJSON : NSObject <LWSBJson4StreamWriterDelegate>
{
    NSMutableData *_data;
}

@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)encode:(id)arg1;
- (void)writer:(id)arg1 appendBytes:(const void *)arg2 length:(unsigned long long)arg3;
- (id)init;

@end
