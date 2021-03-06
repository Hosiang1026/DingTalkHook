//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTBizRedEnvelopCluster, DTBizRedEnvelopClusterDetail, DTBizRedEnvelopFlow, NSMutableArray;

@interface DTBizRedEnvelopDetailViewModel : NSObject
{
    DTBizRedEnvelopCluster *_redEnvelopCluster;
    NSMutableArray *_redEnvelopFlows;
    DTBizRedEnvelopClusterDetail *_clusterDetail;
}

+ (id)detailViewModelWithDetailModel:(id)arg1;
+ (id)detailViewModelWithPickingStatus:(id)arg1;
@property(retain, nonatomic) DTBizRedEnvelopClusterDetail *clusterDetail; // @synthesize clusterDetail=_clusterDetail;
@property(retain, nonatomic) NSMutableArray *redEnvelopFlows; // @synthesize redEnvelopFlows=_redEnvelopFlows;
@property(retain, nonatomic) DTBizRedEnvelopCluster *redEnvelopCluster; // @synthesize redEnvelopCluster=_redEnvelopCluster;
- (void).cxx_destruct;
@property(readonly, nonatomic) DTBizRedEnvelopFlow *pickedFlow;
- (id)init;

@end

