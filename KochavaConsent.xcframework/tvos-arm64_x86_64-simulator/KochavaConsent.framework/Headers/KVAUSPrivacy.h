//
//  KVAUSPrivacy.h
//  KochavaConsent
//
//  Created by John Bushnell on 7/23/20.
//  Copyright © 2020 - 2022 Kochava, Inc.  All rights reserved.
//



#ifndef KVAUSPrivacy_h
#define KVAUSPrivacy_h



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
@protocol KVAUSPrivacyJSExport <JSExport>
@property (strong, nonnull, readwrite) KVAUSPrivacyStringValue *coveredByLSPA;
@property (strong, nonnull, readwrite) KVAUSPrivacyStringValue *explicitNoticeGiven;
@property (strong, nonnull, readwrite) KVAUSPrivacyStringValue *userOptedOutOfSale;
@property (strong, nonatomic, nullable, readwrite) NSString *string;
@end
#endif



#pragma mark - INTERFACE



/*!
 @class KVAUSPrivacy
 
 @brief A controller for working with usPrivacy.
 */
@interface KVAUSPrivacy : NSObject
<
#if TARGET_OS_TV
KVAUSPrivacyJSExport,
#endif
KVAAsForContextProtocol,
KVAConfigureWithProtocol,
KVAFromProtocol
>



/*!
 @property explicitNoticeGiven
 
 @brief An enumerated instance of KVAUSPrivacyStringValue indicating if explicit notice has been given.
 */
@property (strong, nonnull, readwrite) KVAUSPrivacyStringValue *explicitNoticeGiven;



/*!
 @property userOptedOutOfSale
 
 @brief An enumerated instance of KVAUSPrivacyStringValue indicating if the user has opted out of the sale of their data.
 */
@property (strong, nonnull, readwrite) KVAUSPrivacyStringValue *userOptedOutOfSale;



/*!
 @property coveredByLSPA
 
 @brief An enumerated instance of KVAUSPrivacyStringValue indicating if the publisher intends for this transaction to be covered under the IAB Limited Service Provider Agreement (LSPA).
 */
@property (strong, nonnull, readwrite) KVAUSPrivacyStringValue *coveredByLSPA;



/*!
 @property string

 @brief The IAB US Privacy string.
 */
@property (strong, nonatomic, nullable, readwrite) NSString *string;



@end



#endif



