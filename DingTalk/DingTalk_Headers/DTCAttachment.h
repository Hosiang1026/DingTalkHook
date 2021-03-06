//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class BLAccount, NSString;

@interface DTCAttachment : OpenModel <OpenModelProtocol>
{
    _Bool _isInline;
    BLAccount *_originAccount;
    BLAccount *_account;
    NSString *_uuid;
    NSString *_mailUUID;
    NSString *_attachmentID;
    NSString *_contentID;
    NSString *_fileNameInServer;
    unsigned long long _byteLength;
    NSString *_tempLocationAtServer;
    double _width;
    double _height;
    NSString *_localID;
    long long _createDate;
    long long _downloadStatus;
    NSString *_tempUrlAtServer;
    NSString *_originSpaceID;
    NSString *_originID;
    NSString *_originToken;
    NSString *_originAccountUUID;
    NSString *_mimeType;
    long long _encoding;
    long long _partType;
    NSString *_charset;
}

+ (unsigned long long)currentNewestVersion;
+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
+ (id)parserEMLAttachment:(id)arg1;
+ (id)cacheKeyWithKey:(id)arg1 type:(long long)arg2;
+ (id)cacheKeyWithKey:(id)arg1;
+ (id)hashKeyWithKey:(id)arg1;
+ (id)attachmentWithAttachment:(id)arg1;
+ (id)findAttachmentsWithMailUUID:(id)arg1 withAccount:(id)arg2;
+ (id)findAttachmentWithId:(id)arg1 withAccount:(id)arg2;
+ (id)generateAttachmentFromImapPart:(id)arg1 withAccount:(id)arg2 mailUUID:(id)arg3;
@property(copy, nonatomic) NSString *charset; // @synthesize charset=_charset;
@property(nonatomic) long long partType; // @synthesize partType=_partType;
@property(nonatomic) long long encoding; // @synthesize encoding=_encoding;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(copy, nonatomic) NSString *originAccountUUID; // @synthesize originAccountUUID=_originAccountUUID;
@property(retain, nonatomic) NSString *originToken; // @synthesize originToken=_originToken;
@property(retain, nonatomic) NSString *originID; // @synthesize originID=_originID;
@property(retain, nonatomic) NSString *originSpaceID; // @synthesize originSpaceID=_originSpaceID;
@property(retain, nonatomic) NSString *tempUrlAtServer; // @synthesize tempUrlAtServer=_tempUrlAtServer;
@property(nonatomic) _Bool isInline; // @synthesize isInline=_isInline;
@property(nonatomic) long long downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(nonatomic) long long createDate; // @synthesize createDate=_createDate;
@property(retain, nonatomic) NSString *localID; // @synthesize localID=_localID;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *tempLocationAtServer; // @synthesize tempLocationAtServer=_tempLocationAtServer;
@property(nonatomic) unsigned long long byteLength; // @synthesize byteLength=_byteLength;
@property(retain, nonatomic) NSString *fileNameInServer; // @synthesize fileNameInServer=_fileNameInServer;
@property(retain, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(retain, nonatomic) NSString *attachmentID; // @synthesize attachmentID=_attachmentID;
@property(copy, nonatomic) NSString *mailUUID; // @synthesize mailUUID=_mailUUID;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) BLAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
@property(retain, nonatomic) BLAccount *originAccount; // @synthesize originAccount=_originAccount;
- (id)initWithAccount:(id)arg1 mailUUID:(id)arg2;
- (id)init;
- (void)initSelf;
- (void)saveAttachmentDataFromInterceptor:(id)arg1 account:(id)arg2;
- (_Bool)isCloudAttachment;
- (long long)fixedDownloadStatus;
- (void)saveAttachmentData:(id)arg1 account:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)saveAttachmentThumbnailData:(id)arg1 account:(id)arg2;
- (_Bool)isAttachmentThumbnailExist;
- (id)thumbnailPath;
- (void)saveAttachmentData:(id)arg1 account:(id)arg2;
- (void)attachmentDataWithAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)attachmentDataWithAccount:(id)arg1;
- (id)cacheKeyWithType:(long long)arg1;
- (id)cacheKey;
- (_Bool)isAttachmentExist;
- (id)filePath;
- (id)imageWithData:(id)arg1;
- (long long)type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

