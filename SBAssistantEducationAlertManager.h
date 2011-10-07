/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSTimer, SBAssistantEducationAlertItem;

@interface SBAssistantEducationAlertManager : NSObject
{
    int _notifyToken;
    id _unlockHandler;
    NSTimer *_unlockTimer;
    BOOL _waitingOnUserDataSync;
    SBAssistantEducationAlertItem *_item;
}

+ (BOOL)isUserEducated;
+ (void)setUserHasBeenEducated;
+ (void)pleaseEducateTheUserWhenYouGetAChance;
- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (void)_showEducationAlertIfPossible;
- (void)_startUnlockTimer;
- (void)_clearUnlockTimer;
- (void)_unlockTimerFired:(id)arg1;
- (void)educationAlertWasDeactivated:(id)arg1;

@end

