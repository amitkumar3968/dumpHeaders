/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MusicLibrary/ML3QueryResultSet.h>

__attribute__((visibility("hidden")))
@interface ML3ContainerQueryResultSet : ML3QueryResultSet
{
    long long _containerPID;
    unsigned int _songLimit;
}

- (BOOL)_updateToLibraryCurrentRevision;
- (unsigned int)songLimit;
- (id)initWithQuery:(id)arg1;

@end
