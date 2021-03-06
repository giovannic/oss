/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "blobs.h"

bool_t
xdr_pcsamp_parameters (XDR *xdrs, pcsamp_parameters *objp)
{
	register int32_t *buf;

	 if (!xdr_u_int (xdrs, &objp->sampling_rate))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_pcsamp_data (XDR *xdrs, pcsamp_data *objp)
{
	register int32_t *buf;

	 if (!xdr_uint64_t (xdrs, &objp->interval))
		 return FALSE;
	 if (!xdr_array (xdrs, (char **)&objp->pc.pc_val, (u_int *) &objp->pc.pc_len, ~0,
		sizeof (uint64_t), (xdrproc_t) xdr_uint64_t))
		 return FALSE;
	 if (!xdr_array (xdrs, (char **)&objp->count.count_val, (u_int *) &objp->count.count_len, ~0,
		sizeof (uint8_t), (xdrproc_t) xdr_uint8_t))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_pcsamp_start_sampling_args (XDR *xdrs, pcsamp_start_sampling_args *objp)
{
	register int32_t *buf;

	 if (!xdr_u_int (xdrs, &objp->sampling_rate))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->experiment))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->collector))
		 return FALSE;
	return TRUE;
}
