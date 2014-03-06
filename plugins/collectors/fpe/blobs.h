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


enum fpe_type {
	FPE_FE_INEXACT = 0,
	FPE_FE_UNDERFLOW = 1,
	FPE_FE_OVERFLOW = 2,
	FPE_FE_DIVBYZERO = 3,
	FPE_FE_UNNORMAL = 4,
	FPE_FE_INVALID = 5,
	FPE_FE_UNKNOWN = 6,
};
typedef enum fpe_type fpe_type;

struct fpe_parameters {
	uint8_t traced[8];
};
typedef struct fpe_parameters fpe_parameters;

struct fpe_event {
	uint64_t start_time;
	fpe_type fpexception;
	uint16_t stacktrace;
};
typedef struct fpe_event fpe_event;

struct fpe_data {
	struct {
		u_int stacktraces_len;
		uint64_t *stacktraces_val;
	} stacktraces;
	struct {
		u_int events_len;
		fpe_event *events_val;
	} events;
};
typedef struct fpe_data fpe_data;

struct fpe_start_tracing_args {
	fpe_type fpe_traced;
	int experiment;
	int collector;
};
typedef struct fpe_start_tracing_args fpe_start_tracing_args;

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_fpe_type (XDR *, fpe_type*);
extern  bool_t xdr_fpe_parameters (XDR *, fpe_parameters*);
extern  bool_t xdr_fpe_event (XDR *, fpe_event*);
extern  bool_t xdr_fpe_data (XDR *, fpe_data*);
extern  bool_t xdr_fpe_start_tracing_args (XDR *, fpe_start_tracing_args*);

#else /* K&R C */
extern bool_t xdr_fpe_type ();
extern bool_t xdr_fpe_parameters ();
extern bool_t xdr_fpe_event ();
extern bool_t xdr_fpe_data ();
extern bool_t xdr_fpe_start_tracing_args ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_BLOBS_H_RPCGEN */
