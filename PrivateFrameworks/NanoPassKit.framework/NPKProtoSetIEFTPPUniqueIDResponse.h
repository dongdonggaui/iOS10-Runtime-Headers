/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoSetIEFTPPUniqueIDResponse : PBCodable <NSCopying> {
    NSString * _actualUniqueID;
    bool  _cancelled;
    struct { 
        unsigned int cancelled : 1; 
        unsigned int pending : 1; 
        unsigned int success : 1; 
    }  _has;
    bool  _pending;
    bool  _success;
}

@property (nonatomic, retain) NSString *actualUniqueID;
@property (nonatomic) bool cancelled;
@property (nonatomic, readonly) bool hasActualUniqueID;
@property (nonatomic) bool hasCancelled;
@property (nonatomic) bool hasPending;
@property (nonatomic) bool hasSuccess;
@property (nonatomic) bool pending;
@property (nonatomic) bool success;

- (void).cxx_destruct;
- (id)actualUniqueID;
- (bool)cancelled;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActualUniqueID;
- (bool)hasCancelled;
- (bool)hasPending;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (void)setActualUniqueID:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setHasCancelled:(bool)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setPending:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end