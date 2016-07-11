/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSIdentityProviderRequest : NSObject {
    VSAccount * _account;
    VSAccountMetadataRequest * _accountMetadataRequest;
    VSAccountStore * _accountStore;
    NSString * _requestingAppDisplayName;
    long long  _type;
}

@property (nonatomic, retain) VSAccount *account;
@property (nonatomic, retain) VSAccountMetadataRequest *accountMetadataRequest;
@property (nonatomic, retain) VSAccountStore *accountStore;
@property (nonatomic, readonly) bool allowsUI;
@property (nonatomic, readonly) bool forceAuthentication;
@property (nonatomic, copy) NSString *requestingAppDisplayName;
@property (nonatomic, readonly) bool requiresUI;
@property (nonatomic) long long type;

+ (id)accountMetadataRequestWithAccount:(id)arg1 accountStore:(id)arg2 accountMetadataRequest:(id)arg3 requestingAppDisplayName:(id)arg4;
+ (id)deleteAccountRequestWithAccount:(id)arg1 accountStore:(id)arg2;
+ (id)editAccountRequestWithAccount:(id)arg1 accountStore:(id)arg2;
+ (id)makeAccountRequestWithAccountStore:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithRequestType:(long long)arg1 account:(id)arg2 accountStore:(id)arg3;
- (id)account;
- (id)accountMetadataRequest;
- (id)accountStore;
- (bool)allowsUI;
- (bool)forceAuthentication;
- (id)init;
- (id)requestingAppDisplayName;
- (bool)requiresUI;
- (void)setAccount:(id)arg1;
- (void)setAccountMetadataRequest:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (void)setRequestingAppDisplayName:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end