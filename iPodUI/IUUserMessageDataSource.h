/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUMediaDataSource.h>

@class NSString, NSURL, UIImage;

@interface IUUserMessageDataSource : IUMediaDataSource
{
    struct UIEdgeInsets _edgeInsets;
    UIImage *_image;
    NSString *_messageSubtitle;
    NSString *_messageTitle;
    NSURL *_findContentURL;
    float _modalContextTopInset;
    BOOL _showStrings;
    float _modalContextTopOffset;
}

@property(nonatomic) float modalContextTopOffset; // @synthesize modalContextTopOffset=_modalContextTopOffset;
@property(readonly, nonatomic) BOOL showStrings; // @synthesize showStrings=_showStrings;
@property(retain, nonatomic) NSURL *findContentURL; // @synthesize findContentURL=_findContentURL;
@property(retain, nonatomic) NSString *messageTitle; // @synthesize messageTitle=_messageTitle;
@property(retain, nonatomic) NSString *messageSubtitle; // @synthesize messageSubtitle=_messageSubtitle;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (BOOL)isRestorableNavigationPathNode;
- (void)dealloc;
- (id)initForVideo;
- (id)initForMusic;
- (id)init;

@end

