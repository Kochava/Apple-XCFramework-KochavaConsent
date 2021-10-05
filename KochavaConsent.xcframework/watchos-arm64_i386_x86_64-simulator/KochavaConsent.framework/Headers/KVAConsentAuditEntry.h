//
//  KVAConsentAuditEntry.h
//  KochavaConsent
//
//  Created by John Bushnell on 12/11/19.
//  Copyright © 2020 - 2021 Kochava, Inc. All rights reserved.
//



#ifndef KVAConsentAuditEntry_h
#define KVAConsentAuditEntry_h



#pragma mark - IMPORT



#pragma mark KochavaCore
#ifdef KOCHAVA_FRAMEWORK
#import <KochavaCore/KochavaCore.h>
#else
#import "KVAAsForContextObjectProtocol.h"
#import "KVAFromObjectProtocol.h"
#endif



#pragma mark - CLASS



@class KVAConsentAuditEntry;



#pragma mark - PROTOCOL



@protocol KVAConsentAuditEntryAdder <NSObject>



/*!
 @method - addEntry:
 
 @brief Adds a token.
 */
- (void)addEntry:(nonnull KVAConsentAuditEntry *)token
    NS_SWIFT_NAME(addEntry(_:));



@end



@protocol KVAConsentAuditEntryAdderProvider <NSObject>

@property (strong, nonatomic, nonnull, readonly) id<KVAConsentAuditEntryAdder> audit;

@end



#pragma mark - INTERFACE



/*!
 @class KVAConsentAuditEntry
 
 @brief A push notifications token.
 
 @author John Bushnell
 
 @copyright 2017 - 2021 Kochava, Inc.
 */
@interface KVAConsentAuditEntry : NSObject <KVAAsForContextObjectProtocol, KVAFromObjectProtocol>



#pragma mark - CLASS GENERAL



/*!
 @method + addWithTextString:
 
 @brief A method which adds an audit entry.
 
 @param textString A string of text.
 */
+ (void)addWithTextString:(nonnull NSString *)textString
    NS_SWIFT_NAME(add(withTextString:));



@end



#endif



