//
//  CosmosBeautySDK.h
//  CXBeautyKit
//
//  Created by sunfei on 2019/12/12.
//

#import <Foundation/Foundation.h>

@class CosmosBeautySDK;

NS_ASSUME_NONNULL_BEGIN

typedef NS_OPTIONS(NSUInteger, MMBeautyKitAuthrizationStatus) {
    MMBeautyKitAuthrizationStatusBeauty = 1 << 0,
    MMBeautyKitAuthrizationStatusAdvancedBeauty = 1 << 1,
};

@protocol CosmosBeautySDKDelegate <NSObject>

@optional

/// 返回模型配置文件拉取是否成功的信息
/// @param context SDK环境
/// @param result YES 成功, NO 失败
/// @param error 失败原因
- (void)context:(CosmosBeautySDK *)context result:(BOOL)result detectorConfigFailedToLoad:(NSError * _Nullable)error;

/// 返回鉴权是否成功，成功后返回相关权限，否则返回错误信息
/// @param context SDK环境
/// @param status 返回鉴权信息
/// @param error 错误原因
- (void)context:(CosmosBeautySDK *)context
    authorizationStatus:(MMBeautyKitAuthrizationStatus)status
    requestFailedToAuthorization:(NSError * _Nullable)error;

@end

@interface CosmosBeautySDK : NSObject

- (instancetype)init NS_UNAVAILABLE;

/// 初始化BeautyKit环境
/// @param appId 接入方申请的appId, 用于鉴权以及拉取配置信息
+ (void)initSDKWithAppId:(NSString *)appId;

/// 初始化BeautyKit环境
/// @param appId 接入方申请的appId, 用于鉴权以及拉取配置信息
/// @param delegate 设置代理
+ (void)initSDKWithAppId:(NSString *)appId delegate:(id<CosmosBeautySDKDelegate> _Nullable)delegate;

/// 返回接入方设置的appId
+ (NSString * _Nullable)appId;

/// 返回SDK版本号
+ (NSString *)version;
/// 返回内部构件版本号
+ (NSString *)buildVersion;

/// 设置用户id，可选。这里将用户id设置给sdk，可有助于针对某些用户出现的问题进行定位。推荐接入方进行设置。
/// @param userId 用户id
+ (void)setUserId:(NSString *)userId;
/// 返回用户id
+ (NSString * _Nullable)userId;

/// 设置用户app版本号，可选。可针对某些用户版本出现问题后进行定位，推荐接入方设置。
/// @param userVersion 用户版本
+ (void)setUserVersion:(NSString *)userVersion;
/// 返回app version
/// @return app version
+ (NSString * _Nullable)userVersion;

/// 设置用户build version, 可选。可针对某些用户版本出现问题后进行定位，推荐接入方设置。
/// @param buildVersion 接入方app build version
+ (void)setUserBuildVersion:(NSString *)buildVersion;
/// 返回user build version
/// @return user build version
+ (NSString * _Nullable)userBuildVersion;

/// 当人脸模型拉取失败后接入方可以通过该方法重新发起请求
+ (void)prepareBeautyResource;

@end

@interface CosmosBeautySDK (Authorization)

/// 鉴权信息
+ (MMBeautyKitAuthrizationStatus)authorizationStatus;

/// 如果鉴权失败，接入方可以通过改请求重新发起鉴权
+ (void)requestAuthorization;

@end

NS_ASSUME_NONNULL_END
