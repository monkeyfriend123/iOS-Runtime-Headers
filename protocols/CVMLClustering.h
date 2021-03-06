/* Generated by RuntimeBrowser.
 */

@protocol CVMLClustering

@required

- (BOOL)addDescriptorIds:(NSArray *)arg1 withSimilarityMatrix:(CVMLSimilarityMatrix *)arg2 error:(id*)arg3;
- (NSArray *)getClustersWithOptions:(NSDictionary *)arg1 error:(id*)arg2;
- (NSArray *)suggestionsForClusterIds:(NSArray *)arg1 affinityThreshold:(float)arg2 error:(id*)arg3;

@optional

- (BOOL)cancelClustering:(id*)arg1;
- (NSData *)getClusterState:(id*)arg1;
- (NSSet *)getClusteredIds;
- (NSArray *)getClustersForClusterIds:(NSArray *)arg1 options:(NSDictionary *)arg2 error:(id*)arg3;
- (NSDictionary *)getDistances:(NSArray *)arg1 to:(NSArray *)arg2;
- (NSDictionary *)getRepresentativenessForFaces:(NSArray *)arg1 error:(id*)arg2;
- (NSArray *)refinedSuggestionsForClusterIds:(NSArray *)arg1 fromClusters:(NSArray *)arg2 affinityThreshold:(float)arg3 error:(id*)arg4;

@end
