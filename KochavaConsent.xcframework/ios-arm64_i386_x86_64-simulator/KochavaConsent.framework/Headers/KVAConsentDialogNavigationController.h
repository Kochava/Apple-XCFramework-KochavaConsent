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



#pragma mark System
#if TARGET_OS_OSX
#import <AppKit/AppKit.h>
#elif TARGET_OS_WATCH
#import <WatchKit/WatchKit.h>
#else
#import <UIKit/UIKit.h>
#endif



#pragma mark - CLASS



@class KVAConsentDialogNavigationController;



#pragma mark - Typealiases



/*!
 @typedef KVAConsentDialogNavigationControllerDidCompleteBlock
 
 @brief A closure which is called when the navigation controller's lifecycle did complete.
 
 @discussion Set this value to dismiss the view controller.
 */
typedef void (^ KVAConsentDialogNavigationControllerDidCompleteBlock)
(
    KVAConsentDialogNavigationController * _Nonnull consentDialogNavigationController
);



/*!
 @typedef KVAConsentDialogNavigationControllerDidRequestToOpenURLBlock
 
 @brief A closure which is called when an event occurs which requests to open a url.
 
 @discussion Set this value to open the specified url.
 */
typedef void (^ KVAConsentDialogNavigationControllerDidRequestToOpenURLBlock)
(
    KVAConsentDialogNavigationController * _Nonnull consentDialogNavigationController,
    NSURL * _Nonnull url
);



#pragma mark - Interface



#if TARGET_OS_OSX || TARGET_OS_WATCH
@interface KVAConsentDialogNavigationController : NSObject
#else
@interface KVAConsentDialogNavigationController : UINavigationController
#endif



#pragma mark - 🆕 Creating a Consent Dialog Navigation Controller



/*!
 @method + consentDialogNavigationControllerWithDidRequestToOpenURLBlock:didCompleteBlock:
 
 @brief Create an instance of KVAConsentDialogNavigationController.
 
 @param didRequestToOpenURLBlock A closure which is called when an event occurs which requests to open a url.  Set this value to open the specified url.
 
 @param didCompleteBlock A block which is called when the navigation controller's lifecycle did complete.  Set this value to dismiss the view controller.
 */
+ (nullable instancetype)consentDialogNavigationControllerWithDidRequestToOpenURLBlock:
    (nonnull KVAConsentDialogNavigationControllerDidRequestToOpenURLBlock)didRequestToOpenURLBlock
    didCompleteBlock: (nonnull KVAConsentDialogNavigationControllerDidCompleteBlock)didCompleteBlock
    NS_SWIFT_NAME(init(didRequestToOpenURLBlock:didCompleteBlock:));



/*!
 @method - initWithRootViewController:
 
 @brief Create an instance of KVAConsentDialogNavigationController.
 */
#if TARGET_OS_OSX
- (nonnull instancetype)initWithRootViewController:(nonnull NSViewController *)rootViewController;
#elif TARGET_OS_WATCH
- (nonnull instancetype)initWithRootViewController:(nonnull WKInterfaceController *)rootViewController;
#endif



#pragma mark - Parameters



/*!
 @property rootViewController
 
 @brief The root view controller.
 */
#if TARGET_OS_OSX
@property (strong, nonatomic, nullable) NSViewController *rootViewController;
#elif TARGET_OS_WATCH
@property (strong, nonatomic, nullable) WKInterfaceController *rootViewController;
#endif



@end



#endif



#endif



