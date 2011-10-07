/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class UIView, UIWindow;

@interface SBScreenFlash : NSObject
{
    UIWindow *_flashWindow;
    UIView *_flashView;
    BOOL _windowVisible;
}

+ (id)sharedInstance;
- (void)dealloc;
- (void)_createUIWithColor:(id)arg1;
- (void)_tearDown;
- (void)_orderWindowOut:(id)arg1;
- (void)_orderWindowFront:(id)arg1 withColor:(id)arg2;
- (void)stopFlash;
- (void)flash;
- (void)flashColor:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;

@end

