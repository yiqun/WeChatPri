//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSString;

@interface WCInnerJumpMgr : MMService <MMService>
{
}

- (void)onServiceInit;
- (void)gotoWebViewController:(id)arg1;
- (void)handleLocalPushWithUsrInfo:(id)arg1;
- (void)handleApnsNotificationPushWithUsrInfo:(id)arg1;
- (void)handleBackgroundAPNSPushWithUsrInfo:(id)arg1;
- (void)handleInactiveAPNSPushWithUsrInfo:(id)arg1;
- (void)pushLocalNotification:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
