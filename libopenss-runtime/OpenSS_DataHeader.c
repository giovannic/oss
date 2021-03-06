/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "OpenSS_DataHeader.h"

bool_t
xdr_OpenSS_DataHeader (XDR *xdrs, OpenSS_DataHeader *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->experiment))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->collector))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->host, 256,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int64_t (xdrs, &objp->pid))
		 return FALSE;
	 if (!xdr_int64_t (xdrs, &objp->posix_tid))
		 return FALSE;
	 if (!xdr_uint64_t (xdrs, &objp->time_begin))
		 return FALSE;
	 if (!xdr_uint64_t (xdrs, &objp->time_end))
		 return FALSE;
	 if (!xdr_uint64_t (xdrs, &objp->addr_begin))
		 return FALSE;
	 if (!xdr_uint64_t (xdrs, &objp->addr_end))
		 return FALSE;
	return TRUE;
}
