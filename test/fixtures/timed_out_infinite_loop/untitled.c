#include "untitled.h"

// A loop that never ends. The runner stops the whole run at max_seconds, so no
// summary line is ever printed and the outcome is timed_out rather than any of
// the three colours. The counter keeps the optimiser from removing the loop.
int the_answer_is(void)
{
    volatile int hikers = 0;
    while (1)
    {
        hikers = hikers + 1;
    }
    return 6 * 7;
}
