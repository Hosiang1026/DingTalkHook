//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class DTCMail, NSString, UIButton, UIControl, UILabel, UIScrollView;

@interface DTCMailCalendarToDingViewController : DTViewController
{
    DTCMail *_mail;
    NSString *_remarkContent;
    UILabel *_labelTitle;
    UILabel *_labelTime;
    UILabel *_labelLocation;
    UIControl *_viewAttende;
    UIButton *_btnDing;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIButton *btnDing; // @synthesize btnDing=_btnDing;
@property(retain, nonatomic) UIControl *viewAttende; // @synthesize viewAttende=_viewAttende;
@property(retain, nonatomic) UILabel *labelLocation; // @synthesize labelLocation=_labelLocation;
@property(retain, nonatomic) UILabel *labelTime; // @synthesize labelTime=_labelTime;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) NSString *remarkContent; // @synthesize remarkContent=_remarkContent;
@property(retain, nonatomic) DTCMail *mail; // @synthesize mail=_mail;
- (void).cxx_destruct;
- (void)gotoDingCreateView:(id)arg1;
- (void)attendeViewShow:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)initDingButtonView;
- (void)initTextAreaView;
- (void)initAttendeeView;
- (void)initAreaView;
- (void)initScrollView;
- (void)changeDingBtnStatus;
- (void)viewDidLoad;

@end

