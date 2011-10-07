/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBApplication.h"

@interface SBNewsstandApplication : SBApplication
{
    BOOL _isMagazineApp;
    BOOL _iconIsBoundOnRight;
    unsigned char _newsstandWakes;
    unsigned int _lastPostedState;
}

- (id)initWithBundleIdentifier:(id)arg1 webClip:(id)arg2 path:(id)arg3 bundle:(id)arg4 infoDictionary:(id)arg5 isSystemApplication:(BOOL)arg6 signerIdentity:(id)arg7 provisioningProfileValidated:(BOOL)arg8;
- (BOOL)isNewsstandApplication;
- (Class)iconClass;
- (void)activate;
- (void)_sendApplicationStateChangedNotification:(unsigned int)arg1;
- (void)process:(id)arg1 didAddAssertion:(id)arg2;
- (void)resumeForContentAvailable;
- (BOOL)isFakeApp;
- (BOOL)hasReachedWakeQuota;
@property(readonly, nonatomic) BOOL iconIsBoundOnRight; // @synthesize iconIsBoundOnRight=_iconIsBoundOnRight;
@property(readonly, nonatomic) BOOL isMagazineApp; // @synthesize isMagazineApp=_isMagazineApp;

@end

