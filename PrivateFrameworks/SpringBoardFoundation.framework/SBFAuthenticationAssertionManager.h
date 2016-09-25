/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFAuthenticationAssertionManager : NSObject <BSDescriptionProviding> {
    SBFAuthenticationAssertionTracker * _preventLockTracker;
    SBFAuthenticationAssertionTracker * _transientTracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAssertion:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (BOOL)hasActiveAssertions;
- (id)init;
- (BOOL)isAssertionValid:(id)arg1;
- (void)removeAssertion:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end