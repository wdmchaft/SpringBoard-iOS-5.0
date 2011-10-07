/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@interface SBProximityDetectionClient : NSObject
{
    int _pid;
    unsigned int _port;
    int _requestedMode;
    struct dispatch_source_s *_source;
    id <SBProximityDetectionClientDelegate> _delegate;
}

- (id)init;
- (id)initWithPID:(int)arg1 port:(unsigned int)arg2 delegate:(id)arg3;
- (void)dealloc;
- (id)description;
- (BOOL)isValid;
@property(nonatomic) unsigned int port; // @synthesize port=_port;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property int requestedMode; // @synthesize requestedMode=_requestedMode;
@property(getter=PID, setter=setPID:) int pid; // @synthesize pid=_pid;

@end

