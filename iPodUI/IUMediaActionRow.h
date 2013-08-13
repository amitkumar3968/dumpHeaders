/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IUMediaTableCell, IUTableCellConfiguration, UIView;

@interface IUMediaActionRow : NSObject
{
    SEL _action;
    IUMediaTableCell *_cell;
    IUTableCellConfiguration *_configuration;
    BOOL _includeInDisplayedRowCount;
    BOOL _selectable;
    BOOL _showCheckmark;
    BOOL _showDisclosure;
    BOOL _showPlusButton;
    int _tag;
    int _mediaTypes;
}

+ (id)hyperlinkActionRowWithTag:(int)arg1 mediaType:(int)arg2 title:(id)arg3 action:(SEL)arg4;
+ (id)actionRowWithPreset:(int)arg1 action:(SEL)arg2 title:(id)arg3 cellConfigurationClass:(Class)arg4;
+ (id)actionRowWithPreset:(int)arg1 action:(SEL)arg2 title:(id)arg3;
+ (id)actionRowWithPreset:(int)arg1 action:(SEL)arg2;
+ (id)actionRowWithTag:(int)arg1 action:(SEL)arg2;
@property(readonly, nonatomic) int mediaTypes; // @synthesize mediaTypes=_mediaTypes;
@property(readonly, nonatomic) int tag; // @synthesize tag=_tag;
@property(nonatomic) BOOL showPlusButton; // @synthesize showPlusButton=_showPlusButton;
@property(nonatomic) BOOL showDisclosure; // @synthesize showDisclosure=_showDisclosure;
@property(nonatomic) BOOL showCheckmark; // @synthesize showCheckmark=_showCheckmark;
@property(nonatomic) BOOL selectable; // @synthesize selectable=_selectable;
@property(nonatomic) BOOL includeInDisplayedRowCount; // @synthesize includeInDisplayedRowCount=_includeInDisplayedRowCount;
@property(retain, nonatomic) IUTableCellConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) IUMediaTableCell *cell; // @synthesize cell=_cell;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) int mediaDisclosureStyle;
@property(readonly, nonatomic) UIView *accessoryView;
- (void)dealloc;
- (id)description;
- (id)initWithPreset:(int)arg1 mediaTypes:(int)arg2 title:(id)arg3 action:(SEL)arg4 cellConfigurationClass:(Class)arg5;
- (id)initWithTag:(int)arg1 mediaTypes:(int)arg2 selectable:(BOOL)arg3 action:(SEL)arg4;

@end

