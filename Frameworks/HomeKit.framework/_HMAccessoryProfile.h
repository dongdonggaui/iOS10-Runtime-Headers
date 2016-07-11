/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMAccessoryProfile : NSObject <HMFMessageReceiver> {
    HMAccessory * _accessory;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDelegateCaller * _delegateCaller;
    HMHome * _home;
    HMFMessageDispatcher * _msgDispatcher;
    NSUUID * _profileUniqueIdentifier;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSArray * _services;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly, copy) NSUUID *profileUniqueIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) NSArray *services;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

- (void).cxx_destruct;
- (void)_registerNotificationHandlers;
- (id)accessory;
- (id)clientQueue;
- (id)delegateCaller;
- (id)description;
- (unsigned long long)hash;
- (id)home;
- (id)initUuid:(id)arg1 accessory:(id)arg2 services:(id)arg3 clientQueue:(id)arg4 delegateCaller:(id)arg5 msgDispatcher:(id)arg6 home:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)profileUniqueIdentifier;
- (id)propertyQueue;
- (id)services;
- (void)setClientQueue:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (id)uniqueIdentifier;

@end