/*
 * expInt.h --
 *
 *	Declarations of things used internally by Expect.
 *
 * Written by: Don Libes, libes@cme.nist.gov, NIST, 12/3/90
 *
 * Design and implementation of this program was paid for by U.S. tax
 * dollars.  Therefore it is public domain.  However, the author and NIST
 * would appreciate credit if this program or parts of it are used.
 *
 * Modified in October, 2001 by David Gravereaux for windows.
 *
 * RCS: @(#) $Id: expInt.h,v 1.1.2.1 2001-10-28 01:02:39 davygrvy Exp $
 */

#ifndef _EXPINT_H__
#define _EXPINT_H__

#ifndef _EXP_H__
#include "exp.h"
#endif

/*
 *----------------------------------------------------------------
 * Functions shared among Exp modules but not used by the outside
 * world:
 *----------------------------------------------------------------
 */

void exp_ecmd_remove_state_direct_and_indirect _ANSI_ARGS_((
			    Tcl_Interp *interp, ExpState *esPtr));


#endif /* _EXPINT_H__ */