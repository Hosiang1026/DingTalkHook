//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIImage;

@interface DTMessagePopupInputMenuPageView : UIView
{
    NSArray *_items;
    NSArray *_itemViews;
    CDUnknownBlockType _didSelectMenuItemBlock;
    UIImage *_normalBgImage;
    UIImage *_highlightBgImage;
}

@property(retain, nonatomic) UIImage *highlightBgImage; // @synthesize highlightBgImage=_highlightBgImage;
@property(retain, nonatomic) UIImage *normalBgImage; // @synthesize normalBgImage=_normalBgImage;
@property(copy, nonatomic) CDUnknownBlockType didSelectMenuItemBlock; // @synthesize didSelectMenuItemBlock=_didSelectMenuItemBlock;
@property(retain, nonatomic) NSArray *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)didTapActionButton:(id)arg1;
- (id)actionButtonWithItem:(id)arg1;
- (void)setupItemViews;
- (void)layoutSubviews;

@end
