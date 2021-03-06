//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (YYAdd)
+ (id)stringNamed:(id)arg1;
+ (id)stringWithUTF32Chars:(const unsigned int *)arg1 length:(unsigned long long)arg2;
+ (id)stringWithUTF32Char:(unsigned int)arg1;
+ (id)stringWithUUID;
+ (id)stringWithBase64EncodedString:(id)arg1;
- (id)jsonValueDecoded;
- (struct _NSRange)rangeOfAll;
- (id)dataValue;
- (id)numberValue;
- (_Bool)containsCharacterSet:(id)arg1;
- (_Bool)containsString:(id)arg1;
- (_Bool)isNotBlank;
- (double)pathScale;
- (id)stringByAppendingPathScale:(double)arg1;
- (id)stringByAppendingNameScale:(double)arg1;
- (id)stringByTrim;
- (void)enumerateUTF32CharInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly) unsigned long long unsignedIntegerValue;
@property(readonly) unsigned long long unsignedLongLongValue;
@property(readonly) unsigned long long unsignedLongValue;
@property(readonly) long long longValue;
@property(readonly) unsigned int unsignedIntValue;
@property(readonly) unsigned short unsignedShortValue;
@property(readonly) short shortValue;
@property(readonly) unsigned char unsignedCharValue;
@property(readonly) BOOL charValue;
- (id)stringByReplacingRegex:(id)arg1 options:(unsigned long long)arg2 withString:(id)arg3;
- (void)enumerateRegexMatches:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)matchesRegex:(id)arg1 options:(unsigned long long)arg2;
- (double)heightForFont:(id)arg1 width:(double)arg2;
- (double)widthForFont:(id)arg1;
- (struct CGSize)sizeForFont:(id)arg1 size:(struct CGSize)arg2 mode:(long long)arg3;
- (id)stringByEscapingHTML;
- (id)stringByURLDecode;
- (id)stringByURLEncode;
- (id)base64EncodedString;
- (id)hmacSHA512StringWithKey:(id)arg1;
- (id)hmacSHA384StringWithKey:(id)arg1;
- (id)hmacSHA256StringWithKey:(id)arg1;
- (id)hmacSHA224StringWithKey:(id)arg1;
- (id)hmacSHA1StringWithKey:(id)arg1;
- (id)hmacMD5StringWithKey:(id)arg1;
- (id)crc32String;
- (id)sha512String;
- (id)sha384String;
- (id)sha256String;
- (id)sha224String;
- (id)sha1String;
- (id)md5String;
- (id)md4String;
- (id)md2String;
@end

