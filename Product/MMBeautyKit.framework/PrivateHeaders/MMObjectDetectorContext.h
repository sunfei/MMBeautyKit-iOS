//
//  MMObjectDetectorContext.h
//  CXBeautyKit
//
//  Created by sunfei on 2018/11/27.
//

#import <Foundation/Foundation.h>
#import "MMImageDetectorProtocol.h"

@class MMObjectDetectionResult;

NS_ASSUME_NONNULL_BEGIN

@interface MMObjectDetectorContext : NSObject <MMImageDetectorProtocol>

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype _Nullable)makeDetector;
+ (void)asyncAutoMakeDetector:(void(^)(MMObjectDetectorContext * _Nullable))completed;

@property (nonatomic, readonly) MMObjectDetectionResult *result;

@end

NS_ASSUME_NONNULL_END
