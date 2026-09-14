// A second test file that cannot be parsed at all, and it changes nothing.
// Only the names in the makefile's TEST_SRC_FILES are compiled, so this file
// is never handed to the compiler and a learner gets no word of it. The green
// light is what says the file was skipped rather than read and rejected.
#include "CppUTest/TestHarness.h"

TEST_GROUP(AnswerSize
{
