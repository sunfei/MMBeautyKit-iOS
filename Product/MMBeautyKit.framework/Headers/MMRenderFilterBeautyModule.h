//
//  MMRenderFilterBeautyModule.h
//  MMBeautyKit
//
//  Created by sunfei on 2019/12/13.
//

#import <Foundation/Foundation.h>
#import "MMRenderFilterModule.h"

NS_ASSUME_NONNULL_BEGIN

typedef NSString *MMBeautyFilterKey NS_STRING_ENUM;

extern MMBeautyFilterKey const kBeautyFilterKeyRubby;       // 红润 0.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyWhitening;   // 美白 0.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeySmooth;      // 磨皮 0.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyBigEye;      // 大眼 0.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyThinFace;    // 瘦脸 0.0 - 1.0

/// 美颜滤镜描述信息
@interface MMRenderFilterBeautyModule : MMRenderFilterModule

/// 设置美颜滤镜参数
/// @param value 美颜参数值, 范围参见上面美颜相关key解释
/// @param key 美颜相关key
- (void)setBeautyFactor:(float)value forKey:(MMBeautyFilterKey)key;

@end

NS_ASSUME_NONNULL_END
