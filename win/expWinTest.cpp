#include "TclAdaptor.hpp"
#include "expWinUtils.hpp"

class Test1 : protected Tcl::Adaptor<Test1>, ArgMaker
{
    friend Tcl::Adaptor<Test1>;

public:
    Test1(Tcl_Interp *_interp)
	: Tcl::Adaptor<Test1>(_interp)
    {
	NewTclCmd("test_buildcmdline", TestCmdLineCmd);
	NewTclCmd("test_passthru", TestPassThruCmd);
    }
    ~Test1() {
	// can't use interp pointer in here.
    }

private:
    // Test the ArgMaker::BuildCommandLine() function.
    //
    int TestCmdLineCmd (int objc, struct Tcl_Obj * CONST objv[])
    {
	char **argv = new char * [objc-1];
	int i;
	char *line;

	for (i = objc-1; i > 0; i--) argv[i-1] = Tcl_GetString(objv[i]);
	line = BuildCommandLine(objc-1, argv);
	Tcl_SetObjResult(interp, Tcl_NewStringObj(line, -1));
	delete [] line;
	return TCL_OK;
    }

    // Test the full pass-thru
    //
    int TestPassThruCmd (int objc, struct Tcl_Obj * CONST objv[])
    {
	char **argvIn = new char * [objc-1];
	int i, argc;
	char *line, **argv;
	Tcl_Obj **oobjv;

	// Take the array and turn it into a string.
	for (i = objc-1; i > 0; i--) argvIn[i-1] = Tcl_GetString(objv[i]);
	line = BuildCommandLine(objc-1, argvIn);
	// Now take the string and turn it back into an array.
	SetArgv(line, &argc, &argv);
	delete [] line;
	oobjv = new Tcl_Obj * [argc];
	for (i = 0; i < argc; i++) oobjv[i] = Tcl_NewStringObj(argv[i], -1);
	Tcl_SetObjResult(interp, Tcl_NewListObj(argc, oobjv));
	return TCL_OK;
    }

    virtual void DoCleanup () {
	// The adapter base class is telling us we are about to go away and it is
	// safe to use the interp pointer to do any needed cleanup.
    };
};

// tell the EXTERN macro we want to declare functions for export.
#undef TCL_STORAGE_CLASS
#define TCL_STORAGE_CLASS DLLEXPORT

EXTERN int
Slavedrv_test_Init (Tcl_Interp *interp)
{
#ifdef USE_TCL_STUBS
    if (Tcl_InitStubs(interp, "8.1", 0) == 0L) {
	return TCL_ERROR;
    }
#endif
    new Test1(interp);
    Tcl_PkgProvide(interp, "exptest", "1.0");
    return TCL_OK;
}


