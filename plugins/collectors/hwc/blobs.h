/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _BLOBS_H_RPCGEN
#define _BLOBS_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct hwc_parameters {
	uint64_t sampling_rate;
	char hwc_event[128];
};
typedef struct hwc_parameters hwc_parameters;

struct hwc_data {
	uint64_t interval;
	struct {
		u_int pc_len;
		uint64_t *pc_val;
	} pc;
	struct {
		u_int count_len;
		uint8_t *count_val;
	} count;
};
typedef struct hwc_data hwc_data;

struct hwc_start_sampling_args {
	uint64_t sampling_rate;
	char hwc_event[128];
	int experiment;
	int collector;
};
typedef struct hwc_start_sampling_args hwc_start_sampling_args;

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_hwc_parameters (XDR *, hwc_parameters*);
extern  bool_t xdr_hwc_data (XDR *, hwc_data*);
extern  bool_t xdr_hwc_start_sampling_args (XDR *, hwc_start_sampling_args*);

#else /* K&R C */
extern bool_t xdr_hwc_parameters ();
extern bool_t xdr_hwc_data ();
extern bool_t xdr_hwc_start_sampling_args ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_BLOBS_H_RPCGEN */
