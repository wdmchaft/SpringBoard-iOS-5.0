/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class CADisplayLink, NSArray, UIView;

@interface SBAnimationStepper : NSObject
{
    id m_delegate;
    UIView *m_view;
    NSArray *m_animatingSubviews;
    double m_duration;
    float m_percentage;
    CADisplayLink *m_displayLink;
    double m_finishBackwardTimestamp;
    double m_finishBackwardDuration;
    float m_finishBackwardPercentage;
}

- (id)init;
- (void)dealloc;
- (void)stepAnimationsInView:(id)arg1 animatingSubviews:(id)arg2 duration:(double)arg3;
@property(nonatomic) float percentage; // @synthesize percentage=m_percentage;
- (void)finishForwardToEnd;
- (void)finishBackwardToStart;
- (void)updateFinishBackwardToStart:(id)arg1;
@property(nonatomic) double duration; // @synthesize duration=m_duration;
@property(copy, nonatomic) NSArray *animatingSubviews; // @synthesize animatingSubviews=m_animatingSubviews;
@property(retain, nonatomic) UIView *view; // @synthesize view=m_view;
@property(nonatomic) id delegate; // @synthesize delegate=m_delegate;

@end

