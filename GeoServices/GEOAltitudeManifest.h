/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@interface GEOAltitudeManifest : NSObject <NSXMLParserDelegate>
{
    struct map<unsigned int, _GEOAltitudeTriggerData, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, _GEOAltitudeTriggerData>>> _triggerData;
}

+ (id)sharedManager;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parseManifest:(id)arg1;
- (id)availableRegions;
- (unsigned int)versionForRegion:(unsigned int)arg1;
- (void)dealloc;
- (BOOL)parseXml:(id)arg1;
- (void)_activeTileGroupChanged:(id)arg1;
- (id)initWithoutObserver;
- (id)init;

@end

