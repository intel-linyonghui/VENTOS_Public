/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735.asn"
 */

#ifndef	_VINstring_H_
#define	_VINstring_H_


#include <SAE_J2735/asn_application.h>

/* Including external dependencies */
#include <SAE_J2735/OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VINstring */
typedef OCTET_STRING_t	 VINstring_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VINstring;
asn_struct_free_f VINstring_free;
asn_struct_print_f VINstring_print;
asn_constr_check_f VINstring_constraint;
ber_type_decoder_f VINstring_decode_ber;
der_type_encoder_f VINstring_encode_der;
xer_type_decoder_f VINstring_decode_xer;
xer_type_encoder_f VINstring_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _VINstring_H_ */
#include <SAE_J2735/asn_internal.h>