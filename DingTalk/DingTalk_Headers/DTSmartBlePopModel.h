//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTSmartEntityModel;

@interface DTSmartBlePopModel : NSObject
{
    DTSmartEntityModel *_bindModel;
    DTSmartEntityModel *_unbindModel;
    double _bindRssi;
    double _unbindRssi;
}

@property(nonatomic) double unbindRssi; // @synthesize unbindRssi=_unbindRssi;
@property(nonatomic) double bindRssi; // @synthesize bindRssi=_bindRssi;
@property(retain, nonatomic) DTSmartEntityModel *unbindModel; // @synthesize unbindModel=_unbindModel;
@property(copy, nonatomic) DTSmartEntityModel *bindModel; // @synthesize bindModel=_bindModel;
- (void).cxx_destruct;

@end

