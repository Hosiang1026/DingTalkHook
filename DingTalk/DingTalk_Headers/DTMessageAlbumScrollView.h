//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class DTMessageAlbumScrollCollectionView, NSArray, NSIndexPath, NSMutableArray, NSString, UIActivityIndicatorView, UICollectionViewFlowLayout, UIImageView;
@protocol DTMessageAlbumScrollViewDelegate;

@interface DTMessageAlbumScrollView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _expanded;
    _Bool _zoomedIn;
    _Bool _zoomingIn;
    _Bool _isDownward;
    NSIndexPath *_dragIndexPath;
    UIImageView *_animateImageView;
    _Bool _enableDragUpSend;
    _Bool _isZoomed;
    DTMessageAlbumScrollCollectionView *_collectionView;
    id <DTMessageAlbumScrollViewDelegate> _delegate;
    NSIndexPath *_selectedIndexPath;
    NSMutableArray *_selectedIndexPaths;
    NSArray *_photoViewModels;
    unsigned long long _maximumImagesCount;
    UICollectionViewFlowLayout *_smallLayout;
    UICollectionViewFlowLayout *_largeLayout;
    UIActivityIndicatorView *_loadingView;
    double _spacing;
    UIView *_errorView;
    struct CGPoint _dismissRightBottomPoint;
    struct UIEdgeInsets _contentInset;
}

+ (void)preAccessPhotosInAlbumWithDoneBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) _Bool isZoomed; // @synthesize isZoomed=_isZoomed;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UICollectionViewFlowLayout *largeLayout; // @synthesize largeLayout=_largeLayout;
@property(retain, nonatomic) UICollectionViewFlowLayout *smallLayout; // @synthesize smallLayout=_smallLayout;
@property(nonatomic) unsigned long long maximumImagesCount; // @synthesize maximumImagesCount=_maximumImagesCount;
@property(readonly, copy, nonatomic) NSArray *photoViewModels; // @synthesize photoViewModels=_photoViewModels;
@property(nonatomic) struct CGPoint dismissRightBottomPoint; // @synthesize dismissRightBottomPoint=_dismissRightBottomPoint;
@property(nonatomic) _Bool enableDragUpSend; // @synthesize enableDragUpSend=_enableDragUpSend;
@property(retain, nonatomic) NSMutableArray *selectedIndexPaths; // @synthesize selectedIndexPaths=_selectedIndexPaths;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) __weak id <DTMessageAlbumScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DTMessageAlbumScrollCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)setZoomedMode:(_Bool)arg1 animated:(_Bool)arg2 index:(long long)arg3;
- (void)centerOnItemWithIndex:(long long)arg1 animated:(_Bool)arg2;
- (struct CGPoint)contentOffsetForItemAtIndex:(long long)arg1;
- (void)notifyDidChangeSelectedPhotos;
- (_Bool)isSelectedIndexPath:(id)arg1 atIndex:(unsigned long long *)arg2;
- (void)didSelectedPhotoAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)accessPhotosInAlbum;
- (void)onErrorViewTapped:(id)arg1;
- (void)setupFlowLayoutWithSectionInsets:(struct UIEdgeInsets)arg1;
- (void)layoutSubviews;
- (void)showNoAlbumPermissionView:(_Bool)arg1;
- (void)handleDragUpAction:(id)arg1;
- (void)setupAlbumViewWithSectionInsets:(struct UIEdgeInsets)arg1;
- (id)initWithPhotoModels:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

