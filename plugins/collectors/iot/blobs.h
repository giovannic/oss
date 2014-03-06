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


struct iot_parameters {
	uint8_t traced[1024];
};
typedef struct iot_parameters iot_parameters;

struct iot_event {
	uint64_t start_time;
	uint64_t stop_time;
	uint16_t stacktrace;
	uint16_t pathindex;
	uint16_t syscallno;
	uint16_t nsysargs;
	uint64_t sysargs[4];
	int retval;
};
typedef struct iot_event iot_event;

struct iot_data {
	struct {
		u_int stacktraces_len;
		uint64_t *stacktraces_val;
	} stacktraces;
	struct {
		u_int events_len;
		iot_event *events_val;
	} events;
	struct {
		u_int pathnames_len;
		char *pathnames_val;
	} pathnames;
};
typedef struct iot_data iot_data;

struct iot_start_tracing_args {
	int experiment;
	int collector;
};
typedef struct iot_start_tracing_args iot_start_tracing_args;

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_iot_parameters (XDR *, iot_parameters*);
extern  bool_t xdr_iot_event (XDR *, iot_event*);
extern  bool_t xdr_iot_data (XDR *, iot_data*);
extern  bool_t xdr_iot_start_tracing_args (XDR *, iot_start_tracing_args*);

#else /* K&R C */
extern bool_t xdr_iot_parameters ();
extern bool_t xdr_iot_event ();
extern bool_t xdr_iot_data ();
extern bool_t xdr_iot_start_tracing_args ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_BLOBS_H_RPCGEN */