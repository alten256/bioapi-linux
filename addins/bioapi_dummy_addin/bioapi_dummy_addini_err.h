/*-----------------------------------------------------------------------
 * File: bioapi_dummy_addini_err.h
 *-----------------------------------------------------------------------
 */

#ifndef _BIOAPIDUMMYADDINI_ERR_H
#define _BIOAPIDUMMYADDINI_ERR_H

#include "bioapi_err.h"

#ifndef BioAPI_BSP_PRIVATE_ERROR
#error BioAPI_BSP_PRIVATE_ERROR not defined
#endif

/* Define the service error codes.
 */
#define BioAPIERR_BSP_FREE_BIRHANDLE (BioAPI_BSP_PRIVATE_ERROR + 1)
#define BioAPIERR_BSP_GET_BIRFROM_HANDLE (BioAPI_BSP_PRIVATE_ERROR + 2)
#define BioAPIERR_BSP_GET_HEADER_FROM_HANDLE (BioAPI_BSP_PRIVATE_ERROR + 3)
#define BioAPIERR_BSP_ENABLE_EVENTS (BioAPI_BSP_PRIVATE_ERROR + 4)
#define BioAPIERR_BSP_SET_GUICALLBACKS (BioAPI_BSP_PRIVATE_ERROR + 5)
#define BioAPIERR_BSP_SET_STREAM_CALLBACK (BioAPI_BSP_PRIVATE_ERROR + 6)
#define BioAPIERR_BSP_STREAM_INPUT_OUTPUT (BioAPI_BSP_PRIVATE_ERROR + 7)
#define BioAPIERR_BSP_CAPTURE (BioAPI_BSP_PRIVATE_ERROR + 8)
#define BioAPIERR_BSP_CREATE_TEMPLATE (BioAPI_BSP_PRIVATE_ERROR + 9)
#define BioAPIERR_BSP_PROCESS (BioAPI_BSP_PRIVATE_ERROR + 10)
#define BioAPIERR_BSP_VERIFY_MATCH (BioAPI_BSP_PRIVATE_ERROR + 11)
#define BioAPIERR_BSP_IDENTIFY_MATCH (BioAPI_BSP_PRIVATE_ERROR + 12)
#define BioAPIERR_BSP_ENROLL (BioAPI_BSP_PRIVATE_ERROR + 13)
#define BioAPIERR_BSP_VERIFY (BioAPI_BSP_PRIVATE_ERROR + 14)
#define BioAPIERR_BSP_IDENTIFY (BioAPI_BSP_PRIVATE_ERROR + 15)
#define BioAPIERR_BSP_IMPORT (BioAPI_BSP_PRIVATE_ERROR + 16)
#define BioAPIERR_BSP_SET_POWER_MODE (BioAPI_BSP_PRIVATE_ERROR + 17)
#define BioAPIERR_BSP_DB_OPEN (BioAPI_BSP_PRIVATE_ERROR + 18)
#define BioAPIERR_BSP_DB_CLOSE (BioAPI_BSP_PRIVATE_ERROR + 19)
#define BioAPIERR_BSP_DB_CREATE (BioAPI_BSP_PRIVATE_ERROR + 20)
#define BioAPIERR_BSP_DB_DELETE (BioAPI_BSP_PRIVATE_ERROR + 21)
#define BioAPIERR_BSP_DB_SET_CURSOR (BioAPI_BSP_PRIVATE_ERROR + 22)
#define BioAPIERR_BSP_DB_FREE_CURSOR (BioAPI_BSP_PRIVATE_ERROR + 23)
#define BioAPIERR_BSP_DB_STORE_BIR (BioAPI_BSP_PRIVATE_ERROR + 24)
#define BioAPIERR_BSP_DB_GET_BIR (BioAPI_BSP_PRIVATE_ERROR + 25)
#define BioAPIERR_BSP_DB_GET_NEXT_BIR (BioAPI_BSP_PRIVATE_ERROR + 26)
#define BioAPIERR_BSP_DB_QUERY_BIR (BioAPI_BSP_PRIVATE_ERROR + 27)
#define BioAPIERR_BSP_DB_DELETE_BIR (BioAPI_BSP_PRIVATE_ERROR + 28)

#endif
