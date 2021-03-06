//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTMessagePopupAlbumMenuViewDelegate-Protocol.h"
#import "ELCImagePickerControllerDelegate-Protocol.h"

@class DTBizCSpaceDentry, DTMessagePopupAlbumMenuView, DTPlaceHolderTextView, DTSpaceCollectFileAttachmentView, DTTextField, NSString, UIButton, UIImageView, UIScrollView, UIView;

@interface DTSpaceCreateCollectFileJobViewController : DTViewController <DTMessagePopupAlbumMenuViewDelegate, ELCImagePickerControllerDelegate>
{
    _Bool _isUploadingAttachment;
    NSString *_cid;
    CDUnknownBlockType _completionBlock;
    UIScrollView *_scrollView;
    UIView *_contentView;
    DTTextField *_nameTextField;
    UIView *_lineView;
    DTPlaceHolderTextView *_descTextView;
    UIView *_attachmentView;
    UIImageView *_attachmentIcon;
    UIButton *_uploadButton;
    DTMessagePopupAlbumMenuView *_albumMenuView;
    DTSpaceCollectFileAttachmentView *_uploadAttachmentView;
    DTBizCSpaceDentry *_selectDentry;
    NSString *_uploadingTaskId;
    NSString *_token;
}

@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) _Bool isUploadingAttachment; // @synthesize isUploadingAttachment=_isUploadingAttachment;
@property(copy, nonatomic) NSString *uploadingTaskId; // @synthesize uploadingTaskId=_uploadingTaskId;
@property(retain, nonatomic) DTBizCSpaceDentry *selectDentry; // @synthesize selectDentry=_selectDentry;
@property(retain, nonatomic) DTSpaceCollectFileAttachmentView *uploadAttachmentView; // @synthesize uploadAttachmentView=_uploadAttachmentView;
@property(retain, nonatomic) DTMessagePopupAlbumMenuView *albumMenuView; // @synthesize albumMenuView=_albumMenuView;
@property(retain, nonatomic) UIButton *uploadButton; // @synthesize uploadButton=_uploadButton;
@property(retain, nonatomic) UIImageView *attachmentIcon; // @synthesize attachmentIcon=_attachmentIcon;
@property(retain, nonatomic) UIView *attachmentView; // @synthesize attachmentView=_attachmentView;
@property(retain, nonatomic) DTPlaceHolderTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) DTTextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)elcImagePickerControllerDidCancel:(id)arg1;
- (void)elcImagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)didCancelOnPopupAlbumMenuView:(id)arg1;
- (void)didOpenedAlbumOnPopupAlbumMenuView:(id)arg1;
- (void)didOpenedCameraOnPopupAlbumMenuView:(id)arg1;
- (void)didSelectedPhotosInAlbumWithViewModels:(id)arg1 isOriginal:(_Bool)arg2;
- (void)textFieldTextChanged:(id)arg1;
- (void)checkSendButtonStatus;
- (void)deleteAttachment;
- (void)cancel:(id)arg1;
- (void)sendWork:(id)arg1;
- (void)checkConverstionExist:(CDUnknownBlockType)arg1;
- (void)uploadAttachment;
- (void)reloadAttachmentViewWithDentry:(id)arg1;
- (void)reloadAttachmentViewWithImageName:(id)arg1 size:(unsigned long long)arg2 image:(id)arg3 thumbnail:(id)arg4;
- (void)showKeyboardIfNeeded;
- (void)handleChooseCSpaceFile;
- (void)showGuideIfNeed;
- (void)setupConstraints;
- (void)loadComponents;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

