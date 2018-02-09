//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "LWFetchedResultsControllerDelegate-Protocol.h"
#import "MGSwipeTableCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTEmptyResultView, DTTableView, LWFetchedResultsController, NSString;

@interface DTBossConversationListController : DTViewController <UITableViewDelegate, UITableViewDataSource, LWFetchedResultsControllerDelegate, MGSwipeTableCellDelegate>
{
    _Bool _isPresentVC;
    DTTableView *_tableView;
    DTEmptyResultView *_emptyResultView;
    LWFetchedResultsController *_fetchController;
}

+ (void)openBossConversationList;
@property(retain, nonatomic) LWFetchedResultsController *fetchController; // @synthesize fetchController=_fetchController;
@property(retain, nonatomic) DTEmptyResultView *emptyResultView; // @synthesize emptyResultView=_emptyResultView;
@property(retain, nonatomic) DTTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isPresentVC; // @synthesize isPresentVC=_isPresentVC;
- (void).cxx_destruct;
- (void)createNewBossConversation;
- (void)dismissCurrentVC;
- (void)showBossMoreInfo:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (id)conversationAtRow:(unsigned long long)arg1;
- (void)checkEmptyPage;
- (void)controllerDidRollback:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(long long)arg4 newIndex:(unsigned long long)arg5;
- (void)controllerWillChangeContent:(id)arg1;
- (id)swipeCellActionTitlesAtIndexPath:(id)arg1;
- (void)didClickSwipeCellAtIndexPath:(id)arg1 actionIndex:(long long)arg2;
- (id)swipeCellTitlesWithIndexPath:(id)arg1 colors:(id *)arg2;
- (id)swipeCellRightButtonsAtIndexPath:(id)arg1;
- (_Bool)swipeTableCell:(id)arg1 tappedButtonAtIndex:(long long)arg2 direction:(long long)arg3 fromExpansion:(_Bool)arg4;
- (id)swipeTableCell:(id)arg1 swipeButtonsForDirection:(long long)arg2 swipeSettings:(id)arg3 expansionSettings:(id)arg4;
- (_Bool)swipeTableCell:(id)arg1 canSwipe:(long long)arg2 fromPoint:(struct CGPoint)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadAllBossConversations;
- (void)initializeDatasource;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
