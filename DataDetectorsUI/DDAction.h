/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NSURL;

@interface DDAction : NSObject <NSCoding>
{
    struct __DDResult *_result;
    struct __DDResult *_coalescedResult;
    struct __CFArray *_associatedResults;
    NSDictionary *_context;
    NSURL *_url;
    BOOL _cachedCoalescedResult;
    BOOL _cachedAssociatedResults;
    BOOL _isDefaultAction;
    id _delegate;
}

+ (id)defaultActionWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
+ (id)actionWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
@property BOOL isDefaultAction; // @synthesize isDefaultAction=_isDefaultAction;
@property id delegate; // @synthesize delegate=_delegate;
- (id)context;
- (struct __CFArray *)associatedResults;
- (struct __DDResult *)coalescedResult;
- (struct __DDResult *)result;
- (id)url;
- (id)localizedName;
- (void)_copyURL:(id)arg1;
- (void)_copyURL:(id)arg1 andString:(id)arg2;
- (void)perform;
- (int)interactionType;
- (void)prepareViewControllerForActionController:(id)arg1;
- (id)viewController;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;

@end

