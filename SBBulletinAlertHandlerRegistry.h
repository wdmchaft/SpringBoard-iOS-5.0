/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBBulletinAlertHandlerRegistry-Protocol.h"

@class NSMutableDictionary;

@interface SBBulletinAlertHandlerRegistry : NSObject <SBBulletinAlertHandlerRegistry>
{
    NSMutableDictionary *_handlersBySectionID;
}

- (id)init;
- (void)dealloc;
- (id)alertHandlersForSection:(id)arg1;
- (void)addAlertHandler:(id)arg1 forSection:(id)arg2;

@end

