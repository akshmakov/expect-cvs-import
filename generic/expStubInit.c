/* 
 * expStubInit.c --
 *
 *	This file contains the initializers for the Expect stub vectors.
 *
 * RCS: @(#) $Id: expStubInit.c,v 1.1.4.1 2002-02-10 02:58:53 davygrvy Exp $
 */

#include "expInt.h"
#include "expPort.h"

/*
 * WARNING: The contents of this file are automatically generated by the
 * $(TCLROOT)/tools/genStubs.tcl script. Any modifications to the function declarations
 * below should be made in the generic/exp.decls script.
 */

/* !BEGIN!: Do not edit below this line. */

ExpIntStubs expIntStubs = {
    TCL_STUB_MAGIC,
    NULL,
    NULL, /* 0 */
    Exp_StringMatch, /* 1 */
    Exp_StringMatch2, /* 2 */
    NULL, /* 3 */
    exp_new_i_complex, /* 4 */
    exp_new_i_simple, /* 5 */
    exp_new_fs, /* 6 */
    exp_free_i, /* 7 */
    exp_free_fs, /* 8 */
    exp_free_fs_single, /* 9 */
    exp_i_update, /* 10 */
};

ExpIntPlatStubs expIntPlatStubs = {
    TCL_STUB_MAGIC,
    NULL,
#ifdef __WIN32__
    ExpWinApplicationType, /* 0 */
    ExpWinCreateProcess, /* 1 */
    ExpSyslog, /* 2 */
    NULL, /* 3 */
    Exp_WaitPid, /* 4 */
    Exp_KillProcess, /* 5 */
    ExpWinInit, /* 6 */
    BuildCommandLine, /* 7 */
#endif /* __WIN32__ */
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
    NULL, /* 1 */
    NULL, /* 2 */
    Exp_ExpInternalCmd, /* 3 */
    NULL, /* 4 */
    Exp_ExitCmd, /* 5 */
    Exp_ExpContinueCmd, /* 6 */
    NULL, /* 7 */
    Exp_ExpPidCmd, /* 8 */
    Exp_GetpidDeprecatedCmd, /* 9 */
    NULL, /* 10 */
    Exp_LogFileCmd, /* 11 */
    Exp_LogUserCmd, /* 12 */
    Exp_OpenCmd, /* 13 */
    NULL, /* 14 */
    NULL, /* 15 */
    NULL, /* 16 */
    Exp_SendLogCmd, /* 17 */
    Exp_SleepCmd, /* 18 */
    Exp_SpawnCmd, /* 19 */
    Exp_StraceCmd, /* 20 */
    Exp_WaitCmd, /* 21 */
    Exp_ExpVersionCmd, /* 22 */
    Exp_Prompt1Cmd, /* 23 */
    Exp_Prompt2Cmd, /* 24 */
    Exp_TrapCmd, /* 25 */
    Exp_SttyCmd, /* 26 */
    Exp_SystemCmd, /* 27 */
    Exp_ExpectCmd, /* 28 */
    Exp_ExpectGlobalCmd, /* 29 */
    Exp_MatchMaxCmd, /* 30 */
    Exp_RemoveNullsCmd, /* 31 */
    Exp_ParityCmd, /* 32 */
    Exp_TimestampCmd, /* 33 */
    Exp_CloseCmd, /* 34 */
    Exp_InterpreterCmd, /* 35 */
    Exp_SendCmd, /* 36 */
    Exp_KillCmd, /* 37 */
    NULL, /* 38 */
    NULL, /* 39 */
    exp_printify, /* 40 */
    NULL, /* 41 */
    NULL, /* 42 */
    NULL, /* 43 */
    NULL, /* 44 */
    NULL, /* 45 */
    NULL, /* 46 */
    NULL, /* 47 */
    NULL, /* 48 */
    NULL, /* 49 */
    exp_errorlog, /* 50 */
    exp_log, /* 51 */
    exp_debuglog, /* 52 */
    exp_nflog, /* 53 */
    exp_nferrorlog, /* 54 */
    exp_error, /* 55 */
    NULL, /* 56 */
    NULL, /* 57 */
    NULL, /* 58 */
    NULL, /* 59 */
    exp_parse_argv, /* 60 */
    exp_interpreter, /* 61 */
    exp_interpret_cmdfile, /* 62 */
    exp_interpret_cmdfilename, /* 63 */
    exp_interpret_rcfiles, /* 64 */
    exp_cook, /* 65 */
    NULL, /* 66 */
    exp_getpidproc, /* 67 */
    ExpCreateSpawnChannel, /* 68 */
    ExpPlatformSpawnOutput, /* 69 */
    exp_create_commands, /* 70 */
    exp_init_main_cmds, /* 71 */
    exp_init_expect_cmds, /* 72 */
    exp_init_most_cmds, /* 73 */
    exp_init_trap_cmds, /* 74 */
    exp_init_interact_cmds, /* 75 */
    exp_init_tty_cmds, /* 76 */
    NULL, /* 77 */
    NULL, /* 78 */
    exp_exact_write, /* 79 */
    NULL, /* 80 */
    exp_f_find, /* 81 */
    exp_f_new, /* 82 */
    exp_f_new_platform, /* 83 */
    exp_f_free, /* 84 */
    exp_f_free_platform, /* 85 */
    ExpCreatePairChannel, /* 86 */
    ExpSpawnOpen, /* 87 */
    exp_update_master, /* 88 */
    exp_get_var, /* 89 */
    exp_exit, /* 90 */
    exp_get_next_event, /* 91 */
    exp_get_next_event_info, /* 92 */
    exp_dsleep, /* 93 */
    exp_init_event, /* 94 */
    NULL, /* 95 */
    exp_event_disarm, /* 96 */
    exp_arm_background_filehandler, /* 97 */
    exp_disarm_background_filehandler, /* 98 */
    exp_disarm_background_filehandler_force, /* 99 */
    exp_unblock_background_filehandler, /* 100 */
    exp_block_background_filehandler, /* 101 */
    exp_background_filehandler, /* 102 */
    exp_exit_handlers, /* 103 */
    exp_close_on_exec, /* 104 */
    exp_flageq_code, /* 105 */
    exp_tty_break, /* 106 */
    exp_close_tcl_files, /* 107 */
    exp_lowmemcpy, /* 108 */
    exp_timestamp, /* 109 */
};

/* !END!: Do not edit above this line. */
