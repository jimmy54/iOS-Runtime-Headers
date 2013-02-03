/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString;

@interface SAWeatherLocationAddCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * error;
@property(copy) NSString * refId;
@property(copy) NSURL * weatherLocationId;

+ (id)locationAddCompleted;
+ (id)locationAddCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationAddCompletedWithError:(id)arg1;
+ (id)locationAddCompletedWithWeatherLocationId:(id)arg1;

- (id)encodedClassName;
- (id)error;
- (id)groupIdentifier;
- (id)initWithError:(id)arg1;
- (id)initWithWeatherLocationId:(id)arg1;
- (void)setError:(id)arg1;
- (void)setWeatherLocationId:(id)arg1;
- (id)weatherLocationId;

@end