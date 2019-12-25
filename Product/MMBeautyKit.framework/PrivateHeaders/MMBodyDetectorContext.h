//
//  MMBodyDetectorContext.h
//  CXBeautyKit
//
//  Created by sunfei on 2018/11/27.
//

#import <Foundation/Foundation.h>
#import "MMImageDetectorProtocol.h"
@import MomoCV;

NS_ASSUME_NONNULL_BEGIN

@interface MMBodyDetectionOptions (MDOptions) <MMImageDetectorOptions>

@end

@interface MMBodyDetectorContext : NSObject <MMImageDetectorProtocol>

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype _Nullable)makeDetector;
+ (void)asyncAutoMakeDetector:(void(^)(MMBodyDetectorContext * _Nullable))completed;

@property (nonatomic, readonly) NSArray<MMBodyFeature *> *result;

@end

NS_ASSUME_NONNULL_END
