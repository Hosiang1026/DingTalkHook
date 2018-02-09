//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTWebImageView, DTWorkAgentActionView, DTWorkAgentCellItem, NSArray, UIImageView, UILabel;

@interface DTWorkMessageToDoContentView : UIView
{
    UIImageView *_backgroundContentView;
    NSArray *_labels;
    DTWebImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_timeLabel;
    DTWorkAgentActionView *_actionView;
    DTWorkAgentCellItem *_item;
}

+ (double)heightWithItem:(id)arg1 constrainedSize:(struct CGSize)arg2;
+ (double)heightWithAttributedText:(id)arg1 constrainedSize:(struct CGSize)arg2;
+ (id)attributedTextWithFormItem:(id)arg1;
- (void).cxx_destruct;
- (void)configCellWithItem:(id)arg1;
- (void)layoutSubviews;
- (void)setupContentView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
