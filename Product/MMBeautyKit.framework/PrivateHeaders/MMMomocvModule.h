//
//  MMMomocvModule.h
//  MMVideoSDK
//
//  Created by 符吉胜 on 2019/10/25.
//

#import <Foundation/Foundation.h>
#import "MMFaceDetectorModuleProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface MMMomocvModule : NSObject<MMFaceDetectorModuleProtocol>

@property (nonatomic, weak) id<MMFaceDetectorModuleDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
