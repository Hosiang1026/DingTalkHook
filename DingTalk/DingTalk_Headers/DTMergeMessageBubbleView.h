//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTContentBoardView, DTMergeMessageBubbleViewItem, UIImageView;

@interface DTMergeMessageBubbleView : UIView
{
    CDUnknownBlockType _bubbleTapBlock;
    DTMergeMessageBubbleViewItem *_item;
    DTContentBoardView *_contentBoardView;
    UIView *_topLine;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) DTContentBoardView *contentBoardView; // @synthesize contentBoardView=_contentBoardView;
@property(retain, nonatomic) DTMergeMessageBubbleViewItem *item; // @synthesize item=_item;
@property(copy, nonatomic) CDUnknownBlockType bubbleTapBlock; // @synthesize bubbleTapBlock=_bubbleTapBlock;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)handleTap;
- (void)setBgImageHidden:(_Bool)arg1;
- (void)configWithItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
