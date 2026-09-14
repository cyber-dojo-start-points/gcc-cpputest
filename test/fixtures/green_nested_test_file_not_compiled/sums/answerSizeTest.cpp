// A test file in a sub-directory. Depth is not what decides here: the makefile
// names the files it builds one at a time in TEST_SRC_FILES, so a file in a
// sub-directory is left out for the same reason a file beside untitledTest.cpp
// is. The check below is one that would fail, so a green light says this file
// really did not run.
#include "CppUTest/TestHarness.h"

extern "C"
{
#include "untitled.h"
}

TEST_GROUP(AnswerSize)
{
};

TEST(AnswerSize, the_answer_is_three_digits_long)
{
    CHECK(the_answer_is() > 99);
}
