/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface SBUtterancePhrase : NSObject
{
    NSMutableArray *_interpretations;
}

- (id)init;
- (id)initWithInterpretations:(id)arg1;
- (id)initWithString:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)bestInterpretation;
- (id)interpretations;

@end

