//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, DTDingCreationMenuItem, NSArray, UIButton;

@interface DTDingCreationMenu : UIView
{
    DTDingCreationMenuItem *_creationEntryMenuItem;
    NSArray *_expandedMenuItems;
    UIButton *_creationEntryButton;
    NSArray *_expandedButtons;
    NSArray *_expandedLabels;
    UIView *_backgroundView;
    _Bool _isMenuItemsExpanded;
    CAShapeLayer *_maskLayer;
    CDUnknownBlockType _menuItemsWillExpandBlock;
}

@property(copy, nonatomic) CDUnknownBlockType menuItemsWillExpandBlock; // @synthesize menuItemsWillExpandBlock=_menuItemsWillExpandBlock;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *creationEntryButton; // @synthesize creationEntryButton=_creationEntryButton;
@property(copy, nonatomic) NSArray *expandedMenuItems; // @synthesize expandedMenuItems=_expandedMenuItems;
@property(retain, nonatomic) DTDingCreationMenuItem *creationEntryMenuItem; // @synthesize creationEntryMenuItem=_creationEntryMenuItem;
- (void).cxx_destruct;
- (void)maskLayerAddAnimationWithReversed:(_Bool)arg1;
- (void)collapseBackgroundView;
- (void)expandBackgroundView;
- (void)menuItemsAddAnimationWithReversed:(_Bool)arg1;
- (void)collapseMenuItems;
- (void)expandMenuItems;
- (void)collapse;
- (void)expand;
- (void)backgroundViewTaped:(id)arg1;
- (void)menuItemButtonTaped:(id)arg1;
- (id)createAnimationGroupWithAnimations:(id)arg1 duration:(double)arg2;
- (id)createAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 duration:(double)arg4;
- (void)resetMenuItemsInitialState;
- (void)removeBackgroundView;
- (void)createBackgroundView;
- (id)createLabelWithMenuItem:(id)arg1;
- (id)createButtonWithMenuItem:(id)arg1;
- (void)setupUI;
- (id)menuItemWithTag:(long long)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;

@end
