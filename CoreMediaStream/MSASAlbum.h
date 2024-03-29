/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface MSASAlbum : NSObject <NSCopying>
{
    NSString *_ownerEmail;
    NSString *_ownerFullName;
    NSString *_ownerFirstName;
    NSString *_ownerLastName;
    NSString *_GUID;
    NSString *_ctag;
    int _relationshipState;
    NSString *_foreignCtag;
    NSString *_URLString;
    NSString *_publicURLString;
    NSDictionary *_metadata;
    id _context;
}

+ (id)albumWithAlbum:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)album;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *publicURLString; // @synthesize publicURLString=_publicURLString;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(retain, nonatomic) NSString *foreignCtag; // @synthesize foreignCtag=_foreignCtag;
@property(nonatomic) int relationshipState; // @synthesize relationshipState=_relationshipState;
@property(retain, nonatomic) NSString *ctag; // @synthesize ctag=_ctag;
@property(retain, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property(retain, nonatomic) NSString *ownerLastName; // @synthesize ownerLastName=_ownerLastName;
@property(retain, nonatomic) NSString *ownerFirstName; // @synthesize ownerFirstName=_ownerFirstName;
@property(retain, nonatomic) NSString *ownerFullName; // @synthesize ownerFullName=_ownerFullName;
@property(retain, nonatomic) NSString *ownerEmail; // @synthesize ownerEmail=_ownerEmail;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)metadataValueForKey:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) BOOL useForeignCtag;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)_ownerFullName;

@end

