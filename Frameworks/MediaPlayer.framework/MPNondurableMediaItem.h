/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNondurableMediaItem : MPMediaItem  {
    unsigned long long _persistentID;
}

+ (id)defaultPropertyValues;
+ (BOOL)canFilterByProperty:(id)arg1;

- (BOOL)existsInLibrary;
- (BOOL)isUsableAsRepresentativeItem;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(id)arg1;
- (BOOL)incrementPlayCountForStopTime:(double)arg1;
- (void)incrementPlayCountForPlayingToEnd;
- (void)incrementSkipCount;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(BOOL)arg2;
- (void)markNominalAmountHasBeenPlayed;
- (BOOL)didSkipWithPlayedToTime:(double)arg1;
- (id)valuesForProperties:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id)arg2;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (unsigned long long)persistentID;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end