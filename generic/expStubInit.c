/* 
 * expStubInit.c --
 *
 *	This file contains the initializers for the Expect stub vectors.
 *
 * RCS: @(#) $Id: expStubInit.c,v 1.1.2.2 2001-10-29 06:40:29 davygrvy Exp $
 */

#include "expInt.h"
#include "expPort.h"

/*
 * WARNING: The contents of this file is automatically generated by the
 * $(TCLROOT)/tools/genStubs.tcl script. Any modifications to the function declarations
 * below should be made in the generic/exp.decls script.
 */

/* !BEGIN!: Do not edit below this line. */

ExpIntStubs expIntStubs = {
    TCL_STUB_MAGIC,
    NULL,
};

ExpIntPlatStubs expIntPlatStubs = {
    TCL_STUB_MAGIC,
    NULL,
};

ExpPlatStubs expPlatStubs = {
    TCL_STUB_MAGIC,
    NULL,
};

static ExpStubHooks expStubHooks = {
    &expPlatStubs,
    &expIntStubs,
    &expIntPlatStubs
};

ExpStubs expStubs = {
    TCL_STUB_MAGIC,
    &expStubHooks,
    Expect_Init, /* 0 */
    Expect_SafeInit, /* 1 */
    exp_parse_argv, /* 2 */
    exp_interpreter, /* 3 */
    exp_interpret_cmdfile, /* 4 */
    exp_interpret_cmdfilename, /* 5 */
    exp_interpret_rcfiles, /* 6 */
    exp_cook, /* 7 */
    expCloseOnExec, /* 8 */
};

/* !END!: Do not edit above this line. */
