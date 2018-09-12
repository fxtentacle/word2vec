// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once
#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <tchar.h>


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <thread>
#include <fcntl.h>
#include <io.h>
#include <stdio.h>

#define posix_memalign(p, a, s) (((*(p)) = _aligned_malloc((s), (a))), *(p) ?0 :errno)


