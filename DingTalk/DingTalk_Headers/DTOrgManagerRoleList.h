//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface DTOrgManagerRoleList : NSObject
{
    _Bool _hasMore;
    NSArray *_roles;
    long long _nextCursor;
}

@property(nonatomic) long long nextCursor; // @synthesize nextCursor=_nextCursor;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(copy, nonatomic) NSArray *roles; // @synthesize roles=_roles;
- (void).cxx_destruct;
- (id)roleArrayWithIDLArray:(id)arg1;
- (id)initWithIDLModel:(id)arg1;

@end
