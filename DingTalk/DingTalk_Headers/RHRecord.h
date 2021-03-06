//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, RHAddressBook;

@interface RHRecord : NSObject
{
    int _recordID;
    RHAddressBook *_addressBook;
    void *_recordRef;
}

+ (id)descriptionForPropertyType:(unsigned int)arg1;
+ (id)descriptionForRecordType:(unsigned int)arg1;
@property(readonly) void *recordRef; // @synthesize recordRef=_recordRef;
@property(readonly, retain) RHAddressBook *addressBook; // @synthesize addressBook=_addressBook;
- (id)description;
- (void)dealloc;
- (oneway void)release;
- (void)revert;
- (_Bool)hasUnsavedChanges;
- (_Bool)saveWithError:(id *)arg1;
- (_Bool)save:(id *)arg1;
- (_Bool)save;
- (_Bool)unsetMultiValueForPropertyID:(int)arg1 error:(id *)arg2;
- (_Bool)setMultiValue:(id)arg1 forPropertyID:(int)arg2 error:(id *)arg3;
- (id)getMultiValueForPropertyID:(int)arg1;
- (_Bool)unsetBasicValueForPropertyID:(int)arg1 error:(id *)arg2;
- (_Bool)setBasicValue:(void *)arg1 forPropertyID:(int)arg2 error:(id *)arg3;
- (id)getBasicValueForPropertyID:(int)arg1;
@property(readonly, copy) NSString *compositeName;
@property(readonly) unsigned int recordType;
@property(readonly) int recordID;
- (void)performRecordAction:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
- (id)initWithAddressBook:(id)arg1 recordRef:(void *)arg2;

@end

