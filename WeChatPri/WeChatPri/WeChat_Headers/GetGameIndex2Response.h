//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class AppStoreControl, BaseResponse, DownloadGuidance, FeedBackEntrance, GameIndexMyGame, GameIndexNav, GameManagement, GetGameIndex2Response_BestSellingGameListModule, GetGameIndex2Response_LibraryEntranceInfo, GetGameIndex2Response_Recommendation, GetGameIndex2Response_TypeNavModule, IndexTheme, Installed, NSString;

@interface GetGameIndex2Response : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AppStoreControl *appStoreControl; // @dynamic appStoreControl;
@property(retain, nonatomic) NSString *appStoreGoodsId; // @dynamic appStoreGoodsId;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) GetGameIndex2Response_BestSellingGameListModule *bestSellingGameList; // @dynamic bestSellingGameList;
@property(retain, nonatomic) FeedBackEntrance *feedBackEntrance; // @dynamic feedBackEntrance;
@property(nonatomic) unsigned int gameDetailJumpType; // @dynamic gameDetailJumpType;
@property(retain, nonatomic) NSString *gameDetailUrl; // @dynamic gameDetailUrl;
@property(retain, nonatomic) GameManagement *gameManagement; // @dynamic gameManagement;
@property(retain, nonatomic) GetGameIndex2Response_Recommendation *gameRecommendation; // @dynamic gameRecommendation;
@property(retain, nonatomic) DownloadGuidance *googlePlayTips; // @dynamic googlePlayTips;
@property(retain, nonatomic) Installed *installed; // @dynamic installed;
@property(nonatomic) _Bool isForeigner; // @dynamic isForeigner;
@property(retain, nonatomic) GetGameIndex2Response_LibraryEntranceInfo *libraryEntrance; // @dynamic libraryEntrance;
@property(retain, nonatomic) GameIndexMyGame *myGame; // @dynamic myGame;
@property(retain, nonatomic) GameIndexNav *nav; // @dynamic nav;
@property(retain, nonatomic) IndexTheme *theme; // @dynamic theme;
@property(retain, nonatomic) GetGameIndex2Response_TypeNavModule *typeNav; // @dynamic typeNav;

@end

