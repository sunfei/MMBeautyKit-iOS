//
//  MMBarenessDetectorContext.h
//  CXBeautyKit
//
//  Created by sunfei on 2018/11/27.
//

#import <Foundation/Foundation.h>
#import "MMImageDetectorProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface MMBarenessDetectorContext : NSObject <MMImageDetectorProtocol>

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype _Nullable)makeDetector;
+ (void)asyncAutoMakeDetector:(void(^)(MMBarenessDetectorContext * _Nullable))completed;

@property (nonatomic, readonly) NSNumber *result;

@end

NS_ASSUME_NONNULL_END
