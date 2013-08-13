/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewController.h"

#import "TLVibrationPickerTableViewCellDelegate.h"
#import "TLVibrationRecorderViewControllerDelegate.h"

@class NSArray, NSIndexPath, NSString, NSTimer, TLVibrationManager, TLVibratorController;

@interface TLVibrationPickerViewController : UITableViewController <TLVibrationPickerTableViewCellDelegate, TLVibrationRecorderViewControllerDelegate>
{
    int _alertType;
    BOOL _showsDefault;
    BOOL _showsUserGenerated;
    BOOL _showsNone;
    BOOL _showsNothingSelected;
    BOOL _showsEditButtonAtRightSideOfCurrentNavigationController;
    BOOL _allowsDeletingCurrentSystemVibration;
    NSString *_noneString;
    NSIndexPath *_selectedVibrationIndexPath;
    BOOL _canEnterEditingMode;
    BOOL _vibrating;
    BOOL _viewHasAppearedAtLeastOnce;
    BOOL _isCallingParentViewController;
    BOOL _swipeToDeleteMode;
    BOOL _skipNextUserGeneratedVibrationsDidChangeNotification;
    TLVibrationManager *_vibrationManager;
    TLVibratorController *_vibratorController;
    id <TLVibrationPickerViewControllerDelegate> _delegate;
    NSTimer *_vibrationShouldStopTimer;
    NSArray *_sortedVibrationIdentifiers;
    NSArray *_sortedUserGeneratedVibrationIdentifiers;
}

@property(nonatomic) BOOL allowsDeletingCurrentSystemVibration; // @synthesize allowsDeletingCurrentSystemVibration=_allowsDeletingCurrentSystemVibration;
@property(nonatomic) BOOL showsEditButtonAtRightSideOfCurrentNavigationController; // @synthesize showsEditButtonAtRightSideOfCurrentNavigationController=_showsEditButtonAtRightSideOfCurrentNavigationController;
@property(nonatomic) BOOL showsNothingSelected; // @synthesize showsNothingSelected=_showsNothingSelected;
@property(retain, nonatomic) NSString *noneString; // @synthesize noneString=_noneString;
@property(nonatomic) id <TLVibrationPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)finishedWithPicker;
- (void)vibrationPickerTableViewCell:(id)arg1 endedEditingWithText:(id)arg2;
- (void)stopVibrating;
- (void)_startVibratingWithVibrationIdentifier:(id)arg1;
- (void)vibrationRecorderViewController:(id)arg1 didFinishRecordingVibrationPattern:(id)arg2 name:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
@property(readonly, nonatomic) int _sectionForNoneGroup;
@property(readonly, nonatomic) int _sectionForUserGeneratedGroup;
@property(readonly, nonatomic) int _sectionForSystemGroup;
@property(readonly, nonatomic) int _sectionForDefaultGroup;
- (void)_handleError:(id)arg1;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (id)_adjustedNameForVibrationWithDesiredName:(id)arg1 vibrationIdentifier:(id)arg2;
- (void)_updateSelectionStyleForCell:(id)arg1 indexPath:(id)arg2;
- (void)_updateEditButtonItemWithAnimation:(BOOL)arg1;
- (void)_updateEditButtonItem;
- (id)_navigationItem;
- (void)_processSelectionOfVibrationWithIdentifier:(id)arg1;
- (id)_indexPathForVibrationWithIdentifier:(id)arg1;
- (id)_identifierOfVibrationAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSArray *_sortedUserGeneratedVibrationIdentifiers;
@property(readonly, nonatomic) NSArray *_sortedVibrationIdentifiers;
- (id)_sortedArrayWithVibrationIdentifiers:(id)arg1 allowsDuplicateVibrationNames:(BOOL)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
@property(readonly, nonatomic) BOOL _showsOnlyEditableSections;
@property(retain, nonatomic, setter=_setSelectedVibrationIndexPath:) NSIndexPath *_selectedVibrationIndexPath;
- (id)_actualIndexPathFromNonEditingIndexPath:(id)arg1;
- (id)_nonEditingIndexPathFromActualIndexPath:(id)arg1;
- (void)_setSelectedVibrationIdentifier:(id)arg1 processSelectionOfVibrationIdentifier:(BOOL)arg2;
@property(retain, nonatomic) NSString *selectedVibrationIdentifier;
@property(readonly, nonatomic) float contentHeight;
@property(nonatomic) BOOL canEnterEditingMode; // @synthesize canEnterEditingMode=_canEnterEditingMode;
- (void)dealloc;
- (id)initWithAlertType:(int)arg1 showsDefault:(BOOL)arg2 showsUserGenerated:(BOOL)arg3 showsNone:(BOOL)arg4;
- (id)initWithStyle:(int)arg1;
- (id)initWithVibrationType:(int)arg1 avController:(id)arg2 showsDefault:(BOOL)arg3 showsUserGenerated:(BOOL)arg4 showsNone:(BOOL)arg5;

@end

