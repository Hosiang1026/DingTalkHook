//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactPickHandler.h"

#import "DTContactPickViewControllerDelegate-Protocol.h"
#import "DTLoadMoreDelegate-Protocol.h"

@class DTContactPickCellItem, DTContactPickEnterpriseSearchHandler, DTLoadMoreController, DTSectionItem, NSArray, NSDictionary, NSString;

@interface DTContactPickEnterpriseHandler : DTContactPickHandler <DTLoadMoreDelegate, DTContactPickViewControllerDelegate>
{
    _Bool _showSubordinatesWhenNodeOnly;
    _Bool _showSearchBarForLablPick;
    _Bool _searchCurLabelUserOnly;
    _Bool _neverMoreData;
    _Bool _isLoading;
    long long _orgId;
    NSArray *_fromDepartments;
    NSArray *_fromPerons;
    NSArray *_fromLabels;
    NSString *_searchBarPlaceHolder;
    NSString *_title;
    NSArray *_dataSources;
    NSArray *_crumbDataSource;
    NSArray *_contactPickCrumbs;
    NSDictionary *_personIndex;
    NSDictionary *_deptIndex;
    DTSectionItem *_deptItem;
    DTSectionItem *_personItem;
    DTSectionItem *_selectAllSection;
    DTSectionItem *_labelItem;
    DTContactPickCellItem *_selectAllItem;
    DTLoadMoreController *_loadMoreController;
    double _defaultTitleWidth;
    DTContactPickEnterpriseSearchHandler *_searchHandler;
}

@property(nonatomic) __weak DTContactPickEnterpriseSearchHandler *searchHandler; // @synthesize searchHandler=_searchHandler;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) double defaultTitleWidth; // @synthesize defaultTitleWidth=_defaultTitleWidth;
@property(nonatomic) _Bool neverMoreData; // @synthesize neverMoreData=_neverMoreData;
@property(retain, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(retain, nonatomic) DTContactPickCellItem *selectAllItem; // @synthesize selectAllItem=_selectAllItem;
@property(retain, nonatomic) DTSectionItem *labelItem; // @synthesize labelItem=_labelItem;
@property(retain, nonatomic) DTSectionItem *selectAllSection; // @synthesize selectAllSection=_selectAllSection;
@property(retain, nonatomic) DTSectionItem *personItem; // @synthesize personItem=_personItem;
@property(retain, nonatomic) DTSectionItem *deptItem; // @synthesize deptItem=_deptItem;
@property(copy, nonatomic) NSDictionary *deptIndex; // @synthesize deptIndex=_deptIndex;
@property(copy, nonatomic) NSDictionary *personIndex; // @synthesize personIndex=_personIndex;
@property(copy, nonatomic) NSArray *contactPickCrumbs; // @synthesize contactPickCrumbs=_contactPickCrumbs;
@property(copy, nonatomic) NSArray *crumbDataSource; // @synthesize crumbDataSource=_crumbDataSource;
@property(copy, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
@property(nonatomic) _Bool searchCurLabelUserOnly; // @synthesize searchCurLabelUserOnly=_searchCurLabelUserOnly;
@property(nonatomic) _Bool showSearchBarForLablPick; // @synthesize showSearchBarForLablPick=_showSearchBarForLablPick;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *searchBarPlaceHolder; // @synthesize searchBarPlaceHolder=_searchBarPlaceHolder;
@property(nonatomic) _Bool showSubordinatesWhenNodeOnly; // @synthesize showSubordinatesWhenNodeOnly=_showSubordinatesWhenNodeOnly;
@property(copy, nonatomic) NSArray *fromLabels; // @synthesize fromLabels=_fromLabels;
@property(copy, nonatomic) NSArray *fromPerons; // @synthesize fromPerons=_fromPerons;
@property(copy, nonatomic) NSArray *fromDepartments; // @synthesize fromDepartments=_fromDepartments;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;
- (void)checkShowPickDepartGuide;
- (_Bool)searchEnable;
- (id)searchController;
- (id)handlerForSearchViewController:(id)arg1 searchBar:(id)arg2;
- (unsigned long long)enterpriseInfoIdentifierType;
- (id)enterpriseInfoIdentifier;
- (id)orgRelation;
- (id)rootCrumbItemWithName:(id)arg1;
- (void)cellItemDidSelected:(id)arg1;
- (void)loadMoreDataSourcesOnce:(_Bool)arg1;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)showsRelationListOfMasterRelation:(id)arg1;
- (void)updateSelectedMemberCountForDeptCellItem:(id)arg1 deptIdentifier:(id)arg2;
- (_Bool)updateSelectedDeptItemIfNeededWithCurmbIds:(id)arg1;
- (id)cellItemWithDepartment:(id)arg1;
- (id)cellItemWithOrgLabel:(id)arg1;
- (id)cellItemWithEnterperiseCard:(id)arg1 showSubordinate:(_Bool)arg2;
- (void)showsOrganizationRelations:(id)arg1 once:(_Bool)arg2;
- (id)crumbsWithOrgRelations;
- (void)allDataDidLoad;
- (void)asyncLoadMoreData;
- (void)selectAllItemDidClick:(id)arg1 cell:(id)arg2;
- (id)pickViewControllerWaterMaskItem;
- (_Bool)shouldShowWaterMask;
- (void)updateCellItemWithDeptIdentifier:(id)arg1 isSelect:(_Bool)arg2;
- (void)updateCellItemWithPersonIdentifier:(id)arg1 isSelect:(_Bool)arg2;
- (void)departmentsHasUnselected:(id)arg1;
- (void)departmentsHasSelected:(id)arg1;
- (void)departmentHasUnselected:(id)arg1;
- (void)departmentHasSelected:(id)arg1;
- (void)personsHasUnselected:(id)arg1;
- (void)personsHasSelected:(id)arg1;
- (void)personHasUnselected:(id)arg1;
- (void)personHasSelected:(id)arg1;
- (id)titleForViewController:(id)arg1;
- (void)fetchRelationsWithDepartmentsOrPersons;
- (void)loadDataSource;
- (id)dataSourceForCrumbView:(id)arg1;
- (_Bool)shouldShowSearchBar:(id)arg1;
- (_Bool)shouldShowCrumbViewForViewController:(id)arg1;
- (id)dataSourceForPickViewController:(id)arg1;
- (id)placeHolderForSearchBar:(id)arg1;
- (id)loadModelControllerForPicker:(id)arg1;
- (id)emptyViewForViewController:(id)arg1;
- (_Bool)shouldShowEmptyView:(id)arg1;
- (void)pickViewWillDestory:(id)arg1;
- (void)pickViewWillShow:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
