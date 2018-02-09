//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCellItem.h"

@class BLAccount, DTMailBizSignatureModel, NSString;

@interface DTMailEditEntSignatureCellItem : DTBaseCellItem
{
    _Bool _showOpenAll;
    _Bool _isLoaded;
    _Bool _ignoreCallBack;
    DTMailBizSignatureModel *_signatureModel;
    BLAccount *_account;
    NSString *_openAllBtnTitle;
    CDUnknownBlockType _modifyCotentClickedBlock;
    CDUnknownBlockType _switchTemplateClickedBlock;
    CDUnknownBlockType _openAllClickedBlock;
    CDUnknownBlockType _didFinishLoadBlock;
}

+ (id)cellItemForSignatureModel:(id)arg1 account:(id)arg2 modifyCotentClickedBlock:(CDUnknownBlockType)arg3 switchTemplateClickedBlock:(CDUnknownBlockType)arg4 webviewDidFishLoadBlock:(CDUnknownBlockType)arg5;
@property(copy, nonatomic) CDUnknownBlockType didFinishLoadBlock; // @synthesize didFinishLoadBlock=_didFinishLoadBlock;
@property(copy, nonatomic) CDUnknownBlockType openAllClickedBlock; // @synthesize openAllClickedBlock=_openAllClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType switchTemplateClickedBlock; // @synthesize switchTemplateClickedBlock=_switchTemplateClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType modifyCotentClickedBlock; // @synthesize modifyCotentClickedBlock=_modifyCotentClickedBlock;
@property(nonatomic) _Bool ignoreCallBack; // @synthesize ignoreCallBack=_ignoreCallBack;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(copy, nonatomic) NSString *openAllBtnTitle; // @synthesize openAllBtnTitle=_openAllBtnTitle;
@property(nonatomic) _Bool showOpenAll; // @synthesize showOpenAll=_showOpenAll;
@property(retain, nonatomic) BLAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) DTMailBizSignatureModel *signatureModel; // @synthesize signatureModel=_signatureModel;
- (void).cxx_destruct;
- (double)heightForCell;
- (id)cellForItem;
- (id)reuseIdentifier;

@end
