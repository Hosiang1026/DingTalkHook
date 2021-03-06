//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIScrollView;
@protocol DTHorizontalPopdownViewDelegate;

@interface DTHorizontalPopdownView : UIView
{
    _Bool _showing;
    _Bool _showBackground;
    id <DTHorizontalPopdownViewDelegate> _delegate;
    UIView *_popdownBtn;
    long long _numberOfCellInRow;
    double _heightOfCell;
    double _marginLeftAndRight;
    UIView *_blurView;
    NSArray *_dataSource;
    NSMutableArray *_cellArray;
    UIScrollView *_container;
    UIView *_backgroundView;
    UIView *_line;
}

@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIScrollView *container; // @synthesize container=_container;
@property(retain, nonatomic) NSMutableArray *cellArray; // @synthesize cellArray=_cellArray;
@property(copy, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool showBackground; // @synthesize showBackground=_showBackground;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) double marginLeftAndRight; // @synthesize marginLeftAndRight=_marginLeftAndRight;
@property(nonatomic) double heightOfCell; // @synthesize heightOfCell=_heightOfCell;
@property(nonatomic) long long numberOfCellInRow; // @synthesize numberOfCellInRow=_numberOfCellInRow;
@property(nonatomic) __weak UIView *popdownBtn; // @synthesize popdownBtn=_popdownBtn;
@property(nonatomic) __weak id <DTHorizontalPopdownViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showing; // @synthesize showing=_showing;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onBackgroundTpped:(id)arg1;
- (void)addBottomLine;
- (void)layoutCell;
- (double)containerHeight;
- (void)dismiss;
- (void)showInView:(id)arg1 yOffset:(double)arg2;
- (void)resetWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1;

@end

