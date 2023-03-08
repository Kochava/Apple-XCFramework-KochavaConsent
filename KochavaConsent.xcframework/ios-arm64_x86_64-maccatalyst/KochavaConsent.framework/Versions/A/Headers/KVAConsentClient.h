//
//  KVAConsentClient.h
//  KochavaConsent
//
//  Created by John Bushnell on 8/2/22.
//  Copyright © 2020 - 2022 Kochava, Inc. All rights reserved.
//



#ifndef KVAConsentClient_h
#define KVAConsentClient_h



#pragma mark - IMPORT



#import <Foundation/Foundation.h>



#pragma mark - Classes



@class KVAConsentConfiguration;



#pragma mark - Typealiases



/*!
 @typedef KVAConsentConfigurationDidReceiveClosure

 @brief A closure which is called when there is an update to consent.

 @discussion This can be used to prompt the user for consent and to enable and/or disable functionality.  Updates include, but are not limited to, when the user travels into or out of an area requiring consent, when new partners are added, and when conditions indicate a need to retry prompting the user.
 */
typedef void (^ KVAConsentConfigurationDidReceiveClosure)
(
    KVAConsentConfiguration * _Nonnull configuration
);



#endif



