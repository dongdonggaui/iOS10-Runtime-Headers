/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSString, NSDictionary, NSOperationQueue, NSURL, NSURLConnection, NSURLRequest;

@interface NSURLConnectionInternal : NSObject <NSURLConnectionRequired, NSURLAuthenticationChallengeSender> {
    NSURLConnection *_connection;
    NSOperationQueue *_delegateQueue;
    NSURL *_url;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    id _delegate;
    NSDictionary *_connectionProperties;
    bool_connectionActive;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)_withConnectionAndDelegate:(id)arg1 onlyActive:(bool)arg2;
- (void)invokeForDelegate:(id)arg1;
- (bool)isConnectionActive;
- (void)_withActiveConnectionAndDelegate:(id)arg1;
- (void)setConnectionActive:(bool)arg1;
- (void)_invalidate;
- (void)_withConnectionDisconnectFromConnection;
- (void)_withConnectionAndDelegate:(id)arg1;
- (id)_connectionProperties;
- (void)_setDelegateQueue:(id)arg1;
- (id)_timingData;
- (id)initWithInfo:(const struct InternalInit { id x1; id x2; id x3; id x4; boolx5; long long x6; }*)arg1;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (id)originalRequest;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (id)currentRequest;
- (void)dealloc;

@end