//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface DTLinkerFooterView : UIView
{
    UIButton *_linkButton;
    CDUnknownBlockType _clickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) UIButton *linkButton; // @synthesize linkButton=_linkButton;
- (void).cxx_destruct;
- (void)click;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
