/* ----------------------------------------------------------------------------
 * expWinSlaveTrap.cpp --
 *
 *	Generic routines for opening the client trap method.  Has knowledge
 *	of all trap types used.
 *
 * ----------------------------------------------------------------------------
 *
 * Written by: Don Libes, libes@cme.nist.gov, NIST, 12/3/90
 * 
 * Design and implementation of this program was paid for by U.S. tax
 * dollars.  Therefore it is public domain.  However, the author and NIST
 * would appreciate credit if this program or parts of it are used.
 * 
 * Copyright (c) 1997 Mitel Corporation
 *	work by Gordon Chaffee <chaffee@bmrc.berkeley.edu> for the WinNT port.
 *
 * Copyright (c) 2001 Telindustrie, LLC
 *	work by David Gravereaux <davygrvy@pobox.com> for full Stubs complience
 *	and any Win32 OS.
 *
 * ----------------------------------------------------------------------------
 * URLs:    http://expect.nist.gov/
 *	    http://expect.sf.net/
 *	    http://bmrc.berkeley.edu/people/chaffee/expectnt.html
 * ----------------------------------------------------------------------------
 * RCS: @(#) $Id: expWinSlaveTrap.cpp,v 1.1.2.1 2001-11-15 07:25:19 davygrvy Exp $
 * ----------------------------------------------------------------------------
 */

#include "expWinInt.h"

/*
 *----------------------------------------------------------------------
 *  ExpWinSlaveOpenTrap --
 *
 *	The factory method for creating the trap method.
 *
 *  Returns:
 *	a polymorphed ExpSpawnTrap pointer or NULL for an error.
 *
 *----------------------------------------------------------------------
 */
ExpSlaveTrap *
ExpWinSlaveOpenTrap(char *meth, int argc, char *argv[])
{
    if (!strcmp(meth, "pipe")) {
	return new ExpSlaveTrapPipe(argc, argv);
    } else if (!strcmp(meth, "dbg")) {
	return new ExpSlaveTrapDbg(argc, argv);
    } else {
	return 0L;
    }
}
