/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Symbolication/VMULoadCommand.h>

@interface VMUSymTabLoadCommand : VMULoadCommand
{
    unsigned int _symoff;
    unsigned int _nsyms;
    unsigned int _stroff;
    unsigned int _strsize;
}

- (unsigned int)strsize;
- (unsigned int)stroff;
- (unsigned int)nsyms;
- (unsigned int)symoff;
- (BOOL)isSymTab;
- (id)initWithMemory:(id)arg1;

@end

