/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735.asn"
 */

#ifndef	_RequestedItem_H_
#define	_RequestedItem_H_


#include <SAE_J2735/asn_application.h>

/* Including external dependencies */
#include <SAE_J2735/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RequestedItem {
	RequestedItem_reserved	= 0,
	RequestedItem_itemA	= 1,
	RequestedItem_itemB	= 2,
	RequestedItem_itemC	= 3,
	RequestedItem_itemD	= 4,
	RequestedItem_itemE	= 5,
	RequestedItem_itemF	= 6,
	RequestedItem_itemG	= 7,
	RequestedItem_itemH	= 8,
	RequestedItem_itemI	= 9,
	RequestedItem_itemJ	= 10,
	RequestedItem_itemK	= 11,
	RequestedItem_itemL	= 12,
	RequestedItem_itemM	= 13,
	RequestedItem_itemN	= 14,
	RequestedItem_itemO	= 15,
	RequestedItem_itemP	= 16,
	RequestedItem_itemQ	= 17
	/*
	 * Enumeration is extensible
	 */
} e_RequestedItem;

/* RequestedItem */
typedef long	 RequestedItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RequestedItem;
asn_struct_free_f RequestedItem_free;
asn_struct_print_f RequestedItem_print;
asn_constr_check_f RequestedItem_constraint;
ber_type_decoder_f RequestedItem_decode_ber;
der_type_encoder_f RequestedItem_encode_der;
xer_type_decoder_f RequestedItem_decode_xer;
xer_type_encoder_f RequestedItem_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _RequestedItem_H_ */
#include <SAE_J2735/asn_internal.h>