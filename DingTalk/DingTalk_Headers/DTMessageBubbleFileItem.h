//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTMessageBubbleItemProtocol-Protocol.h"

@class NSString, UIImage;

@interface DTMessageBubbleFileItem : NSObject <DTMessageBubbleItemProtocol>
{
    _Bool _showRightBtn;
    _Bool _isEncrypt;
    long long _fileViewType;
    NSString *_content;
    NSString *_fileSize;
    unsigned long long _intFileSize;
    UIImage *_iconImage;
    UIImage *_backgroundImage;
    long long _maxNumberOfLines;
    NSString *_fileType;
    long long _fileContentType;
    long long _spaceId;
    NSString *_fileId;
    unsigned long long _videoDuration;
    NSString *_videoSize;
    NSString *_imageMediaId;
    NSString *_imageAuthMediaId;
    NSString *_imageAuthCode;
    long long _imageOrientation;
    unsigned long long _imageDataSize;
    CDUnknownBlockType _didLogoIconClicked;
    struct CGSize _imageSize;
}

+ (id)buildDingAttachmentFileWithCSpaceDentry:(id)arg1;
+ (id)buildWithDingLinkModel:(id)arg1;
+ (id)buildWithDing:(id)arg1 backgroundImage:(id)arg2;
+ (id)buildWithFileAttachment:(id)arg1;
+ (id)buildWithMessage:(id)arg1 conversation:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType didLogoIconClicked; // @synthesize didLogoIconClicked=_didLogoIconClicked;
@property(nonatomic) unsigned long long imageDataSize; // @synthesize imageDataSize=_imageDataSize;
@property(nonatomic) long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(copy, nonatomic) NSString *imageAuthCode; // @synthesize imageAuthCode=_imageAuthCode;
@property(copy, nonatomic) NSString *imageAuthMediaId; // @synthesize imageAuthMediaId=_imageAuthMediaId;
@property(copy, nonatomic) NSString *imageMediaId; // @synthesize imageMediaId=_imageMediaId;
@property(copy, nonatomic) NSString *videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) unsigned long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(copy, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(nonatomic) long long spaceId; // @synthesize spaceId=_spaceId;
@property(nonatomic) long long fileContentType; // @synthesize fileContentType=_fileContentType;
@property(copy, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(nonatomic) long long maxNumberOfLines; // @synthesize maxNumberOfLines=_maxNumberOfLines;
@property(nonatomic) _Bool isEncrypt; // @synthesize isEncrypt=_isEncrypt;
@property(nonatomic) _Bool showRightBtn; // @synthesize showRightBtn=_showRightBtn;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) unsigned long long intFileSize; // @synthesize intFileSize=_intFileSize;
@property(copy, nonatomic) NSString *fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long fileViewType; // @synthesize fileViewType=_fileViewType;
- (void).cxx_destruct;
- (struct CGSize)calculateVideoSizeWithConstraintsSize:(struct CGSize)arg1;
- (struct CGSize)calculateImageSizeWithConstraintsSize:(struct CGSize)arg1;
- (struct CGSize)calculateFileSizeWithConstraintsSize:(struct CGSize)arg1;
- (struct CGSize)calculateSizeWithConstraintsSize:(struct CGSize)arg1;
- (id)generateBubbleImageItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
