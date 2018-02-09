//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTTableView, NSMutableArray, NSString;

@interface DTWorkCalendarMembersController : DTViewController <UITableViewDataSource, UITableViewDelegate>
{
    DTTableView *_tableView;
    NSMutableArray *_calMemberItems;
    NSString *_titleString;
    _Bool _hasMore;
    _Bool _containDepartments;
    long long _orgId;
    long long _deptId;
    long long _dateVer;
    NSString *_appId;
    NSString *_subAppId;
    long long _itemType;
}

@property(nonatomic) _Bool containDepartments; // @synthesize containDepartments=_containDepartments;
@property(readonly, nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(readonly, copy, nonatomic) NSString *subAppId; // @synthesize subAppId=_subAppId;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly, nonatomic) long long dateVer; // @synthesize dateVer=_dateVer;
@property(readonly, nonatomic) long long deptId; // @synthesize deptId=_deptId;
@property(readonly, nonatomic) long long orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addMembersWithModelList:(id)arg1;
- (void)loadMembersListWithStart:(long long)arg1;
- (void)setTitleString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *titleString;
- (void)viewDidLoad;
- (void)configDataSoureceWithOrgId:(long long)arg1 deptId:(long long)arg2 dateVer:(long long)arg3 appId:(id)arg4 subAppId:(id)arg5 itemType:(long long)arg6 title:(id)arg7;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
