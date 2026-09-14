// CppUTest names a test only when it fails, so a crash that kills the process
// leaves no trace of how far the run got. Each test announces itself on stderr
// instead, which is unbuffered and so survives the signal. Both tests call the
// function that dereferences NULL, so whichever CppUTest runs first takes the
// process down with it and exactly one announcement is printed. That count of
// one, against two tests written, is what says a test was left unrun.
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

TEST(TheGroupName, six_times_nine_is_not_the_answer)
{
    std::fprintf(stderr, "starting a test\n");
    CHECK(the_answer_is() != 54);
}
