/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString, VMUMachTaskContainer;

@interface VMUSymbolicator : NSObject
{
    NSMutableArray *_symbolOwners;
    NSArray *_symbolOwnerAddressRanges;
    NSString *_path;
    VMUMachTaskContainer *_machTaskContainer;
    BOOL _isProtected;
}

+ (id)symbolicatorForSignature:(id)arg1;
+ (id)symbolicatorForMachTaskContainer:(id)arg1;
+ (id)symbolicatorForPid:(int)arg1;
+ (id)symbolicatorForTask:(unsigned int)arg1;
+ (id)symbolicatorForPath:(id)arg1 architecture:(id)arg2;
+ (id)symbolicatorsForPath:(id)arg1;
+ (BOOL)isIgnoreFunctionSymbols;
+ (void)ignoreFunctionSymbols:(BOOL)arg1;
+ (id)symbolicatorForSignature:(id)arg1 dsymSearchPaths:(id)arg2 useMds:(BOOL)arg3;
+ (id)symbolicatorWithSymbolOwners:(id)arg1 path:(id)arg2 machTaskContainer:(id)arg3;
+ (id)symbolicatorWithHeaders:(id)arg1 allowLazySymbolOwners:(BOOL)arg2 path:(id)arg3 machTaskContainer:(id)arg4;
+ (id)convertHeaderToSymbolOwner:(id)arg1 allowLazySymbolOwners:(BOOL)arg2;
- (void)dealloc;
- (id)description;
- (id)architecture;
- (void)forceFullSymbolExtraction;
- (BOOL)isProtected;
- (id)signature;
- (int)pid;
- (id)path;
- (id)sourceInfosInAddressRange:(struct _VMURange)arg1;
- (id)symbolsInAddressRange:(struct _VMURange)arg1;
- (id)symbolOwners;
- (id)sourceInfos;
- (id)symbols;
- (id)symbolOwnerForPath:(id)arg1;
- (id)symbolOwnersWithFlags:(unsigned int)arg1;
- (id)symbolOwnerForName:(id)arg1;
- (id)symbolOwnersForName:(id)arg1;
- (id)symbolsForMangledName:(id)arg1;
- (id)symbolsForName:(id)arg1;
- (id)symbolOwnersInAddressRange:(struct _VMURange)arg1;
- (id)symbolOwnerForAddress:(unsigned long long)arg1;
- (id)sourceInfoForAddress:(unsigned long long)arg1;
- (id)symbolForAddress:(unsigned long long)arg1;
- (id)regionsForName:(id)arg1;
- (id)regionsInAddressRange:(struct _VMURange)arg1;
- (id)regionForAddress:(unsigned long long)arg1;
- (id)regions;
- (BOOL)containsAddress:(unsigned long long)arg1;
- (void)replaceSymbolOwner:(id)arg1 withSymbolOwner:(id)arg2;
- (BOOL)addSymbolRichFile:(id)arg1;
- (id)faultLazySymbolOwnerAtIndex:(int)arg1;
- (id)programTextForAddressRange:(struct _VMURange)arg1;
- (id)programTextForAddress:(unsigned long long)arg1;
- (id)initWithSymbolOwners:(id)arg1 path:(id)arg2 machTaskContainer:(id)arg3;

@end

