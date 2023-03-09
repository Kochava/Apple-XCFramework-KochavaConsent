//
//  KVAConsentDialogNavigationController.h
//  KochavaConsent
//
//  Created by John Bushnell on 2/18/20.
//  Copyright © 2020 - 2023 Kochava, Inc.  All rights reserved.
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
 ) DEPRECATED_MSG_ATTRIBUTE("renamed to 'KVAConsentDialogNavigationController.Closure_DidComplete'.  Use 'KVAConsentDialogNavigationController.Closure_DidComplete' instead.  If in Objective-C then describe the closure through its low-level format instead.  Example: void (^closure_didComplete)(KVAConsentDialogNavigationController * _Nonnull consentDialogNavigationController) = ^(KVAConsentDialogNavigationController * _Nonnull consentDialogNavigationController) { /* ... */ };");



/*!
 @brief A closure which is called when an event occurs which requests to open a url.
 
 @discussion Set this value to open the specified url.
 */
typedef void (^ KVAConsentDialogNavigationControllerDidRequestToOpenURLBlock)
(
    KVAConsentDialogNavigationController * _Nonnull consentDialogNavigationController,
    NSURL * _Nonnull url
 ) DEPRECATED_MSG_ATTRIBUTE("renamed to 'KVAConsentDialogNavigationController.Closure_DidRequestToOpenURL'.  Use 'KVAConsentDialogNavigationController.Closure_DidRequestToOpenURL' instead.  If in Objective-C then describe the closure through its low-level format instead.  Example: void (^closure_didRequestToOpenURL)(KVAConsentDialogNavigationController * _Nonnull consentDialogNavigationController, NSURL * _Nonnull url) = ^(KVAConsentDialogNavigationController * _Nonnull consentDialogNavigationController, NSURL * _Nonnull url) { /* ... */ };");



#endif



#endif



