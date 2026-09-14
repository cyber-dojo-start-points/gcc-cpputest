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

TEST(TheGroupName, the_answer_is_even_and_ends_in_two)
{
    LONGS_EQUAL(2, the_answer_is() % 10);
}

TEST(TheGroupName, the_answer_is_six_sevens)
{
    LONGS_EQUAL(7, the_answer_is() / 6);
}
