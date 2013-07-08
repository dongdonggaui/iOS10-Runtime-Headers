/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL;

@interface SADomainObject : AceObject <SAAceIdentifiable> {
}

@property(copy) NSURL * identifier;

+ (id)domainObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObject;

- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)groupIdentifier;

@end