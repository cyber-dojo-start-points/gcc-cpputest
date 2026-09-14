// A learner printing a debug line while a test passes. CppUTest writes its own
// output to stdout, so a print on stderr lands on the other stream entirely and
// cannot displace the summary line the rag-lambda reads. Both streams reach the
// learner, and the light stays green.
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
    std::fprintf(stderr, "debug: the answer is %d\n", the_answer_is());
    LONGS_EQUAL(42, the_answer_is());
}
