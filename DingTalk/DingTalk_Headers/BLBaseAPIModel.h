//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BLBaseAPIModel : NSObject
{
    long long _modelAction;
}

+ (Class)objectClass;
+ (id)toDictArrayWithModelArray:(id)arg1;
+ (id)modelArrayWithJSONByCustom:(id)arg1;
@property(nonatomic) long long modelAction; // @synthesize modelAction=_modelAction;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end

