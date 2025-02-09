//
//  SDKPaySEPAPayment.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <SDKPayeCom/SDKPayeCom.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Defines SEPA payment method.
 */
@interface SDKPayECSEPAPayment : SDKPayECPayment

/**
 @brief Setting this value to SDKPayECBoolYes means services and products are only available to businesses, the payer cannot be a private individual.
 @details It is optional.
 */
@property (assign, nonatomic) SDKPayECBool B2B;

/**
 @brief The Creditor Id for the Merchant Account SEPA.
 @details It is mandatory.
 */
@property (strong, nonatomic, nonnull ) NSString *creditorID;

/**
 @brief The Mandate Id for the Mandate Transaction, generated by merchant.
 */
@property (strong, nonatomic, nonnull ) NSString *mandateID;
/**
 @brief The date that the Mandate was signed.
 @details It is optional. If value is nil, current date will be used.
 */
@property (strong, nonatomic, nullable) NSDate *mandateSignedDate;

/**
 @brief The date that the Mandate Transaction is due
 */
@property (strong, nonatomic, nullable) NSDate *dueDate;

/**
 @brief It describes recurring transactions.
 */
@property (strong, nonatomic, nullable) SDKPayECPeriodic *periodic;

@end

/** @} */
