//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@interface QBarCodeView : MMUIView
{
    int _width;
    int _height;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _data;
    _Bool _bTwoDimensional;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)displayQBarCode:(struct QBAR_IMAGE)arg1 TwoDimensional:(_Bool)arg2;

@end
