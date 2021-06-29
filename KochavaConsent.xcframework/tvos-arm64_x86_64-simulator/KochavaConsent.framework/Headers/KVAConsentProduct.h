//
//  KVAConsentProduct.h
//  KochavaConsent
//
//  Created by John Bushnell on 12/11/19.
//  Copyright © 2020 - 2021 Kochava, Inc.  All rights reserved.
//



#ifndef KVAConsentProduct_h
#define KVAConsentProduct_h



#pragma mark - IMPORT



#pragma mark KochavaCore
#ifdef KOCHAVA_FRAMEWORK
#import <KochavaCore/KochavaCore.h>
#else
#import "KVAProduct.h"
#import "KVASharedPropertyProvider.h"
#endif



#pragma mark - INTERFACE



/*!
 @class KVAConsentProduct
 
 @brief A class which defines a consent product.
 
 @discussion A product in this context generally refers to the result of a build.
 
 Inherits from: KVAProduct
 
 @author John Bushnell
 
 @copyright 2017 - 2021 Kochava, Inc.
 */
@interface KVAConsentProduct : KVAProduct <KVASharedPropertyProvider>



#pragma mark - SHARED INSTANCE (SINGLETON)



/*!
 @property shared
 
 @brief The singleton shared instance.
 */
@property (class, readonly, strong, nonnull) KVAConsentProduct *shared;



@end



#endif



