# Microsoft Developer Studio Project File - Name="slavedrv" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=slavedrv - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "slavedrv.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "slavedrv.mak" CFG="slavedrv - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "slavedrv - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "slavedrv - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "slavedrv - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "slavedrv___Win32_Release"
# PROP BASE Intermediate_Dir "slavedrv___Win32_Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release\slavedrv"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /I "." /I "..\generic" /I "d:\tcl_workspace\tcl_head\generic" /I "d:\tcl_workspace\tcl_head\win" /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D _WIN32_WINNT=0x0400 /YX /FD /c
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 tcl84.lib kernel32.lib user32.lib advapi32.lib ws2_32.lib /nologo /subsystem:console /machine:I386 /libpath:"d:\tcl_workspace\tcl_head\win\Release"

!ELSEIF  "$(CFG)" == "slavedrv - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "slavedrv___Win32_Debug"
# PROP BASE Intermediate_Dir "slavedrv___Win32_Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug\slavedrv"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /G5 /MDd /W3 /Gm /GX /ZI /Od /I "." /I "..\generic" /I "d:\tcl_workspace\tcl_head\generic" /I "d:\tcl_workspace\tcl_head\win" /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D _WIN32_WINNT=0x0400 /YX /FD /GZ /c
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 tcl84d.lib kernel32.lib user32.lib advapi32.lib ws2_32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept /libpath:"d:\tcl_workspace\tcl_head\win\Debug"

!ENDIF 

# Begin Target

# Name "slavedrv - Win32 Release"
# Name "slavedrv - Win32 Debug"
# Begin Source File

SOURCE=.\ExpWinInit.c
# End Source File
# Begin Source File

SOURCE=.\expWinLog.c
# End Source File
# Begin Source File

SOURCE=.\expWinProcess.c
# End Source File
# Begin Source File

SOURCE=.\expWinSlaveDbg.c
# End Source File
# Begin Source File

SOURCE=.\expWinSlaveDrv.c
# End Source File
# Begin Source File

SOURCE=.\expWinSlaveKey.c
# End Source File
# Begin Source File

SOURCE=.\MsvcDbgControl.cpp

!IF  "$(CFG)" == "slavedrv - Win32 Release"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "slavedrv - Win32 Debug"

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\MsvcDbgControl.h
# End Source File
# End Target
# End Project
