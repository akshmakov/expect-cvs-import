/*
 * expDecls.h --
 *
 *	Declarations of functions in the platform independent public
 *	Expect API.
 *
 * RCS: $Id: expDecls.h,v 1.1.2.4 2001-10-29 06:40:29 davygrvy Exp $
 */

#ifndef _EXPDECLS
#define _EXPDECLS

/*
 * WARNING: This file is automatically generated by the $(TCLROOT)/tools/genStubs.tcl
 * script.  Any modifications to the function declarations below should be made
 * in the generic/exp.decls script.
 */

/* !BEGIN!: Do not edit below this line. */

/*
 * Exported function declarations:
 */

/* 0 */
TCL_EXTERN(int)		Expect_Init _ANSI_ARGS_((Tcl_Interp * interp));
/* 1 */
TCL_EXTERN(int)		Expect_SafeInit _ANSI_ARGS_((Tcl_Interp * interp));
/* 2 */
TCL_EXTERN(void)	exp_parse_argv _ANSI_ARGS_((Tcl_Interp * interp, 
				int argc, char ** argv));
/* 3 */
TCL_EXTERN(int)		exp_interpreter _ANSI_ARGS_((Tcl_Interp * interp, 
				Tcl_Obj * eofObj));
/* 4 */
TCL_EXTERN(int)		exp_interpret_cmdfile _ANSI_ARGS_((
				Tcl_Interp * interp, Tcl_Channel file));
/* 5 */
TCL_EXTERN(int)		exp_interpret_cmdfilename _ANSI_ARGS_((
				Tcl_Interp * interp, char * filename));
/* 6 */
TCL_EXTERN(void)	exp_interpret_rcfiles _ANSI_ARGS_((
				Tcl_Interp * interp, int my_rc, int sys_rc));
/* 7 */
TCL_EXTERN(char *)	exp_cook _ANSI_ARGS_((char * s, int * len));
/* 8 */
TCL_EXTERN(void)	expCloseOnExec _ANSI_ARGS_((int fd));

typedef struct ExpStubHooks {
    struct ExpPlatStubs *expPlatStubs;
    struct ExpIntStubs *expIntStubs;
    struct ExpIntPlatStubs *expIntPlatStubs;
} ExpStubHooks;

typedef struct ExpStubs {
    int magic;
    struct ExpStubHooks *hooks;

    int (*expect_Init) _ANSI_ARGS_((Tcl_Interp * interp)); /* 0 */
    int (*expect_SafeInit) _ANSI_ARGS_((Tcl_Interp * interp)); /* 1 */
    void (*exp_parse_argv) _ANSI_ARGS_((Tcl_Interp * interp, int argc, char ** argv)); /* 2 */
    int (*exp_interpreter) _ANSI_ARGS_((Tcl_Interp * interp, Tcl_Obj * eofObj)); /* 3 */
    int (*exp_interpret_cmdfile) _ANSI_ARGS_((Tcl_Interp * interp, Tcl_Channel file)); /* 4 */
    int (*exp_interpret_cmdfilename) _ANSI_ARGS_((Tcl_Interp * interp, char * filename)); /* 5 */
    void (*exp_interpret_rcfiles) _ANSI_ARGS_((Tcl_Interp * interp, int my_rc, int sys_rc)); /* 6 */
    char * (*exp_cook) _ANSI_ARGS_((char * s, int * len)); /* 7 */
    void (*expCloseOnExec) _ANSI_ARGS_((int fd)); /* 8 */
} ExpStubs;

#ifdef __cplusplus
extern "C" {
#endif
extern ExpStubs *expStubsPtr;
#ifdef __cplusplus
}
#endif

#if defined(USE_EXP_STUBS) && !defined(USE_EXP_STUB_PROCS)

/*
 * Inline function declarations:
 */

#ifndef Expect_Init
#define Expect_Init \
	(expStubsPtr->expect_Init) /* 0 */
#endif
#ifndef Expect_SafeInit
#define Expect_SafeInit \
	(expStubsPtr->expect_SafeInit) /* 1 */
#endif
#ifndef exp_parse_argv
#define exp_parse_argv \
	(expStubsPtr->exp_parse_argv) /* 2 */
#endif
#ifndef exp_interpreter
#define exp_interpreter \
	(expStubsPtr->exp_interpreter) /* 3 */
#endif
#ifndef exp_interpret_cmdfile
#define exp_interpret_cmdfile \
	(expStubsPtr->exp_interpret_cmdfile) /* 4 */
#endif
#ifndef exp_interpret_cmdfilename
#define exp_interpret_cmdfilename \
	(expStubsPtr->exp_interpret_cmdfilename) /* 5 */
#endif
#ifndef exp_interpret_rcfiles
#define exp_interpret_rcfiles \
	(expStubsPtr->exp_interpret_rcfiles) /* 6 */
#endif
#ifndef exp_cook
#define exp_cook \
	(expStubsPtr->exp_cook) /* 7 */
#endif
#ifndef expCloseOnExec
#define expCloseOnExec \
	(expStubsPtr->expCloseOnExec) /* 8 */
#endif

#endif /* defined(USE_EXP_STUBS) && !defined(USE_EXP_STUB_PROCS) */

/* !END!: Do not edit above this line. */

#endif /* _EXPDECLS */
