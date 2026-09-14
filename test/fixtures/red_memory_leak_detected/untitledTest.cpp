// CppUTest counts the allocations a test makes and fails the test when one is
// still outstanding at the end of it. This is the axis that separates CppUTest
// from the other frameworks in this family: the single check below passes, and
// the test is reported as a failure all the same, so the light is red because
// of memory the test forgot rather than because of an assertion.
#include "CppUTest/TestHarness.h"

extern "C"
{
#include "untitled.h"
}

TEST_GROUP(TheGroupName)
{
};

TEST(TheGroupName, life_the_universe_and_everything)
{
    int* hikers = new int[the_answer_is()];
    LONGS_EQUAL(42, the_answer_is());
    (void)hikers;
}
