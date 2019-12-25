//
//  MMRenderModuleManager.h
//  MMBeautyKit
//
//  Created by sunfei on 2019/12/13.
//

#import <Foundation/Foundation.h>
#import <CoreVideo/CoreVideo.h>
#import <AVFoundation/AVFoundation.h>
#import "MMRenderFilterModule.h"
#import "MMRenderInputType.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, MMRenderModuleCameraRotate) {
    MMRenderModuleCameraRotate0,        //  home 键在右侧
    MMRenderModuleCameraRotate90,       //  home 键在下方
    MMRenderModuleCameraRotate180,      //  home 键在左侧
    MMRenderModuleCameraRotate270,      //  home 键在上方
};

/// 渲染
@interface MMRenderModuleManager : NSObject

// 如果是相机，需要传入前置/后置位置, 该参数仅在相机模式下设置
@property (nonatomic, assign) AVCaptureDevicePosition devicePosition;

// 目前摄像头相对于人脸的旋转角度, 该参数仅在相机模式下设置
@property (nonatomic, assign) MMRenderModuleCameraRotate cameraRotate;

// 图像数据形式, 默认MMRenderInputTypeStream。 相机或视频MMRenderInputTypeStream，静态图片MMRenderInputTypeStatic
@property (nonatomic, assign) MMRenderInputType inputType;

/// 渲染函数
/// @param pixelBuffer 输入图像
/// @param error 错误信息
/// @return 渲染后图像
- (CVPixelBufferRef _Nullable)renderPixelBuffer:(CVPixelBufferRef)pixelBuffer
                                          error:(NSError * __autoreleasing _Nullable *)error;

/// 该函数暂不可用。异步渲染函数
/// @param pixelBuffer 输入图像
/// @param completion 回调方法，返回渲染后图像或者错误信息
- (void)asyncRenderPixelBuffer:(CVPixelBufferRef)pixelBuffer
                    completion:(void(^)(CVPixelBufferRef, NSError *))completion;


/// 注册滤镜
/// @param filterModule 滤镜模块信息
- (void)registerFilterModule:(MMRenderFilterModule *)filterModule;
/// 移除滤镜
/// @param filterModule 滤镜模块信息
- (void)unRegisterFilterModule:(MMRenderFilterModule *)filterModule;

@end

NS_ASSUME_NONNULL_END
