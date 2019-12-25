//
//  MMHandGestureDetectorContext.h
//  CXBeautyKit
//
//  Created by sunfei on 2018/11/27.
//

#import <Foundation/Foundation.h>
#import "MMImageDetectorProtocol.h"
@import MomoCV;

NS_ASSUME_NONNULL_BEGIN

@interface MMHandGestureOptions (MMOptions) <MMImageDetectorOptions>

@end

@interface MMHandGestureDetectorContext : NSObject <MMImageDetectorProtocol>

+ (instancetype _Nullable)makeDetector;
+ (void)asyncAutoMakeDetector:(void(^)(MMHandGestureDetectorContext * _Nullable))completed;

@property (nonatomic, readonly) MMHandFeature *result;

@end

NS_ASSUME_NONNULL_END
