/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface IUTableViewControllerInfo : NSObject <NSCoding>
{
    struct CGPoint _scrollOffset;
    int _selectedRow;
    BOOL _searchBarIsFirstResponder;
    NSString *_searchString;
}

@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(nonatomic) BOOL searchBarIsFirstResponder; // @synthesize searchBarIsFirstResponder=_searchBarIsFirstResponder;
@property(nonatomic) int selectedRow; // @synthesize selectedRow=_selectedRow;
@property(nonatomic) struct CGPoint scrollOffset; // @synthesize scrollOffset=_scrollOffset;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

