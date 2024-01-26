//
//  CameraMediakit.h
//  flutter_camera
//
//  Created by fky on 2024/1/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^MyCallbackFunction)(NSString* rtspPath);

@interface CameraMediakit : NSObject


+ (instancetype)sharedInstance;

// 添加其他实例方法和属性
-(void)setup:(MyCallbackFunction)callback;

@end

NS_ASSUME_NONNULL_END
