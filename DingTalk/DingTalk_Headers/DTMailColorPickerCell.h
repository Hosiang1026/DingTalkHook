//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UIView;

@interface DTMailColorPickerCell : UICollectionViewCell
{
    CDUnknownBlockType _colorHexSignal;
    CDUnknownBlockType _checkModeSignal;
    UIView *_colorView;
    UIImageView *_checkIcon;
}

@property(retain, nonatomic) UIImageView *checkIcon; // @synthesize checkIcon=_checkIcon;
@property(retain, nonatomic) UIView *colorView; // @synthesize colorView=_colorView;
@property(copy, nonatomic) CDUnknownBlockType checkModeSignal; // @synthesize checkModeSignal=_checkModeSignal;
@property(copy, nonatomic) CDUnknownBlockType colorHexSignal; // @synthesize colorHexSignal=_colorHexSignal;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

