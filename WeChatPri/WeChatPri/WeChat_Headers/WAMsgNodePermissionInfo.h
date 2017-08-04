//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSData, NSString, WAMsgNodePermissionLaunchAction;

@interface WAMsgNodePermissionInfo : NSObject <PBCoding>
{
    unsigned int localBannedEndTime;
    NSString *appId;
    NSData *permissionBytes;
    WAMsgNodePermissionLaunchAction *launchAction;
}

+ (void)initialize;
@property(nonatomic) unsigned int localBannedEndTime; // @synthesize localBannedEndTime;
@property(retain, nonatomic) WAMsgNodePermissionLaunchAction *launchAction; // @synthesize launchAction;
@property(retain, nonatomic) NSData *permissionBytes; // @synthesize permissionBytes;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)setBannedUntil:(unsigned int)arg1;
- (_Bool)isLocalBanned;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
