/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SBDeviceLockViewOwner <NSObject>

@optional
- (void)setShowingDeviceLock:(BOOL)arg1;
- (void)setShowingDeviceLock:(BOOL)arg1 animated:(BOOL)arg2;
- (void)deviceUnlockSucceeded;
- (void)deviceUnlockFailed;
- (BOOL)isDisplayingErrorStatus;
- (BOOL)shouldUseTransparentStatusBar;
- (void)animateToEmergencyCall;
@end

