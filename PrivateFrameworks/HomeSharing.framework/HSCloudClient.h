/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class HSConnectionConfiguration, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface HSCloudClient : NSObject <HSCloudAvailability> {
    BOOL _active;
    HSConnectionConfiguration *_configuration;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    unsigned long long _daemonConfiguration;
    NSMutableSet *_knownArtworkIDs;
    NSObject<OS_dispatch_queue> *_knownArtworkIDsQueue;
    NSMutableSet *_pendingArtworkRequests;
    NSObject<OS_dispatch_queue> *_pendingArtworkRequestsQueue;
    long long _preferredVideoQuality;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _updateInProgressChangedHandler;

}

@property(copy) id updateInProgressChangedHandler;


- (void)_serverUpdateInProgressDidChange;
- (void)_serverDidLaunch;
- (void)uploadItemProperties;
- (void)setDaemonConfiguration:(unsigned long long)arg1;
- (void)resetConfiguration:(id)arg1;
- (void)loadArtworkInfoForSagaIDs:(id)arg1 completionHandler:(id)arg2;
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(id)arg2;
- (void)downloadGeniusDataWithCompletionHandler:(id)arg1;
- (void)unhideAllPurchasedApps:(id)arg1;
- (void)setHidden:(BOOL)arg1 purchasedAppWithStoreID:(id)arg2 completionHandler:(id)arg3;
- (void)redownloadPurchaseAppWithStoreID:(id)arg1 completionHandler:(id)arg2;
- (void)jaliscoAppsImageDataForStoreID:(id)arg1 completionHandler:(id)arg2;
- (void)searchJaliscoAppsLibrary:(id)arg1 searchMethod:(long long)arg2 completionHandler:(id)arg3;
- (void)updateJaliscoAppsLibraryWithReason:(long long)arg1 completionHandler:(id)arg2;
- (void)updateJaliscoLibraryWithCompletionHandler:(id)arg1;
- (void)removeJaliscoLibrary;
- (void)loadIsUpdateInProgressWithCompletionHandler:(id)arg1;
- (id)updateInProgressChangedHandler;
- (void)loadArtworkDataForPurchaseHistoryIDs:(id)arg1 completionHandler:(id)arg2;
- (void)loadArtworkDataForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)loadArtworkDataForSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)isAuthenticatedWithQueue:(id)arg1 completionHandler:(id)arg2;
- (void)_performBlockOnMainThread:(id)arg1;
- (void)_sendConfigurationToDaemon;
- (void)updateArtistImagesWithCompletionHandler:(id)arg1;
- (void)updateJaliscoLibraryWithReason:(long long)arg1 completionHandler:(id)arg2;
- (void)isAuthenticatedWithCompletionHandler:(id)arg1;
- (void)updateSagaLibraryWithCompletionHandler:(id)arg1;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (BOOL)isCellularDataRestricted;
- (void)setPreferredVideoQuality:(long long)arg1;
- (void)setUpdateInProgressChangedHandler:(id)arg1;
- (void)updatePlaylistWithSagaID:(unsigned long long)arg1 itemSagaIDs:(id)arg2 queue:(id)arg3 completionHandler:(id)arg4;
- (void)removePlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)loadUpdateProgressWithCompletionHandler:(id)arg1;
- (void)incrementItemProperty:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)isExpiredWithCompletionHandler:(id)arg1;
- (void)deauthenticateWithCompletionHandler:(id)arg1;
- (void)becomeActive;
- (void)addGeniusPlaylistWithName:(id)arg1 seedItemSagaIDs:(id)arg2 itemSagaIDs:(id)arg3 completionHandler:(id)arg4;
- (void)addPlaylistWithName:(id)arg1 completionHandler:(id)arg2;
- (BOOL)canShowCloudDownloadButtons;
- (void)loadArtworkDataForPurchaseHistoryID:(unsigned long long)arg1;
- (void)loadArtworkDataForSagaID:(unsigned long long)arg1;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (BOOL)canShowCloudVideo;
- (BOOL)canShowCloudMusic;
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)resignActive;
- (void)authenticateWithCompletionHandler:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)init;
- (void)dealloc;

@end