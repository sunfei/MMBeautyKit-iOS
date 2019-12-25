//
//  MMImageSegmenterContext.h
//  CXBeautyKit
//
//  Created by sunfei on 2018/11/27.
//

#import <Foundation/Foundation.h>
#import "MMImageDetectorProtocol.h"

@class MMImageSegmentationResult;

NS_ASSUME_NONNULL_BEGIN

@interface MMImageSegmenterContext : NSObject <MMImageDetectorProtocol>

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype _Nullable)makeDetector;
+ (void)asyncAutoMakeDetector:(void(^)(MMImageSegmenterContext * _Nullable))completed;

@property (nonatomic, readonly) MMImageSegmentationResult *result;

@end

NS_ASSUME_NONNULL_END
