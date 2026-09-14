// Source and test file both renamed, and both perfectly good. The makefile
// names the files it builds one by one, in SRC_FILES and TEST_SRC_FILES,
// rather than gathering them with a glob, so renaming a file takes it out of
// the build and puts nothing back. make stops at the first name it can no
// longer find, and nothing is compiled at all.
#include "CppUTest/TestHarness.h"

extern "C"
{
#include "fizzBuzz.h"
}

TEST_GROUP(FizzBuzz)
{
};

TEST(FizzBuzz, life_the_universe_and_everything)
{
    LONGS_EQUAL(42, fizz_buzz());
}
