// A second source file that does not compile, and it changes nothing. The
// makefile lists the sources it compiles in SRC_FILES, one name at a time, so
// a file that is not on that list is never handed to the compiler and its
// mistakes are never seen. The green light is what says so.
int the_checksum_is(void)
{
    return 7
}
