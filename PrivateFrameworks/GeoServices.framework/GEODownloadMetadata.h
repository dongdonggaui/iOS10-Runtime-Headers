/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEODownloadMetadata : PBCodable  {
    double _timestamp;
    NSString *_etag;
}

@property double timestamp;
@property(readonly) BOOL hasEtag;
@property(retain) NSString * etag;


- (id)etag;
- (BOOL)hasEtag;
- (void)setEtag:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end