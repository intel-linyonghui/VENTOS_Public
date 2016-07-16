/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735.asn"
 */

#ifndef	_RoadSideAlert_H_
#define	_RoadSideAlert_H_


#include <SAE_J2735/asn_application.h>

/* Including external dependencies */
#include <SAE_J2735/DSRCmsgID.h>
#include <SAE_J2735/MsgCount.h>
#include <SAE_J2735/ITIScodes.h>
#include <SAE_J2735/Priority.h>
#include <SAE_J2735/HeadingSlice.h>
#include <SAE_J2735/Extent.h>
#include <SAE_J2735/FurtherInfoID.h>
#include <SAE_J2735/MsgCRC.h>
#include <SAE_J2735/asn_SEQUENCE_OF.h>
#include <SAE_J2735/constr_SEQUENCE_OF.h>
#include <SAE_J2735/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FullPositionVector;

/* RoadSideAlert */
typedef struct RoadSideAlert {
	DSRCmsgID_t	 msgID;
	MsgCount_t	 msgCnt;
	ITIScodes_t	 typeEvent;
	struct description {
		A_SEQUENCE_OF(ITIScodes_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *description;
	Priority_t	*priority	/* OPTIONAL */;
	HeadingSlice_t	*heading	/* OPTIONAL */;
	Extent_t	*extent	/* OPTIONAL */;
	struct FullPositionVector	*positon	/* OPTIONAL */;
	FurtherInfoID_t	*furtherInfoID	/* OPTIONAL */;
	MsgCRC_t	 crc;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RoadSideAlert_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RoadSideAlert;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include <SAE_J2735/FullPositionVector.h>

#endif	/* _RoadSideAlert_H_ */
#include <SAE_J2735/asn_internal.h>