TEST_GROUP(AnswerSize)
{
};

TEST(AnswerSize, the_answer_is_two_digits_long)
{
    CHECK(the_answer_is() > 9 && the_answer_is() < 100);
}
