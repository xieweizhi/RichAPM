//
//  RichInfoAPM.h
//  Richinfo APM
//
//  Created by xieweizhi on 7/16/15.
//  Copyright © 2015 xieweizhi. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    RichAPMUploadInterval1Min = 1,
    RichAPMUploadInterval5Min = 5,
    RichAPMUploadInterval10Min = 10,
    RichAPMUploadInterval15Min = 15,
    RichAPMUploadInterval30Min = 30,
    RichAPMUploadInterval45Min = 45,
    RichAPMUploadInterval60Min = 60,
} RichAPMUploadInterval;

@interface RichAPM : NSObject

//! Start monitoring app metrics data.
+ (void)startWithAppID:(NSString *)appID;

+ (NSString *)appID;

//! Upload data when connected via WIFI.
+ (void)setUploadDataWIFIOnly:(BOOL)wifiOnly;

//! Upload interval, from 1min to 60min
+ (void)setUploadDataInterval:(RichAPMUploadInterval)interval;

#warning FIXME: This have to be removed in production!

//! 设置上报地址
+ (void)setTestHost:(NSString *)host;

+ (NSString *)testHost;

@end
