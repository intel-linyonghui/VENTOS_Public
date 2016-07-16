/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735.asn"
 */

#ifndef	_MovementState_H_
#define	_MovementState_H_


#include <SAE_J2735/asn_application.h>

/* Including external dependencies */
#include <SAE_J2735/DescriptiveName.h>
#include <SAE_J2735/LaneCount.h>
#include <SAE_J2735/LaneSet.h>
#include <SAE_J2735/SignalLightState.h>
#include <SAE_J2735/PedestrianSignalState.h>
#include <SAE_J2735/SpecialSignalState.h>
#include <SAE_J2735/TimeMark.h>
#include <SAE_J2735/StateConfidence.h>
#include <SAE_J2735/ObjectCount.h>
#include <SAE_J2735/PedestrianDetect.h>
#include <SAE_J2735/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MovementState */
typedef struct MovementState {
	DescriptiveName_t	*movementName	/* OPTIONAL */;
	LaneCount_t	*laneCnt	/* OPTIONAL */;
	LaneSet_t	 laneSet;
	SignalLightState_t	*currState	/* OPTIONAL */;
	PedestrianSignalState_t	*pedState	/* OPTIONAL */;
	SpecialSignalState_t	*specialState	/* OPTIONAL */;
	TimeMark_t	 timeToChange;
	StateConfidence_t	*stateConfidence	/* OPTIONAL */;
	SignalLightState_t	*yellState	/* OPTIONAL */;
	PedestrianSignalState_t	*yellPedState	/* OPTIONAL */;
	TimeMark_t	*yellTimeToChange	/* OPTIONAL */;
	StateConfidence_t	*yellStateConfidence	/* OPTIONAL */;
	ObjectCount_t	*vehicleCount	/* OPTIONAL */;
	PedestrianDetect_t	*pedDetect	/* OPTIONAL */;
	ObjectCount_t	*pedCount	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MovementState_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MovementState;

#ifdef __cplusplus
}
#endif

#endif	/* _MovementState_H_ */
#include <SAE_J2735/asn_internal.h>