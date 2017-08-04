//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UILabel, UITextField;
@protocol MailReceiverEditViewDelegate;

@interface MailSubjectEditView : MMUIView <UITextFieldDelegate>
{
    id <MailReceiverEditViewDelegate> m_delegate;
    UITextField *m_textField;
    UILabel *m_textLabel;
}

@property(nonatomic) __weak id <MailReceiverEditViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onTextFieldChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)init;
- (void)layoutSubviews;
- (void)initView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
