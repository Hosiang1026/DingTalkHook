//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPIModel.h"

@class NSNumber, NSString;

@interface BLFolderAPIModel : BLBaseAPIModel
{
    NSNumber *_clientID;
    NSString *_folderID;
    NSString *_parentID;
    NSString *_name;
    NSNumber *_type;
    NSNumber *_level;
    NSString *_folderAcl;
    NSString *_ownerEmail;
    long long _unreadCount;
}

+ (_Bool)isNoticeUnreadType:(long long)arg1;
+ (_Bool)isMemberType:(long long)arg1;
+ (_Bool)isGroupType:(long long)arg1;
+ (_Bool)isDomainType:(long long)arg1;
+ (_Bool)isCalendarType:(long long)arg1;
+ (_Bool)isContactType:(long long)arg1;
+ (_Bool)isMailType:(long long)arg1;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) NSString *ownerEmail; // @synthesize ownerEmail=_ownerEmail;
@property(retain, nonatomic) NSString *folderAcl; // @synthesize folderAcl=_folderAcl;
@property(retain, nonatomic) NSNumber *level; // @synthesize level=_level;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *parentID; // @synthesize parentID=_parentID;
@property(retain, nonatomic) NSString *folderID; // @synthesize folderID=_folderID;
@property(retain, nonatomic) NSNumber *clientID; // @synthesize clientID=_clientID;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

