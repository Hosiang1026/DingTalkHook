//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface DTMailSupplierManager : NSObject
{
    NSDictionary *_mailSuppliers;
}

+ (id)shareInstance;
@property(copy, nonatomic) NSDictionary *mailSuppliers; // @synthesize mailSuppliers=_mailSuppliers;
- (void).cxx_destruct;
- (id)utMailSupplierDesc:(unsigned long long)arg1;
- (id)init;

@end
