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
    LONGS_EQUAL(42, the_answer_is());
}

TEST(TheGroupName, the_checksum_of_the_answer)
{
    LONGS_EQUAL(0, the_checksum_is());
}
