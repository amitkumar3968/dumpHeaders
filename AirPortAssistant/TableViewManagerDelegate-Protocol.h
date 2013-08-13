/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@protocol TableViewManagerDelegate

@optional
- (BOOL)shouldIndentWhileEditingRowAtIndexPath:(id)arg1;
- (void)commitEditingStyle:(int)arg1 forRowAtIndexPath:(id)arg2;
- (id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned int)arg2 inCellAtIndexPath:(id)arg3;
- (id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned int)arg2 inCellWithTag:(int)arg3;
- (void)buttonTouchedInCellAtIndexPath:(id)arg1 forButtonIndex:(unsigned int)arg2;
- (void)textFieldDidEndEditingAtIndexPath:(id)arg1;
- (void)textFieldDidChangeAtIndexPath:(id)arg1;
- (void)segmentedControlTouchedInCellAtIndexPath:(id)arg1 forSegmentedControlIndex:(int)arg2 selectedSegment:(int)arg3;
- (void)switchTouchedInCellAtIndexPath:(id)arg1 forSwitchIndex:(unsigned int)arg2 isOn:(BOOL)arg3;
- (BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned int)arg3 toString:(id)arg4;
- (BOOL)shouldHandleReturnForTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned int)arg3;
- (void)accessoryButtonTappedForRowWithIndexPath:(id)arg1;
- (void)touchInCellAtIndexPath:(id)arg1;
@end
