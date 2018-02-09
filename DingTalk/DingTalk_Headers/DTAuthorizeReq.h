//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseReq.h"

@class NSString;

@interface DTAuthorizeReq : DTBaseReq
{
    NSString *_redirectURI;
    NSString *_bundleId;
    CDUnknownBlockType _shouldShowWebViewForAuthIfCannotSSO;
}

@property(copy, nonatomic) CDUnknownBlockType shouldShowWebViewForAuthIfCannotSSO; // @synthesize shouldShowWebViewForAuthIfCannotSSO=_shouldShowWebViewForAuthIfCannotSSO;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) NSString *redirectURI; // @synthesize redirectURI=_redirectURI;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)dt_reqURL;
- (id)dt_responseURL;

@end
