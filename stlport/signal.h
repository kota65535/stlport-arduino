/*
 * Copyright (c) 1999
 * Boris Fomitchev
 *
 * This material is provided "as is", with absolutely no warranty expressed
 * or implied. Any use is at your own risk.
 *
 * Permission to use or copy this software for any purpose is hereby granted
 * without fee, provided the above notices are retained on all copies.
 * Permission to modify the code and to distribute modified code is granted,
 * provided the above notices are retained, and a notice that the code was
 * modified is included with the above copyright notice.
 *
 */

#if !defined (_STLP_OUTERMOST_HEADER_ID)
#  define _STLP_OUTERMOST_HEADER_ID 0x257
#  include <stl/_cprolog.h>
#elif (_STLP_OUTERMOST_HEADER_ID == 0x257) && ! defined (_STLP_DONT_POP_HEADER_ID)
#  define _STLP_DONT_POP_HEADER_ID
#endif

/* evc3 and evc4 don't have signal.h */
#if !defined(_STLP_WCE) && !defined(_STLP_AVR)
#  if defined (_STLP_HAS_INCLUDE_NEXT)
#    include_next <signal.h>
#  else
#    include _STLP_NATIVE_C_HEADER(signal.h)
#  endif
#endif

#ifdef _STLP_AVR
#  include <avr/signal.h>
#endif

#if (_STLP_OUTERMOST_HEADER_ID == 0x257)
#  if ! defined (_STLP_DONT_POP_HEADER_ID)
#    include <stl/_epilog.h>
#    undef  _STLP_OUTERMOST_HEADER_ID
#  endif
#  undef  _STLP_DONT_POP_HEADER_ID
#endif

