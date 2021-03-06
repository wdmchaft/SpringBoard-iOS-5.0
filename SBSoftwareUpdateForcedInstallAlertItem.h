/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBBaseSoftwareUpdateAlertItem.h"

@class NSTimer;

@interface SBSoftwareUpdateForcedInstallAlertItem : SBBaseSoftwareUpdateAlertItem
{
    NSTimer *_timer;
    unsigned int _timeLeftUntilInstall;
    BOOL _delayOnDismissForNonUserAction;
    BOOL _delayAfterNextUnlock;
}

- (id)initWithDescriptor:(id)arg1;
- (void)dealloc;
- (void)_installUpdate;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)updateBodyText;
- (void)willPresentAlertView:(id)arg1;
- (void)willDeactivateForReason:(int)arg1;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)_timerFired;
- (BOOL)undimsScreen;
- (BOOL)allowMenuButtonDismissal;
- (id)lockLabel;
- (id)shortLockLabel;
- (BOOL)shouldShowInLockScreen;
- (void)performUnlockAction;
- (BOOL)dismissOnLock;
@property(nonatomic) BOOL delayAfterNextUnlock; // @synthesize delayAfterNextUnlock=_delayAfterNextUnlock;
@property(nonatomic) BOOL delayOnDismissForNonUserAction; // @synthesize delayOnDismissForNonUserAction=_delayOnDismissForNonUserAction;

@end

