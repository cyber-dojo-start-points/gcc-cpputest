// The one test announces itself on stderr, which is unbuffered and so survives
// the signal, because CppUTest names a test only when it fails and a crash
// prints no summary at all. The announcement is what says the test started;
// the missing summary line is what says it never finished.
#include "CppUTest/TestHarness.h"
#include <cstdio>

extern "C"
{
#include "untitled.h"
}

TEST_GROUP(TheGroupName)
{
};

TEST(TheGroupName, life_the_universe_and_everything)
{
    std::fprintf(stderr, "starting a test\n");
    LONGS_EQUAL(42, the_answer_is());
}
