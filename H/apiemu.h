#pragma once

#if defined(__UNIX__)
char *strupr( char *str );
#endif

#if defined(__WATCOMC__) && !defined(__UNIX__)
#ifdef __FLAT__
#ifndef DEBUG_OUT /* OW v1.8 WDW has a problem with locally defined imports */
char * _stdcall CharUpperA( char *lpsz );
#endif
#endif
#endif

#if !defined(__GNUC__) && !defined(__POCC__)
#define tolower(c) ((c >= 'A' && c <= 'Z') ? c | 0x20 : c )
#endif
