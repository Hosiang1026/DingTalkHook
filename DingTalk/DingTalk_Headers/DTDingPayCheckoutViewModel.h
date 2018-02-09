//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTDingPaymentCellViewModel, NSString;

@interface DTDingPayCheckoutViewModel : NSObject
{
    NSString *_title;
    NSString *_amount;
    DTDingPaymentCellViewModel *_payment;
    NSString *_footer;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _payBlock;
}

@property(copy, nonatomic) CDUnknownBlockType payBlock; // @synthesize payBlock=_payBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) DTDingPaymentCellViewModel *payment; // @synthesize payment=_payment;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
