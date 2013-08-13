/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface MCDependencyManager : NSObject
{
    NSMutableDictionary *_domainsDict;
    NSMutableDictionary *_orphansDict;
}

+ (void)_setDependencyFilePath:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
- (id)dependentsOfParent:(id)arg1 inDomain:(id)arg2;
- (void)removeParent:(id)arg1 fromDomain:(id)arg2;
- (id)parentsInDomain:(id)arg1;
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4;
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4;
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3;
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3;
- (id)orphanedParentsForDomain:(id)arg1;
- (void)_removeOrphanParent:(id)arg1 fromDomain:(id)arg2;
- (void)_addOrphanParent:(id)arg1 forDomain:(id)arg2;
- (id)_domainsDictionaryForDomain:(id)arg1 parent:(id)arg2 outParentsDict:(id *)arg3 outDependents:(id *)arg4;
- (void)commitChanges;
- (id)_domainsDict;
- (id)_init;
- (id)init;

@end

