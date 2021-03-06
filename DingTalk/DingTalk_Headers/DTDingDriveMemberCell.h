//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTDingDriveSelectableCell.h"

@class DTAvatarImageView, UIImageView, UILabel;

@interface DTDingDriveMemberCell : DTDingDriveSelectableCell
{
    DTAvatarImageView *_avatarImageView;
    UILabel *_userNameLabel;
    UILabel *_tagLabel;
    UIImageView *_lockImageView;
}

@property(retain, nonatomic) UIImageView *lockImageView; // @synthesize lockImageView=_lockImageView;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) DTAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)configCellWithItem:(id)arg1;
- (void)addSubViewForCustomCell;

@end

