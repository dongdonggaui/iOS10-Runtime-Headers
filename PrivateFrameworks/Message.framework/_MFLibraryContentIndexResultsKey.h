/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSIndexSet, MFMessageCriterion;

@interface _MFLibraryContentIndexResultsKey : NSObject  {
    MFMessageCriterion *_criterion;
    NSIndexSet *_mailboxIDs;
}

@property(retain) MFMessageCriterion * criterion;
@property(copy) NSIndexSet * mailboxIDs;


- (id)mailboxIDs;
- (void)setMailboxIDs:(id)arg1;
- (void)setCriterion:(id)arg1;
- (id)criterion;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;

@end