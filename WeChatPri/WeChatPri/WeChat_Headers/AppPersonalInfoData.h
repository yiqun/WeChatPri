//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AppPersonalInfoData : NSObject
{
    NSString *rank;
    _Bool shouldBold;
    unsigned int rankWeight;
}

@property(nonatomic) unsigned int rankWeight; // @synthesize rankWeight;
@property(nonatomic) _Bool shouldBold; // @synthesize shouldBold;
@property(retain, nonatomic) NSString *rank; // @synthesize rank;
- (void).cxx_destruct;
- (id)init;

@end
