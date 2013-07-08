/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSString, NSData, NSDictionary, SDPMini, NSMutableDictionary;

@interface VCCallInfo : NSObject  {
    unsigned long callID;
    NSData *connectionData;
    NSData *relayConnectionData;
    NSString *participantID;
    NSDictionary *relayRequest;
    NSMutableDictionary *relayRequestResponse;
    NSDictionary *relayUpdate;
    unsigned long auNumber;
    unsigned long maxBandwidth;
    int cellTech;
    BOOL videoIsPaused;
    BOOL isVideoQualityDegraded;
    double lastGoodVideoQualityTime;
    double lastBadVideoQualityTime;
    double lastVideoQualityDegradedSwitchTime;
    NSString *sdpString;
    SDPMini *sdp;
    BOOL is4x;
    BOOL isIOS;
    BOOL usesInitialFECImplementation;
    BOOL supportsDynamicMaxBitrate;
    BOOL supportsSpecialAACBundle;
    BOOL supportsSKEOptimization;
    unsigned long visibleRectCropping;
    BOOL useNewPLCalc;
    double firstDegradedMeasure;
    double videoDegradedThreshold;
    unsigned char u8Version;
}

@property unsigned long callID;
@property(retain) NSData * connectionData;
@property(retain) NSData * relayConnectionData;
@property(retain) NSDictionary * relayRequest;
@property(retain) NSMutableDictionary * relayRequestResponse;
@property(retain) NSDictionary * relayUpdate;
@property unsigned long auNumber;
@property unsigned long maxBandwidth;
@property(copy) NSString * participantID;
@property int cellTech;
@property BOOL isVideoQualityDegraded;
@property BOOL videoIsPaused;
@property(retain) NSString * sdpString;
@property(retain) SDPMini * sdp;
@property(readonly) BOOL requiresImplicitFeatureString;
@property(readonly) BOOL isIOS;
@property(readonly) BOOL usesInitialFECImplementation;
@property BOOL supportsDynamicMaxBitrate;
@property BOOL supportsSKEOptimization;
@property(readonly) BOOL supportsSpecialAACBundle;
@property unsigned long visibleRectCropping;
@property(readonly) BOOL useNewPLCalc;
@property unsigned char u8Version;
@property(readonly) BOOL supportsDynamicContentsRectWithAspectPreservation;


- (void)setVisibleRectCropping:(unsigned long)arg1;
- (unsigned long)visibleRectCropping;
- (void)setIsVideoQualityDegraded:(BOOL)arg1;
- (int)cellTech;
- (void)setRelayRequest:(id)arg1;
- (id)relayRequest;
- (BOOL)supportsDynamicContentsRectWithAspectPreservation;
- (unsigned long)auNumber;
- (BOOL)requiresImplicitFeatureString;
- (BOOL)isIOS;
- (BOOL)useNewPLCalc;
- (BOOL)supportsSpecialAACBundle;
- (void)setAuNumber:(unsigned long)arg1;
- (void)setSupportsDynamicMaxBitrate:(BOOL)arg1;
- (id)sdpString;
- (void)setSdpString:(id)arg1;
- (void)setSdp:(id)arg1;
- (id)sdp;
- (void)setU8Version:(unsigned char)arg1;
- (BOOL)usesInitialFECImplementation;
- (void)setConnectionData:(id)arg1;
- (unsigned char)u8Version;
- (BOOL)supportsSKEOptimization;
- (id)relayConnectionData;
- (void)setRelayConnectionData:(id)arg1;
- (id)relayUpdate;
- (void)setRelayUpdate:(id)arg1;
- (void)setRelayRequestResponse:(id)arg1;
- (id)relayRequestResponse;
- (void)setVideoIsPaused:(BOOL)arg1;
- (struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; })audioVersionInfo:(BOOL)arg1;
- (id)connectionData;
- (BOOL)supportSDPCompression;
- (void)setCellTech:(int)arg1;
- (BOOL)supportsDynamicMaxBitrate;
- (BOOL)isVideoQualityDegraded;
- (BOOL)updateWithCurrentFramerate:(double)arg1 bitrate:(double)arg2 packetLossRate:(float)arg3 time:(double)arg4;
- (BOOL)videoIsPaused;
- (void)setSupportsSKEOptimization:(BOOL)arg1;
- (void)setParticipantID:(id)arg1;
- (id)participantID;
- (void)setMaxBandwidth:(unsigned long)arg1;
- (unsigned long)maxBandwidth;
- (void)setUserAgent:(id)arg1;
- (unsigned long)callID;
- (void)setCallID:(unsigned long)arg1;
- (id)init;
- (void)dealloc;

@end