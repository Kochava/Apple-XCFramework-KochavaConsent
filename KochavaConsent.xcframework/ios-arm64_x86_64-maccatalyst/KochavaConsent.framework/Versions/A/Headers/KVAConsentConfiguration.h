//
//  KVAConsentConfiguration.h
//  KochavaConsent
//
//  Created by John Bushnell on 12/13/19.
//  Copyright © 2019 - 2021 Kochava, Inc. All rights reserved.
//



#ifndef KVAConsentConfiguration_h
#define KVAConsentConfiguration_h



#pragma mark - IMPORT



#pragma mark KochavaCore
#ifdef KOCHAVA_FRAMEWORK
#import <KochavaCore/KochavaCore.h>
#else
#import "KVAAsForContextObjectProtocol.h"
#import "KVAConfigureWithObjectProtocol.h"
#import "KVAFromObjectProtocol.h"
#endif



#pragma mark - INTERFACE



@interface KVAConsentConfiguration : NSObject <NSCopying, KVAAsForContextObjectProtocol, KVAConfigureWithObjectProtocol, KVAFromObjectProtocol>



#pragma mark - PROPERTIES



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
 
 @discussion This might be checked instead of waiting for the optional block to be called.
 */
@property (readonly) BOOL readyBool;



#pragma mark - GENERAL



/*!
 @method - modePresent(withNameString:)
 
 @brief Returns a boolean indicating if a mode is currently present.
 */
- (BOOL)modePresentWithNameString:(nonnull NSString *)nameString
    NS_SWIFT_NAME(modePresent(withNameString:));



@end



#endif



