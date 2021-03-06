//-----------------------------------------------------------------------------------
//    The confidential and proprietary information contained in this file may 
//    only be used by a person authorised under and to the extent permitted
//    by a subsisting licensing agreement from ARM Limited or its affiliates 
//    or between you and a party authorised by ARM
//
//           (C) COPYRIGHT [2016] ARM Limited or its affiliates
//               ALL RIGHT RESERVED
//
//    This entire notice must be reproduced on all copies of this file
//    and copies of this files may only be made by a person if such person is
//    permitted to do so under the terms of a subsisting license agreement
//    from ARM Limited or its affiliates or between you and a party authorised by ARM
//-----------------------------------------------------------------------------------

/*!
@file
@brief This file contains all of the enums and definitions that are used for the
         CRYS CHACHA-POLY APIs, as well as the APIs themselves.
*/
#ifndef CRYS_CHACHA_POLY_H
#define CRYS_CHACHA_POLY_H


#include "ssi_pal_types.h"
#include "crys_error.h"
#include "crys_chacha.h"
#include "crys_poly.h"


#ifdef __cplusplus
extern "C"
{
#endif


/*!
@brief This function is used to perform the CHACHA-POLY encryption and authentication operation.

@return CRYS_OK on success.
@return A non-zero value on failure as defined crys_chacha_poly_error.h.
*/
CIMPORT_C CRYSError_t  CRYS_CHACHA_POLY(
			    CRYS_CHACHA_Nonce_t	 	 pNonce,          	/*!< [in]  A pointer to a buffer containing the nonce value. */
                            CRYS_CHACHA_Key_t            pKey,                  /*!< [in]  A pointer to the user's key buffer. */
                            CRYS_CHACHA_EncryptMode_t    encryptDecryptFlag,    /*!< [in]  A flag specifying whether the CHACHA-POLY should perform an Encrypt or
											   Decrypt operation. */
			    uint8_t			 *pAddData,		/*!< [in]  A pointer to the buffer of the additional data to the POLY.
                                                                                           The pointer does not need to be aligned. must not be null. */
			    size_t			 addDataSize,		/*!< [in]  The size of the input data. must not be 0. */
			    uint8_t                     *pDataIn,              /*!< [in]  A pointer to the buffer of the input data to the CHACHA.
                                                                                           The pointer does not need to be aligned. must not be null. */
                            size_t                       dataInSize,            /*!< [in]  The size of the input data. must not be 0. */
                            uint8_t                     *pDataOut,             /*!< [out] A pointer to the buffer of the output data from the CHACHA.
                                                                                           must not be null. */
			    CRYS_POLY_Mac_t		 macRes			/*!< [in/out] Pointer to the MAC result buffer.*/
);



#ifdef __cplusplus
}
#endif

#endif /* #ifndef CRYS_CHACHA_POLY_H */





