/* Generated by RuntimeBrowser.
 */

@protocol FCContentContext <NSObject, FCCacheFlushing, FCCloudKitCacheClearing>

@required

- (FCAppConfiguration *)appConfiguration;
- (FCArticleController *)articleController;
- (FCAssetManager *)assetManager;
- (NSString *)contentDirectory;
- (NSString *)contentStoreFrontID;
- (FCFlintResourceManager *)flintResourceManager;
- (BOOL)hasBeenRateLimited;
- (<FCContentContextInternal> *)internalContentContext;
- (FCTagController *)tagController;

@end