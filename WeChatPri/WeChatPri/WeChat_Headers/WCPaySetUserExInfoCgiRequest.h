//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCPayProfession;

@interface WCPaySetUserExInfoCgiRequest : NSObject
{
    NSString *_country;
    NSString *_province;
    NSString *_city;
    WCPayProfession *_profession;
}

@property(retain, nonatomic) WCPayProfession *profession; // @synthesize profession=_profession;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
- (void).cxx_destruct;

@end

