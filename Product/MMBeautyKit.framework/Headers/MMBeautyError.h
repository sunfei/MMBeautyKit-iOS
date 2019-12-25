//
//  MMError.h
//  CXBeautyKit
//
//  Created by sunfei on 2019/12/13.
//

#import <Foundation/Foundation.h>

extern NSErrorDomain const MMBeautyErrorDomain;

typedef NS_ERROR_ENUM(MMBeautyErrorDomain, MMRenderError) {
    // 未知错误
    MMRenderErrorUnknown = 100,
    
    // 模型加载失败
    MMRenderErrorDetectorLoaded = -1001,
    
    // 权限受限
    MMRenderAuthorizationStatusRestricted = -1002,
    
    // 接口数据解密失败
    MMRenderNetworkDecryptFailed = -1003,

    // 渲染失败
    MMRenderErrorRenderError = -1005,
    
    // 网络错误
    MMRenderErrorNetwork = -1006,
};
