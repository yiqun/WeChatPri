//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class NSArray, UILabel;

@interface GameCenterFriendPlayInfoCell : MMTableViewCell
{
    UILabel *_scrollingLabel1;
    UILabel *_scrollingLabel2;
    int _curShowingIndex;
    NSArray *_friendPlayList;
    double _cellHeight;
}

+ (double)heightForFriendPlayInfoCell:(id)arg1;
@property(retain, nonatomic) NSArray *friendPlayList; // @synthesize friendPlayList=_friendPlayList;
- (void).cxx_destruct;
- (void)changeScrollingLabel;
- (void)startAnimation;
- (void)layoutContent;
- (void)initializeSubview;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

