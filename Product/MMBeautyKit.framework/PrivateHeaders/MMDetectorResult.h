//
//  MMDetectorResult.h
//  RecordSDK
//
//  Created by sunfei on 2018/12/24.
//  Copyright © 2018 sunfei. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MMDetectorResult<ObjectType> : NSObject

@property (nonatomic, strong) ObjectType _Nullable value;
@property (nonatomic, strong) NSError * _Nullable error;

@end
