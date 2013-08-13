/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface AuthScheme : NSObject
{
}

+ (id)authSchemesForAccount:(id)arg1 connection:(id)arg2;
+ (id)schemeWithName:(id)arg1;
+ (void)registerSchemeClass:(Class)arg1;
+ (id)knownSchemes;
+ (void)initialize;
- (id)humanReadableName;
- (id)name;
- (BOOL)requiresPassword;
- (id)authenticatorForAccount:(id)arg1 connection:(id)arg2;
- (BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (BOOL)hasEncryption;
- (unsigned int)defaultPortForAccount:(id)arg1;
- (Class)authenticatorClass;
- (Class)connectionClassForAccountClass:(Class)arg1;

@end

