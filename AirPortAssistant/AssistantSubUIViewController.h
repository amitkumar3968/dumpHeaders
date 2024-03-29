/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AirPortAssistant/AUUITableViewController.h>

@class AssistantUIViewController, NSDictionary, NSMutableDictionary;

@interface AssistantSubUIViewController : AUUITableViewController
{
    AssistantUIViewController *_parentController;
    BOOL _iPadIdiom;
    NSDictionary *_inParamDict;
    NSMutableDictionary *_outResultsDict;
}

@property(readonly, nonatomic) NSDictionary *outResultsDict; // @synthesize outResultsDict=_outResultsDict;
@property(retain, nonatomic) NSDictionary *inParamDict; // @synthesize inParamDict=_inParamDict;
@property(nonatomic) BOOL iPadIdiom; // @synthesize iPadIdiom=_iPadIdiom;
@property(nonatomic) AssistantUIViewController *parentController; // @synthesize parentController=_parentController;
- (id)getProductLocalizedStringWithFormat:(id)arg1;
- (void)setRightNavigationButton:(id)arg1 enable:(BOOL)arg2 hide:(BOOL)arg3;
- (void)setLeftNavigationButton:(id)arg1 enable:(BOOL)arg2 hide:(BOOL)arg3;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

