//
//  KVAUSPrivacyStringValue.h
//  KochavaConsent
//
//  Created by John Bushnell on 2/7/20.
//  Copyright © 2020 - 2022 Kochava, Inc. All rights reserved.
//



#ifndef KVAUSPrivacyStringValue_h
#define KVAUSPrivacyStringValue_h



#pragma mark - IMPORT



#pragma mark System
#if TARGET_OS_TV
#import <JavaScriptCore/JavaScriptCore.h>
#endif

#pragma mark KochavaCore
@import KochavaCore;



#pragma mark - CLASS



@class KVAUSPrivacyStringValue;



#pragma mark - PROTOCOL



#if TARGET_OS_TV
@protocol KVAUSPrivacyStringValueJSExport <JSExport>
@property (class, strong, nonatomic, nonnull, readonly) KVAUSPrivacyStringValue *yes;
@property (class, strong, nonatomic, nonnull, readonly) KVAUSPrivacyStringValue *no;
@property (class, strong, nonatomic, nonnull, readonly) KVAUSPrivacyStringValue *notApplicable;
@property (strong, nonatomic, nonnull, readonly) NSString *nameString;
@property (strong, nonatomic, nonnull, readonly) NSString *rawString;
@end
#endif



#pragma mark - INTERFACE



@interface KVAUSPrivacyStringValue : NSObject
<
#if TARGET_OS_TV
KVAUSPrivacyStringValueJSExport,
#endif
KVAFromProtocol
>



#pragma mark - Getting an Enumerated US Privacy String Value



/*!
 @property + yes
 
 @brief An enumerated shared instance of KVAUSPrivacyStringValue for Yes.
 */
@property (class, strong, nonatomic, nonnull, readonly) KVAUSPrivacyStringValue *yes;



/*!
 @property + no
 
 @brief An enumerated shared instance of KVAUSPrivacyStringValue for No.
 */
@property (class, strong, nonatomic, nonnull, readonly) KVAUSPrivacyStringValue *no;



/*!
 @property + notApplicable
 
 @brief An enumerated shared instance of KVAUSPrivacyStringValue for Not Applicable.
 */
@property (class, strong, nonatomic, nonnull, readonly) KVAUSPrivacyStringValue *notApplicable;



#pragma mark - Parameters



/*!
 @property nameString
 
 @brief The name.
 */
@property (strong, nonatomic, nonnull, readonly) NSString *nameString;



/*!
 @property rawString
 
 @brief The raw string value as found in the IAB US Privacy String at a given position.
 */
@property (strong, nonatomic, nonnull, readonly) NSString *rawString;



@end



#endif



