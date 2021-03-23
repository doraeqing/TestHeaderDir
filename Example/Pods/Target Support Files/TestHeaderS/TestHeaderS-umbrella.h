#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "client.h"
#import "THSClient.hpp"
#import "THSClientWarpper.h"
#import "common.hpp"
#import "test.h"
#import "json.hpp"

FOUNDATION_EXPORT double TestHeaderSVersionNumber;
FOUNDATION_EXPORT const unsigned char TestHeaderSVersionString[];

