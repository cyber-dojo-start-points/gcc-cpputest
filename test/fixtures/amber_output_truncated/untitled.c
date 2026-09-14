#include "untitled.h"
#include <stdio.h>

// The learner put a print inside a loop to see what was happening. It goes to
// stdout, which is the same stream CppUTest writes its summary line to, and it
// prints far more than the 50K the runner keeps. The runner keeps the head of
// each stream, so the flood survives and the summary line that came after it
// does not, leaving the rag-lambda nothing to read.
int the_answer_is(void)
{
    int total = 0;
    for (int i = 0; i != 5000; i++)
    {
        printf("debug: i is %d, total is %d\n", i, total);
        total += 6;
    }
    return 6 * 7;
}
