/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"

@class IUMediaDataSource, IUMediaEntitySpecifier, MPMediaQuery, NSString, UIImage;

@interface IUViewControllerContext : NSObject <NSCoding>
{
    IUMediaDataSource *_dataSource;
    unsigned int _isRootController:1;
    IUMediaEntitySpecifier *_specifier;
    MPMediaQuery *_query;
    IUViewControllerContext *_sourceContext;
    int _style;
    unsigned int _titleIgnoresHistory:1;
    int _type;
    id <NSCoding><NSObject> _viewControllerInfo;
    NSString *_defaultPNGNameOverride;
    UIImage *_transitionImage;
}

+ (id)newViewControllerWithIdentifier:(id)arg1;
+ (id)contextWithIdentifier:(id)arg1;
+ (id)contextWithDataSource:(id)arg1;
@property(retain, nonatomic) id <NSCoding><NSObject> viewControllerInfo; // @synthesize viewControllerInfo=_viewControllerInfo;
@property(retain, nonatomic) UIImage *transitionImage; // @synthesize transitionImage=_transitionImage;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) IUMediaEntitySpecifier *specifier; // @synthesize specifier=_specifier;
@property(retain, nonatomic) IUViewControllerContext *sourceContext; // @synthesize sourceContext=_sourceContext;
@property(copy, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) IUMediaDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)_reloadDataSourceFromSourceContext;
- (id)_newDataSourceFromType:(int)arg1 mediaQuery:(id)arg2;
- (id)_newDataSourceFromType:(int)arg1 mediaSpecifier:(id)arg2;
@property(readonly, nonatomic) BOOL startAtEndOnFirstAppear;
@property(nonatomic) BOOL titleIgnoresHistory;
@property(nonatomic, getter=isRootController) BOOL rootController;
@property(retain, nonatomic) NSString *identifier;
- (void)setDataSourceFromMediaQuery:(id)arg1;
- (void)setDataSourceFromMediaSpecifier:(id)arg1;
- (void)unloadReloadableData;
@property(readonly, nonatomic) IUViewControllerContext *rootContext;
@property(readonly, nonatomic, getter=isRestorableNavigationPathNode) BOOL restorableNavigationPathNode;
@property(readonly, nonatomic, getter=isArchivable) BOOL archivable;
@property(readonly, nonatomic) NSString *aggregateStatisticsDisplayCountKey;
- (id)newViewController;
- (id)copySpecifierHistory;
@property(retain, nonatomic) NSString *defaultPNGName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (unsigned long long)persistentPlaylistUID;

@end

