//
//  KVAConsentDialogNavigationController.h
//  KochavaConsent
//
//  Created by John Bushnell on 2/18/20.
//  Copyright © 2020 - 2022 Kochava, Inc. All rights reserved.
//



#if !TARGET_OS_WATCH



#ifndef KVAConsentDialogNavigationController_h
#define KVAConsentDialogNavigationController_h



#pragma mark - IMPORT



#import <Foundation/Foundation.h>



#pragma mark - CLASS



@class KVAConsentDialogNavigationController;



#pragma mark - Typealiases



/*!
 @brief A closure which is called when the navigation controller's lifecycle did complete.
 
 @discussion Set this value to dismiss the view controller.
 */
typedef void (^ KVAConsentDialogNavigationControllerDidCompleteBlock)
(
    KVAConsentDialogNavigationController * _Nonnull consentDialogNavigationController
);



/*!
 @brief A closure which is called when an event occurs which requests to open a url.
 
 @discussion Set this value to open the specified url.
 */
typedef void (^ KVAConsentDialogNavigationControllerDidRequestToOpenURLBlock)
(
    KVAConsentDialogNavigationController * _Nonnull consentDialogNavigationController,
    NSURL * _Nonnull url
);



#endif



#endif



