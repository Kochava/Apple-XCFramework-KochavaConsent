//
//  KVAConsentAuditEntry.h
//  KochavaConsent
//
//  Created by John Bushnell on 12/11/19.
//  Copyright © 2019 - 2022 Kochava, Inc. All rights reserved.
//



#ifndef KVAConsentAuditEntry_h
#define KVAConsentAuditEntry_h



#pragma mark - IMPORT



#pragma mark KochavaCore
@import KochavaCore;



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
 */
@interface KVAConsentAuditEntry : NSObject <KVAAsForContextProtocol, KVAFromProtocol>



#pragma mark - Adding



/*!
 @method + addWithTextString:
 
 @brief A method which adds an audit entry.
 
 @param textString A string of text.
 */
+ (void)addWithTextString:(nonnull NSString *)textString
    NS_SWIFT_NAME(add(withTextString:));



@end



#endif



