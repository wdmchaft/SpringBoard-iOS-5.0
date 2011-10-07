/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface SBAssistantGuideDomainModel : NSObject
{
    NSString *_name;
    NSString *_tagPhrase;
    NSString *_displayIdentifier;
    NSString *_bundleIdentifier;
    NSMutableArray *_requiredApps;
    NSMutableArray *_requiredCapabilities;
    NSString *_sectionFilename;
    NSMutableArray *_sections;
}

- (id)init;
- (void)dealloc;
@property(readonly, retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSString *sectionFilename; // @synthesize sectionFilename=_sectionFilename;
@property(retain, nonatomic) NSArray *requiredCapabilities; // @synthesize requiredCapabilities=_requiredCapabilities;
@property(retain, nonatomic) NSArray *requiredApps; // @synthesize requiredApps=_requiredApps;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *displayIdentifier; // @synthesize displayIdentifier=_displayIdentifier;
@property(retain, nonatomic) NSString *tagPhrase; // @synthesize tagPhrase=_tagPhrase;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@end
