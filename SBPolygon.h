/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@interface SBPolygon : NSObject
{
    int m_pointCount;
    struct CGPoint m_points[5];
    unsigned int m_pathIDs[5];
    float m_weights[5];
    struct CGPoint m_centroid;
    struct CGPoint m_weightedCentroid;
    unsigned int m_baseLeftVertex;
    unsigned int m_bottomRightVertex;
}

+ (BOOL)candidate:(id)arg1 matchesTemplate:(id)arg2 transforms:(int)arg3 acceptFactor:(float)arg4;
- (void)commonInit;
- (void)makeLike:(id)arg1;
- (void)clear;
- (void)beginPointUpdate;
- (void)addPoint:(struct CGPoint)arg1;
- (void)addPoint:(struct CGPoint)arg1 pathIndex:(unsigned int)arg2;
- (void)endPointUpdate;
- (float)weightAtIndex:(int)arg1;
@property(nonatomic) struct CGPoint centroid; // @synthesize centroid=m_centroid;
@property(nonatomic) struct CGPoint weightedCentroid; // @synthesize weightedCentroid=m_weightedCentroid;
- (float)width;
- (float)height;
@property(readonly, nonatomic) BOOL isLeftHanded;
- (unsigned int)thumbIndex;
- (void)rotate:(float)arg1;
- (void)scale:(float)arg1;
- (void)flipHorizontally;
- (void)sortAlongOutsideEdge;
- (float)findLongestOutsideEdge;
- (struct CGPoint)calculateCentroid;
- (struct CGPoint)calculateWeightedCentroid;
- (float)baseOrientation;
- (float)meanFingertipRowAngle;
- (float)meanRadius;
@property(readonly, nonatomic) int pointCount; // @synthesize pointCount=m_pointCount;

@end

