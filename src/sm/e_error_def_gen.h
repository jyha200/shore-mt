#ifndef E_ERROR_DEF_GEN_H
#define E_ERROR_DEF_GEN_H

/* DO NOT EDIT --- generated by ../../tools/errors.pl from e_error.dat
                   on Mon Jan  2 14:58:12 2012 

<std-header orig-src='shore' genfile='true'>

SHORE -- Scalable Heterogeneous Object REpository

Copyright (c) 1994-99 Computer Sciences Department, University of
                      Wisconsin -- Madison
All Rights Reserved.

Permission to use, copy, modify and distribute this software and its
documentation is hereby granted, provided that both the copyright
notice and this permission notice appear in all copies of the
software, derivative works or modified versions, and any portions
thereof, and that both notices appear in supporting documentation.

THE AUTHORS AND THE COMPUTER SCIENCES DEPARTMENT OF THE UNIVERSITY
OF WISCONSIN - MADISON ALLOW FREE USE OF THIS SOFTWARE IN ITS
"AS IS" CONDITION, AND THEY DISCLAIM ANY LIABILITY OF ANY KIND
FOR ANY DAMAGES WHATSOEVER RESULTING FROM THE USE OF THIS SOFTWARE.

This software was developed with support by the Advanced Research
Project Agency, ARPA order number 018 (formerly 8230), monitored by
the U.S. Army Research Laboratory under contract DAAB07-91-C-Q518.
Further funding for this work was provided by DARPA through
Rome Research Laboratory Contract No. F30602-97-2-0247.

*/

#include "w_defines.h"

/*  -- do not edit anything above this line --   </std-header>*/
#define E_USERABORT               0x80000
#define E_CRASH                   0x80001
#define E_OUTOFSPACE              0x80002
#define E_ALIGNPARM               0x80003
#define E_BADSTID                 0x80004
#define E_FRAMENOTFOUND           0x80005
#define E_SPACENOTFOUND           0x80006
#define E_BADPID                  0x80007
#define E_BADVOL                  0x80008
#define E_VOLTOOLARGE             0x80009
#define E_DEVTOOLARGE             0x8000a
#define E_DEVICEVOLFULL           0x8000b
#define E_DEVNOTMOUNTED           0x8000c
#define E_ALREADYMOUNTED          0x8000d
#define E_VOLEXISTS               0x8000e
#define E_BADFORMAT               0x8000f
#define E_NVOL                    0x80010
#define E_EOF                     0x80011
#define E_DUPLICATE               0x80012
#define E_BADSTORETYPE            0x80013
#define E_BADSTOREFLAGS           0x80014
#define E_BADNDXTYPE              0x80015
#define E_BADSCAN                 0x80016
#define E_WRONGKEYTYPE            0x80017
#define E_NDXNOTEMPTY             0x80018
#define E_BADKEYTYPESTR           0x80019
#define E_BADKEY                  0x8001a
#define E_BADCMPOP                0x8001b
#define E_OUTOFLOGSPACE           0x8001c
#define E_RECWONTFIT              0x8001d
#define E_BADSLOTNUMBER           0x8001e
#define E_RECUPDATESIZE           0x8001f
#define E_BADSTART                0x80020
#define E_BADAPPEND               0x80021
#define E_BADLENGTH               0x80022
#define E_BADSAVEPOINT            0x80023
#define E_PAGECHANGED             0x80024
#define E_INSUFFICIENTMEM         0x80025
#define E_BADARGUMENT             0x80026
#define E_TWOTRANS                0x80027
#define E_TWOTHREAD               0x80028
#define E_TWOUTHREAD              0x80029
#define E_NOTRANS                 0x8002a
#define E_INTRANS                 0x8002b
#define E_TWOQUARK                0x8002c
#define E_NOQUARK                 0x8002d
#define E_INQUARK                 0x8002e
#define E_NOABORT                 0x8002f
#define E_NOTPREPARED             0x80030
#define E_ISPREPARED              0x80031
#define E_EXTERN2PCTHREAD         0x80032
#define E_NOTEXTERN2PC            0x80033
#define E_NOSUCHPTRANS            0x80034
#define E_THREADMAPFULL           0x80035
#define E_NOTPARENTLOCK           0x80036
#define E_BADLOCKMODE             0x80037
#define E_LOCKTIMEOUT             0x80038
#define E_NOTBLOCKED              0x80039
#define E_DEADLOCK                0x8003a
#define E_BADCCLEVEL              0x8003b
#define E_RETRY                   0x8003c
#define E_FOUNDEXTTOFREE          0x8003d
#define E_CANTWHILEACTIVEXCTS     0x8003e
#define E_LISTTOOLONG             0x8003f
#define E_NOHANDLE                0x80040
#define E_LOGVERSIONTOONEW        0x80041
#define E_LOGVERSIONTOOOLD        0x80042
#define E_BADMASTERCHKPTFORMAT    0x80043
#define E_ABORTED                 0x80044
#define E_LOGSPACEWARN            0x80045
#define E_BADCOMPENSATION         0x80046
#define E_APPENDFILEINOSCAN       0x80047
#define E_INVALIDHINT             0x80048
#define E_DUAUDITFAILED           0x80049
#define E_PINACTIVE               0x8004a
#define E_HOTPAGE                 0x8004b
#define E_BPFORCEFAILED           0x8004c
#define E_BRKKEYCMPNOTIMPL        0x8004d
#define E_OK                      0x0
#define E_ERRMIN                  0x80000
#define E_ERRMAX                  0x8004d

#endif
