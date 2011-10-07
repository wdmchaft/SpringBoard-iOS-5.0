/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCache;

@interface SBGestureViewVendor : NSObject
{
    NSCache *m_cache;
}

+ (id)sharedInstance;
- (id)viewForApp:(id)arg1 gestureType:(int)arg2 includeStatusBar:(BOOL)arg3;
- (void)clearCacheForApp:(id)arg1 reason:(id)arg2;
- (void)clearCacheForReason:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)maskViewIfNeeded:(id)arg1 gestureType:(int)arg2 viewType:(int)arg3 contextHostViewRequester:(id)arg4 app:(id)arg5;

@end
