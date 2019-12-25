//
//  MMFaceRigV3DetectorContext.h
//  CXBeautyKit
//
//  Created by sunfei on 2018/11/27.
//

#import <Foundation/Foundation.h>
#import "MMImageDetectorProtocol.h"

@class MMFaceRigFeature;

NS_ASSUME_NONNULL_BEGIN

@interface MMFaceRigV3DetectorContext : NSObject <MMImageDetectorProtocol>

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype _Nullable)makeDetector;
+ (void)asyncAutoMakeDetector:(void(^)(MMFaceRigV3DetectorContext * _Nullable))completed;

@property (nonatomic, readonly) MMFaceFeature *result;

@end

NS_ASSUME_NONNULL_END
