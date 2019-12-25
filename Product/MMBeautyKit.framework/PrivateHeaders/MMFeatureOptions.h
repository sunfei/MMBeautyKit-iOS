//
//  MMFeatureOptions.h
//  CXBeautyKit
//
//  Created by sunfei on 2018/11/27.
//

#import <Foundation/Foundation.h>
#import "MMImageDetectorOptions.h"

@class MMFaceFeature;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT MMCVImageOrientation cvImageOrientationFromOrientation(UIDeviceOrientation deviceOrientation);

@interface MMDetectorOptions : NSObject <MMImageDetectorOptions>

@property (nonatomic) MMCVImageOrientation orientation;

@end

@interface MMFeatureOptions : MMDetectorOptions

@property (nonatomic, strong) MMFaceFeature *faceFeature;

@end

NS_ASSUME_NONNULL_END
