//
//  MMRenderFilterModule.h
//  MMBeautyKit
//
//  Created by sunfei on 2019/12/13.
//

#import <Foundation/Foundation.h>
#import "MMRenderInputType.h"

NS_ASSUME_NONNULL_BEGIN

/// 滤镜描述信息
@interface MMRenderFilterModule : NSObject <NSCopying>

/// 滤镜id
@property (nonatomic, readonly) NSString *identifier;
/// 滤镜名称
@property (nonatomic, readonly) NSString *label;

@end

NS_ASSUME_NONNULL_END
