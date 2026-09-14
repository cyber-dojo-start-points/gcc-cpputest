// A second source file, correct in every way, that the build never sees. The
// makefile lists the sources it compiles in SRC_FILES, and this file is not on
// that list, so the header below is enough to compile the call in untitled.c
// and the definition here never reaches the linker.
#include "checksum.h"

int the_checksum_is(void)
{
    return 7;
}
