/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _OFFLINE_H_RPCGEN
#define _OFFLINE_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct openss_objects {
	char *objname;
	uint64_t addr_begin;
	uint64_t addr_end;
	uint64_t time_begin;
	uint64_t time_end;
	uint8_t is_open;
};
typedef struct openss_objects openss_objects;

struct offline_data {
	struct {
		u_int objs_len;
		openss_objects *objs_val;
	} objs;
};
typedef struct offline_data offline_data;

struct openss_expinfo {
	char *collector;
	char *exename;
	char *traced;
	char *event;
	int32_t rank;
	uint32_t omptid;
	uint32_t rate;
};
typedef struct openss_expinfo openss_expinfo;

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_openss_objects (XDR *, openss_objects*);
extern  bool_t xdr_offline_data (XDR *, offline_data*);
extern  bool_t xdr_openss_expinfo (XDR *, openss_expinfo*);

#else /* K&R C */
extern bool_t xdr_openss_objects ();
extern bool_t xdr_offline_data ();
extern bool_t xdr_openss_expinfo ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_OFFLINE_H_RPCGEN */
