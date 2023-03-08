//
//  KVAConsentConfiguration.h
//  KochavaConsent
//
//  Created by John Bushnell on 12/13/19.
//  Copyright © 2019 - 2022 Kochava, Inc. All rights reserved.
//



#ifndef KVAConsentConfiguration_h
#define KVAConsentConfiguration_h



#pragma mark - IMPORT



#pragma mark KochavaCore
@import KochavaCore;



#pragma mark - INTERFACE



@interface KVAConsentConfiguration : NSObject <NSCopying, KVAAsForContextProtocol, KVAConfigureWithProtocol, KVAFromProtocol>



#pragma mark - Checking if a Mode is Present



/*!
 @method - modePresent(withNameString:)
 
 @brief Returns a boolean indicating if a mode is currently present.
 */
- (BOOL)modePresentWithNameString:(nonnull NSString *)nameString
    NS_SWIFT_NAME(modePresent(withNameString:));



#pragma mark - Properties



/*!
 @property hostDictionary
 
 @brief A dictionary containing arbitrary configuration values meant for the host app's consumption.
 */
@property (strong, nonatomic, nonnull, readonly) NSDictionary *hostDictionary;



/*!
 @property modeStringArray
 
 @brief Array of strings indicating the current applicable consent modes.
 */
@property (strong, nonatomic, nonnull, readonly) NSArray<NSString *> *modeStringArray;



/*!
 @property readyBool
 
 @brief A boolean indicating whether or not at least one configuration has completed and the configuration object is ready for use.
 
 @discussion This might be checked instead of waiting for the optional closure to be called.
 */
@property (readonly) BOOL readyBool;



@end



#endif



