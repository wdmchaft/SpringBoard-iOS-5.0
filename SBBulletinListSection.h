/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDate, NSMutableArray, SBWeeApp;

@interface SBBulletinListSection : NSObject
{
    unsigned int _sectionType;
    SBWeeApp *_weeApp;
    NSMutableArray *_bulletins;
    NSArray *_sortDescriptors;
    NSDate *_lastSortDate;
}

- (BOOL)isWeeAppSection;
- (BOOL)isBulletinSection;
- (unsigned int)bulletinCount;
- (BOOL)hasClearableBulletins;
- (id)lastSortDate;
- (id)initWithSectionType:(unsigned int)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
- (unsigned int)_indexForNewBulletin:(id)arg1;
- (unsigned int)indexOfBulletinID:(id)arg1;
- (unsigned int)addBulletin:(id)arg1;
- (unsigned int)removeBulletin:(id)arg1;
- (id)bulletinAtIndex:(unsigned int)arg1;
@property(retain, nonatomic) SBWeeApp *weeApp; // @synthesize weeApp=_weeApp;

@end

