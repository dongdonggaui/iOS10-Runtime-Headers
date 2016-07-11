/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPAudioMetadata : NSObject <NSSecureCoding> {
    NSURL * _URL;
    NSString * _type;
    unsigned int  _version;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, readonly) unsigned int version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setType:(id)arg1;
- (void)setURL:(id)arg1;
- (id)type;
- (unsigned int)version;

@end