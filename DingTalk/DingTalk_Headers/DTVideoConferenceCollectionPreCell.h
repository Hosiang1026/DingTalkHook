//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAShapeLayer, DTAvatarView, UIImageView, UILabel;
@protocol DTVideoConferencePreCellDataSource;

@interface DTVideoConferenceCollectionPreCell : UICollectionViewCell
{
    DTAvatarView *_avater;
    UILabel *_titleLabel;
    unsigned long long _memberIdentifer;
    id <DTVideoConferencePreCellDataSource> _dataSource;
    CAShapeLayer *_minusLayer;
    UILabel *_activeLabel;
    UILabel *_netLabel;
    UIImageView *_dingCardImageView;
}

@property(retain, nonatomic) UIImageView *dingCardImageView; // @synthesize dingCardImageView=_dingCardImageView;
@property(retain, nonatomic) UILabel *netLabel; // @synthesize netLabel=_netLabel;
@property(retain, nonatomic) UILabel *activeLabel; // @synthesize activeLabel=_activeLabel;
@property(retain, nonatomic) CAShapeLayer *minusLayer; // @synthesize minusLayer=_minusLayer;
@property(nonatomic) __weak id <DTVideoConferencePreCellDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long memberIdentifer; // @synthesize memberIdentifer=_memberIdentifer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DTAvatarView *avater; // @synthesize avater=_avater;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1;
- (void)refreshAvatar:(id)arg1 withSizeKey:(long long)arg2 font:(id)arg3;
- (void)refreshAvatarByUid:(id)arg1 withSizeKey:(long long)arg2 font:(id)arg3;
- (void)loadCompoment;
- (id)initWithFrame:(struct CGRect)arg1;

@end
