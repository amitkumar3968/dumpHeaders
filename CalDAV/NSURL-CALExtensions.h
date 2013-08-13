/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSURL.h"

@interface NSURL (CALExtensions)
+ (id)iDiskSmallNameCompatibleNameForFilename:(id)arg1;
+ (id)davCompatibleFilenameForFilename:(id)arg1;
- (id)pathWithoutDecodingAndRemovingTrailingSlash;
- (id)pathWithoutTrailingRemovingSlash;
- (BOOL)isEqualToURL:(id)arg1;
- (id)serverURL;
- (id)unquotedPassword;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4;
- (id)lastPathComponent;
- (id)URLByRemovingLastPathComponent;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)queryParameters;
@end

