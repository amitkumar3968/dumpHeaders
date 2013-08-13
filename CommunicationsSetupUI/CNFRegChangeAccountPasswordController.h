/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CommunicationsSetupUI/CNFRegAuthorizedAccountWebViewController.h>

@class NSString;

@interface CNFRegChangeAccountPasswordController : CNFRegAuthorizedAccountWebViewController
{
    id <CNFRegChangeAccountPasswordDelegate> _delegate;
    NSString *_appleID;
}

@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(nonatomic) id <CNFRegChangeAccountPasswordDelegate> delegate; // @synthesize delegate=_delegate;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)cancelTapped;
- (id)overrideURLForURL:(id)arg1;
- (id)logName;
- (id)bagKey;
- (BOOL)canSendURLRequest:(id)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (void)dealloc;
- (id)initWithRegController:(id)arg1 appleID:(id)arg2;

@end

