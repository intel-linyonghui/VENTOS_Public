/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735.asn"
 */

#ifndef	_RegionPointSet_H_
#define	_RegionPointSet_H_


#include <SAE_J2735/asn_application.h>

/* Including external dependencies */
#include <SAE_J2735/RegionList.h>
#include <SAE_J2735/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Position3D;

/* RegionPointSet */
typedef struct RegionPointSet {
	struct Position3D	*anchor	/* OPTIONAL */;
	RegionList_t	 nodeList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RegionPointSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RegionPointSet;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include <SAE_J2735/Position3D.h>

#endif	/* _RegionPointSet_H_ */
#include <SAE_J2735/asn_internal.h>