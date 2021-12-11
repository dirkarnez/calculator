#pragma once

#if defined(_WIN32)
#  if defined(_WINDLL)
#    define DECLSPEC __declspec(dllexport)
#  else
#    define DECLSPEC
#  endif
#else // non windows
#  define DECLSPEC
#endif