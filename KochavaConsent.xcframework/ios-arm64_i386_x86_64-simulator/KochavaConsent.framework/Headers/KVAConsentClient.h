//
//  KVAConsentClient.h
//  KochavaConsent
//
//  Created by John Bushnell on 12/11/19.
//  Copyright © 2020 - 2021 Kochava, Inc.  All rights reserved.
//



#ifndef KVAConsentClient_h
#define KVAConsentClient_h



#pragma mark - IMPORT



#pragma mark System
#if TARGET_OS_TV
#import <JavaScriptCore/JavaScriptCore.h>
#endif

#pragma mark KochavaCore
#ifdef KOCHAVA_FRAMEWORK
#import <KochavaCore/KochavaCore.h>
#else
#import "KVAAsForContextObjectProtocol.h"
#import "KVAConfigureWithObjectProtocol.h"
#import "KVAFromObjectProtocol.h"
#import "KVASharedPropertyProvider.h"
#endif

#pragma mark KochavaConsent
#ifdef KOCHAVA_FRAMEWORK
#import <KochavaConsent/KochavaConsent.h>
#else
#import "KVAConsentAuditEntry.h"  // For KVAConsentAuditEntryAdderProvider.
#endif



#pragma mark - DEFINE



#if KVA_REVEAL_TARGET == 1
#define KOCHAVA_DEPRECATED(MSG) /*__attribute__((deprecated(MSG)))*/
#else
#define KOCHAVA_DEPRECATED(MSG) __attribute__((deprecated(MSG)))
#endif



#pragma mark - public class KVAConsentClient



/*!
 @class KVAConsentClient
 
 @brief The class KVAConsentClient provides an interface between a host application and Kochava’s Attribution and Analytics Servers.  A consentClient manages the exchange of data between these two entities, along with the associated tasks and network transactions.

 @discussion The class KVAConsentClient is the main interface for the KochavaConsent SDK.  If you have not already integrated a KochavaConsent SDK into your project, refer to our KochavaConsent iOS SDK support documentation.
 
 You do not create instances of the KVAConsentClient class.  Instead, you start a provided shared instance using the designated configuration instance method start(withParametersDictionary:delegate:).
 
 From there, the consentClient proceeds to initialize immediately and perform its various tasks.  This is typically done during the earliest phases of the host’s life-cycle, so that installation attribution can be quickly established and post-install events may immediately begin to be queued.
 
 @author Kochava, Inc.
 
 @copyright 2020 - 2021 Kochava, Inc.
 */
@interface KVAConsentClient : NSObject



@end



#pragma mark - feature General



#if TARGET_OS_TV
@protocol KVAConsentClientGeneralJSExport <JSExport>
@property (class, readonly, strong, nonnull) KVAConsentClient *shared;
@property (readonly) BOOL startedBool;
- (void)registerIdentityWithNameString:
    (nonnull NSString *)nameString
    valueString: (nonnull NSString *)valueString
    NS_SWIFT_NAME(registerIdentity(withNameString:valueString:));
- (void)unregisterIdentityWithNameString:(nonnull NSString *)nameString
    NS_SWIFT_NAME(unregisterIdentity(withNameString:));
- (void)start;
- (void)invalidate;
@end
#endif



#if TARGET_OS_TV
@interface KVAConsentClient (General_Public) <KVAAsForContextObjectProtocol, KVAConfigureWithObjectProtocol, KVAFromObjectProtocol, KVASharedPropertyProvider, KVAConsentClientGeneralJSExport>
#else
@interface KVAConsentClient (General_Public) <KVAAsForContextObjectProtocol, KVAConfigureWithObjectProtocol, KVAFromObjectProtocol, KVASharedPropertyProvider>
#endif



/*!
 @property shared
 
 @brief A shared instance, for convenience.
 
 @discussion This is the preferred way of using a consentClient.  To complete the integration you must call func start.
 */
@property (class, readonly, strong, nonnull) KVAConsentClient *shared;



/*!
 @property startedBool

 @brief A boolean indicating if the instance has been started.
 */
@property (readonly) BOOL startedBool;



/*!
 @method - registerIdentity(withNameString:valueString:)
 
 @brief Registers an identity.
 
 @param nameString The name of the type of identifier.
 
 @param valueString The id value.
 */
- (void)registerIdentityWithNameString:(nonnull NSString *)nameString valueString:(nonnull NSString *)valueString
    NS_SWIFT_NAME(registerIdentity(withNameString:valueString:));



/*!
 @method - unregisterIdentity(withNameString:)

 @brief Unregisters a previously registered identity.

 @discussion It is safe to use this method with a nameString which may ultimately not be registered.  No warning will be generated.
 
 @param nameString The name of the type of identifier.
 */
- (void)unregisterIdentityWithNameString:(nonnull NSString *)nameString
    NS_SWIFT_NAME(unregisterIdentity(withNameString:));



/*!
 @method - start
 
 @brief The main start method for use with the shared instance.  This method starts the consentClient.
 
 @discussion  By calling the KVAConsentClient start method, you have completed the basic integration with the KochavaConsent SDK.  The call to the configuration method should be located in the logic of your application where things first start up, such as your App Delegate's application:didFinishLaunchingWithOptions: method.

 Swift example:
 @code
 KVAConsentClient.shared.start()
 @endcode
 */
- (void)start;



/*!
 @method - invalidate
 
 @brief Invalidates an instance of class KVAConsentClient.
 
 @discussion This is similar to allowing an instance of the consentClient deallocate, but it can also be used on the shared instance.  It will additionally signal certain sub-systems to invalidate themselves, which can result in a more assured and immediate halt.  The scope of this invalidation is not absolute.  Certain sub-systems will continue to run for a period of time until they may gracefully complete.  When using this method with the shared instance, you are guaranteed to be re-defaulted a new instance the next time it is referenced, and you may immediately move forward to re-configure it.
 */
- (void)invalidate;



/*!
 @method - configureWith:context:
 
 @brief Configures (updates) the instance from another object.
 
 @param withObject An object from which to update the instance.  This is expected to be a JSON dictionary, or alternatively a native instance.
 
 @param context The context.
 
 @discussion This method can be used to make special configurations to the instance.  This method is equivalent to the support provided by KVAConfigureWithObjectProtocol;  however, it is formalized with a dispatch to the Kochava SDK's globalSerial queue and a log message.
 */
- (void)configureWith:
    (nullable id)withObject
    context: (nullable KVAContext *)context
    NS_SWIFT_NAME(configure(with:context:));



@end



#pragma mark - feature Audit



@protocol KVAConsentAuditEntryAdderProvider;



#if TARGET_OS_TV
@interface KVAConsentClient (Audit_Public) <KVAConsentAuditEntryAdderProvider>
#else
@interface KVAConsentClient (Audit_Public) <KVAConsentAuditEntryAdderProvider>
#endif



/*!
 @property audit
 
 @brief An instance of class KVAConsentAudit which conforms to protocol KVAConsentAuditEntryAdder.
 */
@property (strong, nonatomic, nonnull, readonly) NSObject<KVAConsentAuditEntryAdder> *audit;



@end



#pragma mark - feature Configuration



@class KVAConsentConfiguration;



/*!
 @typedef KVAConsentConfigurationDidReceiveBlock
 
 @brief A block which is called when there is an update to consent.
 
 @discussion This can be used to prompt the user for consent and to enable and/or disable functionality.  Updates include, but are not limited to, when the user travels into or out of an area requiring consent, when new partners are added, and when conditions indicate a need to retry prompting the user.
 */
typedef void (^ KVAConsentConfigurationDidReceiveBlock)
(
    KVAConsentConfiguration * _Nonnull configuration
);



#if TARGET_OS_TV
@protocol KVAConsentClientConfigurationJSExport <JSExport>
@property (strong, nonatomic, nonnull, readonly) KVAConsentConfiguration *configuration;
@property (strong, nonatomic, nullable, readwrite) KVAConsentConfigurationDidReceiveBlock didReceiveConfigurationBlock;
@end
#endif



#if TARGET_OS_TV
@interface KVAConsentClient (Configuration_Public) <KVAConsentClientConfigurationJSExport>
#else
@interface KVAConsentClient (Configuration_Public)
#endif



/*!
 @property configuration
 
 @brief An instance of class KVAConsentAudit.
 */
@property (strong, nonatomic, nonnull, readonly) KVAConsentConfiguration *configuration;



/*!
 @property didReceiveConfigurationBlock
 
 @brief A block which is called when there is an update to the configuration.
 
 @discussion This can be used to prompt the user for consent and to enable and/or disable functionality.
 */
@property (strong, nonatomic, nullable, readwrite) KVAConsentConfigurationDidReceiveBlock didReceiveConfigurationBlock;



@end



#pragma mark - feature USPrivacy



@class KVAUSPrivacy;



#if TARGET_OS_TV
@protocol KVAConsentClientUSPrivacyJSExport <JSExport>
@property (strong, nonatomic, nonnull, readonly) KVAUSPrivacy *usPrivacy;
@end
#endif



#if TARGET_OS_TV
@interface KVAConsentClient (USPrivacy_Public) <KVAConsentClientUSPrivacyJSExport>
#else
@interface KVAConsentClient (USPrivacy_Public)
#endif



/*!
 @property usPrivacy

 @brief An instance of class KVAUSPrivacy providing an interface and support for the IAB US Privacy standard.
 */
@property (strong, nonatomic, nonnull, readonly) KVAUSPrivacy *usPrivacy;



@end



#endif



