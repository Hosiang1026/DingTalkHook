//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLLocation, DTLocationReGeoCode;
@protocol DTLocationManager;

@interface LADurableLocationManager : NSObject
{
    id <DTLocationManager> _locationManager;
    long long _lastCoordinateSystemType;
    CLLocation *_lastLocation;
    DTLocationReGeoCode *_lastRegeocode;
    double _targetAccuracy;
    double _lastRequestTimeStamp;
}

@property(nonatomic) double lastRequestTimeStamp; // @synthesize lastRequestTimeStamp=_lastRequestTimeStamp;
@property(nonatomic) double targetAccuracy; // @synthesize targetAccuracy=_targetAccuracy;
- (void).cxx_destruct;
- (void)stopUpdatingLocation;
- (void)requestLocationWithReGeocode:(_Bool)arg1 coordinate:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

