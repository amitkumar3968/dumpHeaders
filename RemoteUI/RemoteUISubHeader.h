/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "RemoteUITableHeader.h"

@class UILabel;

@interface RemoteUISubHeader : UIView <RemoteUITableHeader>
{
    UILabel *_headerLabel;
    UILabel *_subHeaderLabel;
    float _subHeaderSized;
    BOOL _isFirstSection;
}

- (void)dealloc;
- (float)headerHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (void)layoutSubviews;
- (void)setSectionIsFirst:(BOOL)arg1;
- (id)initWithAttributes:(id)arg1;

@end

