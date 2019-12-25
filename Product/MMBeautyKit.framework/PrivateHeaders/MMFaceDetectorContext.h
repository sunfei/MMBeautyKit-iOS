//
//  MMFaceDetectorContext.h
//  CXBeautyKit
//
//  Created by sunfei on 2018/11/27.
//

#import <Foundation/Foundation.h>
#import "MMImageDetectorProtocol.h"
@import MomoCV;

NS_ASSUME_NONNULL_BEGIN

@interface MMFaceDetectOptions (MMOptions) <MMImageDetectorOptions>

@end

@interface MMFaceDetectorContext : NSObject <MMImageDetectorProtocol>

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype _Nullable)makeDetector;
+ (void)asyncAutoMakeDetector:(void(^)(MMFaceDetectorContext * _Nullable))completed;

@property (nonatomic, readonly) NSArray<MMFaceFeature *> *result;
@property (nonatomic, readonly) NSArray<NSNumber *> *skinColorThreshold;

@property (nonatomic, assign) BOOL advancedStabilizationModeEnabled;

@end

NS_ASSUME_NONNULL_END
