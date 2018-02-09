//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXDiffable-Protocol.h"

@class NSArray, NSString, WXComponent, WXHeaderComponent;

@interface WXSectionDataController : NSObject <WXDiffable>
{
    NSArray *_cellComponents;
    WXHeaderComponent *_headerComponent;
    WXComponent *_footerComponent;
}

@property(retain, nonatomic) WXComponent *footerComponent; // @synthesize footerComponent=_footerComponent;
@property(retain, nonatomic) WXHeaderComponent *headerComponent; // @synthesize headerComponent=_headerComponent;
@property(retain, nonatomic) NSArray *cellComponents; // @synthesize cellComponents=_cellComponents;
- (void).cxx_destruct;
- (_Bool)isEqualToWXObject:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isStickyForHeaderAtIndex:(long long)arg1;
- (struct CGSize)sizeForHeaderAtIndex:(long long)arg1;
- (id)viewForHeaderAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
