//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTSmartEntityModel;

@interface DTSmartDeviceNearInfo : NSObject
{
    DTSmartEntityModel *_nearestValidEntityModel;
    DTSmartEntityModel *_nearestUnconfigEntityModel;
}

@property(retain, nonatomic) DTSmartEntityModel *nearestUnconfigEntityModel; // @synthesize nearestUnconfigEntityModel=_nearestUnconfigEntityModel;
@property(retain, nonatomic) DTSmartEntityModel *nearestValidEntityModel; // @synthesize nearestValidEntityModel=_nearestValidEntityModel;
- (void).cxx_destruct;
- (_Bool)hasUnactiveEntityModel;
- (_Bool)hasActiveEntityModel;
- (_Bool)hasEntityModel;

@end

