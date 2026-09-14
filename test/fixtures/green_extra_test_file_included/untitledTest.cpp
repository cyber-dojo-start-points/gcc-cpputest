// The makefile compiles only the names in TEST_SRC_FILES, so a second test
// file reaches the build by being included into one that is already on that
// list. This is the remedy for every "not compiled" case beside it: the tests
// in answerSizeTest.cpp run, and the summary counts two tests rather than one.
#include "CppUTest/TestHarness.h"

extern "C"
{
#include "untitled.h"
}

#include "answerSizeTest.cpp"

TEST_GROUP(TheGroupName)
{
};

TEST(TheGroupName, life_the_universe_and_everything)
{
    LONGS_EQUAL(42, the_answer_is());
}
