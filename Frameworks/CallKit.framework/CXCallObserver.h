/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallObserver : NSObject <CXCallControllerVendorProtocol> {
    NSMutableDictionary * _callUUIDToCallMap;
    NSXPCConnection * _connection;
    <CXCallObserverDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) NSMutableDictionary *callUUIDToCallMap;
@property (nonatomic, readonly, copy) NSArray *calls;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXCallObserverDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int notifyToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) <CXCallControllerHostProtocol> *remoteObjectProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addOrUpdateCall:(id)arg1;
- (void)_markAllCallsAsEnded;
- (void)_performDelegateCallback:(id /* block */)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1 isSynchronous:(bool)arg2;
- (void)_removeCall:(id)arg1;
- (void)_requestCalls;
- (oneway void)addOrUpdateCall:(id)arg1;
- (id)callUUIDToCallMap;
- (id)calls;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)init;
- (int)notifyToken;
- (void)performDelegateCallback:(id /* block */)arg1;
- (id)queue;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (oneway void)removeCall:(id)arg1;
- (void)setCallUUIDToCallMap:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setNotifyToken:(int)arg1;
- (void)setQueue:(id)arg1;

@end