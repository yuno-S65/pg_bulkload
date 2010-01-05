/*
 * pg_bulkload: include/pg_bulkload_win32.h
 *
 *	  Copyright (c) 2007-2010, NIPPON TELEGRAPH AND TELEPHONE CORPORATION
 */
#ifndef BULKLOAD_WIN32_H_INCLUDED
#define BULKLOAD_WIN32_H_INCLUDED

#include "access/xlogdefs.h"

/*
 * Windows compatibility issues.
 */

#ifdef WIN32
#ifndef PGDLLIMPORT
#define PGDLLIMPORT	DLLIMPORT
#endif
extern PGDLLIMPORT TimeLineID		ThisTimeLineID; 
extern PGDLLIMPORT TransactionId	RecentXmin;
extern PGDLLIMPORT bool				XLogArchiveMode;
extern PGDLLIMPORT char			   *XLogArchiveCommand;
extern PGDLLIMPORT volatile bool	QueryCancelPending;
extern PGDLLIMPORT volatile bool	ProcDiePending;
#endif

#endif   /* BULKLOAD_WIN32_H_INCLUDED */
