//
//  KochavaConsent.h
//  KochavaConsent
//
//  Created by John Bushnell on 6/12/20.
//  Copyright © 2020 - 2021 Kochava, Inc.  All rights reserved.
//



#ifndef KochavaConsent_h
#define KochavaConsent_h



#pragma mark - IMPORT



#import <Foundation/Foundation.h>
#if TARGET_OS_TV
#import <JavaScriptCore/JavaScriptCore.h>
#endif

#import <KochavaCore/KochavaCore.h>
#import <KochavaUI/KochavaUI.h>

#import <KochavaConsent/KVAConsentAuditEntry.h>
#import <KochavaConsent/KVAConsentClient.h>
#import <KochavaConsent/KVAConsentConfiguration.h>
#if !TARGET_OS_WATCH
#import <KochavaConsent/KVAConsentDialogNavigationController.h>
#endif
#import <KochavaConsent/KVAConsentProduct.h>
#import <KochavaConsent/KVAUSPrivacy.h>
#import <KochavaConsent/KVAUSPrivacyStringValue.h>



#pragma mark - EXPORT



//! Project version number for KochavaConsent.
FOUNDATION_EXPORT double KochavaConsentVersionNumber;

//! Project version string for KochavaConsent.
FOUNDATION_EXPORT const unsigned char KochavaConsentVersionString[];



#endif



