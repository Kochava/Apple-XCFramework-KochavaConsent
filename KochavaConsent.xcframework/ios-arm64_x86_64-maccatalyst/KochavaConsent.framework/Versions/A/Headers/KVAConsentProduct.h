//
//  KVAConsentProduct.h
//  KochavaConsent
//
//  Created by John Bushnell on 12/11/19.
//  Copyright © 2019 - 2022 Kochava, Inc.  All rights reserved.
//



#ifndef KVAConsentProduct_h
#define KVAConsentProduct_h



#pragma mark - IMPORT



#pragma mark KochavaCore
@import KochavaCore;



#pragma mark - INTERFACE



/*!
 @class KVAConsentProduct
 
 @brief A class which defines a consent product.
 
 @discussion A product in this context generally refers to the result of a build.
 */
@interface KVAConsentProduct : NSObject



#pragma mark - 1️⃣ Getting the Shared Consent Product



/*!
 @property shared
 
 @brief The singleton shared instance.
 */
@property (class, readonly, strong, nonnull) KVAProduct *shared;



@end



#pragma mark - INTERFACE EXTENSION (KVASharedPropertyProtocol)



@interface KVAConsentProduct (KVASharedPropertyProtocol) <KVASharedPropertyProvider>

@end



#endif



