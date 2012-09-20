/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSOperationQueue, AAAccount, MSSearch;

@interface AAAutoAccountVerifier : NSObject <MSSearchDelegate> {
    NSOperationQueue *_requesterQueue;
    MSSearch *_search;
    AAAccount *_account;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    int _attempts;
    BOOL _canceled;
}

@property(retain) AAAccount * account;


- (void)search:(id)arg1 didFinishWithError:(id)arg2;
- (BOOL)search:(id)arg1 didFindResults:(id)arg2;
- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (void)verifyWithHandler:(id)arg1;
- (void)sendVerificationEmail;
- (void)_validateToken:(id)arg1;
- (void)_verify;
- (void)setAccount:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)account;

@end