//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WNNoteFavItemBase.h"

@class NSString;

@interface WNNoteVoiceItem : WNNoteFavItemBase
{
    _Bool _downloaded;
    unsigned int _fmt;
    int _curLength;
    float _curPeakPower;
    int _length;
    unsigned long long _curVoiceState;
    NSString *_localPath;
    NSString *_lengthStr;
    NSString *_placeHolder;
    NSString *_iconPath;
}

@property(retain, nonatomic) NSString *iconPath; // @synthesize iconPath=_iconPath;
@property(retain, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(retain, nonatomic) NSString *lengthStr; // @synthesize lengthStr=_lengthStr;
@property(nonatomic) int length; // @synthesize length=_length;
@property(nonatomic) float curPeakPower; // @synthesize curPeakPower=_curPeakPower;
@property(nonatomic) int curLength; // @synthesize curLength=_curLength;
@property(nonatomic) _Bool downloaded; // @synthesize downloaded=_downloaded;
@property(nonatomic) unsigned int fmt; // @synthesize fmt=_fmt;
@property(retain, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(nonatomic) unsigned long long curVoiceState; // @synthesize curVoiceState=_curVoiceState;
- (void).cxx_destruct;
- (id)init;

@end

