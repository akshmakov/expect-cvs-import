/* ----------------------------------------------------------------------------
 * expWinSlaveEvents.cpp --
 *
 *	Processes all events.
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
 * RCS: @(#) $Id: expWinSlaveEvents.cpp,v 1.1.2.1 2001-11-15 07:25:19 davygrvy Exp $
 * ----------------------------------------------------------------------------
 */

#include "expWinInt.h"

/*
 *----------------------------------------------------------------------
 *  ExpWinSlaveEvents --
 *
 *	Process all events for the slavedrv application.
 *
 *  Returns:
 *	an exit code.
 *
 *----------------------------------------------------------------------
 */

int
ExpWinSlaveEvents (ExpSpawnTransportCli *transport, ExpSlaveTrap *masterCtrl)
{
    return 0;
}
