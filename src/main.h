// hostsmgr
// Copyright (c) 2016-2021 Henry++

#pragma once

#include "routine.h"

#include "resource.h"
#include "app.h"

typedef struct tagSTATIC_DATA
{
	WCHAR eol[3];

	PR_STRING sources_file;
	PR_STRING whitelist_file;
	PR_STRING userlist_file;
	PR_STRING cache_dir;
	PR_STRING hosts_destination;
	PR_STRING hosts_file;
	PR_STRING hosts_file_temp;
	PR_STRING hosts_file_backup;

	volatile LONG64 total_size;
	volatile LONG total_hosts;
	volatile LONG total_sources;

	BOOLEAN is_nobackup;
	BOOLEAN is_nocache;
	BOOLEAN is_hostonly;
} STATIC_DATA, *PSTATIC_DATA;

typedef struct tagSOURCE_INFO_DATA
{
	PR_STRING source;
	HINTERNET hsession;
	HANDLE hfile;

	ULONG_PTR source_hash;
} SOURCE_INFO_DATA, *PSOURCE_INFO_DATA;

typedef enum tagFACILITY_CODE
{
	FACILITY_SUCCESS,
	FACILITY_FAILURE,
	FACILITY_HELP,
} FACILITY_CODE;
