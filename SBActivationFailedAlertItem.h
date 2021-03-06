/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBAlertItem.h"

#import "UIAlertViewDelegate-Protocol.h"

@interface SBActivationFailedAlertItem : SBAlertItem <UIAlertViewDelegate>
{
    BOOL _showRetryButton;
    BOOL _showSupportNumber;
}

- (id)initWithFailureCount:(int)arg1;
- (void)performUnlockAction;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (id)lockLabel;

@end

