//
//  MMBeautyLog.h
//  MMBeautyKit
//
//  Created by sunfei on 2019/12/12.
//

#ifndef MMBeautyLog_h
#define MMBeautyLog_h

#if !defined(MMBeautyLog)

#if DEBUG

#define MMBeautyLog(format, ...) do { \
        if (getenv("MMBEAUTY_LOG_ENABLED") != NULL) {\
        NSLog(format, ##__VA_ARGS__); \
    }\
} while(0)

#else

#define MMBeautyLog(format, ...) do { } while(0)

#endif

#endif

#endif /* MMBeautyLog_h */
