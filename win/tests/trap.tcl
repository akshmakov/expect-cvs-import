#
# trap.tcl
#
#	Used in conjunction with trap.test.  This script traps
#	SIGINT and SIGQUIT
#
# RCS: $Header: /workdir/expect-20170801-182513/cvs-data/win/tests/Attic/trap.tcl,v 1.1.2.1 2001-09-13 01:14:18 davygrvy Exp $

trap {
    puts "Caught SIGINT"
} SIGINT

trap {
    puts "Caught SIGQUIT"
} SIGQUIT

set x 1
vwait x
