/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitPrice : PBCodable <NSCopying> {
    int  _amountInCents;
    NSString * _currencyCode;
    struct { 
        unsigned int amountInCents : 1; 
        unsigned int subunit : 1; 
    }  _has;
    unsigned int  _subunit;
}

@property (nonatomic) int amountInCents;
@property (nonatomic, retain) NSString *currencyCode;
@property (nonatomic) BOOL hasAmountInCents;
@property (nonatomic, readonly) BOOL hasCurrencyCode;
@property (nonatomic) BOOL hasSubunit;
@property (nonatomic) unsigned int subunit;

- (int)amountInCents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAmountInCents;
- (BOOL)hasCurrencyCode;
- (BOOL)hasSubunit;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAmountInCents:(int)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setHasAmountInCents:(BOOL)arg1;
- (void)setHasSubunit:(BOOL)arg1;
- (void)setSubunit:(unsigned int)arg1;
- (unsigned int)subunit;
- (void)writeTo:(id)arg1;

@end