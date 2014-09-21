// TwitterHelper.h
//
// Copyright (c) 2013/2014 Kyle Begeman (www.kylebegeman.com)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>
#import <Accounts/ACAccountStore.h>
#import <Accounts/ACAccount.h>

FOUNDATION_EXTERN const NSString *TRATwitterReverseAuthCredentialOAuthToken;
FOUNDATION_EXTERN const NSString *TRATwitterReverseAuthCredentialOAuthTokenSecret;
FOUNDATION_EXTERN const NSString *TRATwitterReverseAuthCredentialUserID;
FOUNDATION_EXTERN const NSString *TRATwitterReverseAuthCredentialScreenName;


@class TRATwitterReverseAuth;

@protocol TRATwitterReverseAuthDelegate<NSObject>

- (NSString *)APIKeyForTwitterReverseAuth:(TRATwitterReverseAuth *)reverseAuth;
- (NSString *)APISecretForTwitterReverseAuth:(TRATwitterReverseAuth *)reverseAuth;

@optional

- (ACAccountStore *)accountStoreForTwitterReverseAuth:(TRATwitterReverseAuth *)reverseAuth;

@end


@interface TRATwitterReverseAuth : NSObject

@property(nonatomic,weak) id<TRATwitterReverseAuthDelegate> delegate;
@property(nonatomic,readonly) NSDictionary *credentials;

- (instancetype)initWithDelegate:(id<TRATwitterReverseAuthDelegate>)delegate;
- (void)requestCredentialsForAccount:(ACAccount *)account completion:(void(^)(NSDictionary *credentials, NSError *error))completion;

@end
