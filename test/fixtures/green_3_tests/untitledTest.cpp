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

TEST(TheGroupName, the_answer_is_even)
{
    LONGS_EQUAL(0, the_answer_is() % 2);
}

TEST(TheGroupName, the_answer_is_two_digits_long)
{
    CHECK(the_answer_is() > 9 && the_answer_is() < 100);
}
