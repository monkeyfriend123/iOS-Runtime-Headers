/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class CLLocation, NSError;

@interface MKTripPoint : NSObject {
    NSInteger _commandType;
    NSError *_error;
    CLLocation *_location;
    NSInteger _locationSource;
    NSInteger _pointType;
}

@property NSInteger locationSource; /* unknown property attribute: V_locationSource */
@property NSInteger commandType; /* unknown property attribute: V_commandType */
@property NSInteger pointType; /* unknown property attribute: V_pointType */
@property(retain) NSError *error; /* unknown property attribute: V_error */
@property(retain) CLLocation *location; /* unknown property attribute: V_location */

+ (id)tripPoint;

- (NSInteger)commandType;
- (void)dealloc;
- (id)error;
- (id)location;
- (NSInteger)locationSource;
- (NSInteger)pointType;
- (void)setCommandType:(NSInteger)arg1;
- (void)setError:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationSource:(NSInteger)arg1;
- (void)setPointType:(NSInteger)arg1;

@end