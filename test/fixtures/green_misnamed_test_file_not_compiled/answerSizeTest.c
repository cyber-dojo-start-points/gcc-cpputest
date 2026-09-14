// A test file named .c, so a build that gathered its sources by extension
// would hand this to the C compiler, where a CppUTest TEST_GROUP cannot live.
// This build gathers nothing by extension: SRC_FILES and TEST_SRC_FILES name
// every file one at a time, so the wrong extension costs no more than the
// right one did. The file is simply never compiled, and the light stays green.
#include "CppUTest/TestHarness.h"

TEST_GROUP(AnswerSize)
{
};
