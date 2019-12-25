//
//  MMFacialExpressionDetectorContext.h
//  CXBeautyKit
//
//  Created by sunfei on 2018/11/27.
//

#import <Foundation/Foundation.h>
#import "MMImageDetectorProtocol.h"

@class MMFacialExpression;

NS_ASSUME_NONNULL_BEGIN

@interface MMFacialExpressionDetectorContext : NSObject <MMImageDetectorProtocol>

- (instancetype)init;

@property (nonatomic, readonly) NSArray<MMFacialExpression *> *result;

@end

NS_ASSUME_NONNULL_END
