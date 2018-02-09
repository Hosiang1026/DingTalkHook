//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTCircleFeedBaseCell.h"

@class DTCircleFeedActionButton, UILabel, UIView;

@interface DTCircleFeedActionButtonsCell : DTCircleFeedBaseCell
{
    CDUnknownBlockType _deleteButtonDidTapCallback;
    CDUnknownBlockType _likesButtonDidTapCallback;
    CDUnknownBlockType _commentsButtonDidTapCallback;
    UILabel *_createdAtLabel;
    DTCircleFeedActionButton *_deleteButton;
    DTCircleFeedActionButton *_likesButton;
    UIView *_divider;
    DTCircleFeedActionButton *_commentsButton;
}

@property(retain, nonatomic) DTCircleFeedActionButton *commentsButton; // @synthesize commentsButton=_commentsButton;
@property(retain, nonatomic) UIView *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) DTCircleFeedActionButton *likesButton; // @synthesize likesButton=_likesButton;
@property(retain, nonatomic) DTCircleFeedActionButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UILabel *createdAtLabel; // @synthesize createdAtLabel=_createdAtLabel;
@property(copy, nonatomic) CDUnknownBlockType commentsButtonDidTapCallback; // @synthesize commentsButtonDidTapCallback=_commentsButtonDidTapCallback;
@property(copy, nonatomic) CDUnknownBlockType likesButtonDidTapCallback; // @synthesize likesButtonDidTapCallback=_likesButtonDidTapCallback;
@property(copy, nonatomic) CDUnknownBlockType deleteButtonDidTapCallback; // @synthesize deleteButtonDidTapCallback=_deleteButtonDidTapCallback;
- (void).cxx_destruct;
- (void)commentsButtonDidTapHandler:(id)arg1;
- (void)likesButtonDidTapHandler:(id)arg1;
- (void)deleteButtonDidTapHandler:(id)arg1;
- (void)setCellInfo:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
