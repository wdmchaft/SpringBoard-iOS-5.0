/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIImage.h"

@class NSString;

@interface SBIconBadgeImage : UIImage
{
    NSString *_text;
    int _checkoutCount;
}

- (id)initWithCGImage:(struct CGImage *)arg1 scale:(float)arg2 orientation:(int)arg3 text:(id)arg4;
- (void)dealloc;
@property int checkoutCount; // @synthesize checkoutCount=_checkoutCount;
@property(readonly, copy) NSString *text; // @synthesize text=_text;

@end

