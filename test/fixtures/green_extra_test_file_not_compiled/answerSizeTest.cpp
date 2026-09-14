// A second test file, correctly named .cpp and holding a real test, that never
// runs. The makefile lists the test files it compiles in TEST_SRC_FILES, and
// only untitledTest.cpp and AllTests.cpp are on that list, so the right
// extension is not enough to get a file built. The check below is one that
// would fail, so a green light says this file really did not run rather than
// that it ran and passed.
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
