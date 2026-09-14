// Two test files, one failing check between them. The file that fails is the
// included one, and CppUTest names it rather than the file it was included
// into, so a learner is sent to the line they actually wrote.
TEST_GROUP(AnswerSize)
{
};

TEST(AnswerSize, the_answer_is_three_digits_long)
{
    CHECK(the_answer_is() > 99);
}
