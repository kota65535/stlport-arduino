#define _STLP_PLATFORM "Embedded AVR-libc"

// Platform define
#define _STLP_AVR 1

// Configuration defines
#define _STLP_NO_THREADS 1            // avr-libc does not support multi-threading
#define _NOTHREADS 1                  // this is a synonym of _STLP_NO_THREADS, but I define it for sure.
#define _STLP_HAS_NO_EXCEPTIONS       // compiler does not support exceptions
#define _STLP_NO_EXCEPTION_HEADER 1   // avr-libc does not provide <exception> header
#define _STLP_NO_BAD_ALLOC            // std::bad_alloc must be disabled explicitly
#define _STLP_NO_AT_MEMBER_FUNCTION 1 // at() member functions for containers must be disabled explicitly because they always throw std::bad_alloc

#define _STLP_NO_DEFAULT_STREAMS 1    // disable creation of cout/cerr/cin ?
#define _STLP_NO_FSTREAM 1            // avr-libc does not support fstream
#define _STLP_NO_LOCALE_SUPPORT       // avr-libc does not support locale
#define _STLP_NO_WCHAR_T  1           // avr-libc does not support wide character
#define _STLP_NO_NATIVE_MBSTATE_T 1   // avr-libc does not have mbstate_t
#define _STLP_NO_NATIVE_WIDE_FUNCTIONS 1  // disable wide character related functions
#define _STLP_NO_NATIVE_WIDE_STREAMS 1    // disable wide character enabled streams
#define _STLP_NO_RTTI 1               // compiler does not support RTTI
#define _STLP_NO_TYPEINFO 1           // avr-libc does not provide <typeinfo.h> header
#define _STLP_NO_TIME_SUPPORT 1       // avr-libc does not provide <time.h> header
#define _STLP_NO_VENDOR_MATH_L        // math.h in avr-libc does not have long double definition
#define _STLP_NO_VENDOR_STDLIB_L      // stdlib.h in avr-libc does not have long long definition ?

#define _STLP_HAS_NO_NEW_C_HEADERS 1  // avr-libc does not have native new-style C library headers like <cstddef>
#define _STLP_NO_NEW_NEW_HEADER 1     // avr-libc does not have <new> header
#define _STLP_NO_OWN_NAMESPACE        // force stlport to use std:: namespace
#define _STLP_USE_NEWALLOC

#define _STLP_USE_STATIC_LIB 1

// #define _STLP_USE_STDIO_IO 1
// #define _STLP_NO_LONG_DOUBLE 1        // compiler does not support long double

#define _STLP_WEAK __attribute__((weak))

