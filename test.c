#include <assert.h>
#include <standardloop/logger.h>
#include <stdio.h>
#include <stdlib.h>

#include "./todo.h"

int main(void)
{
    InitLogger(TRACE, STANDARD_FMT, false, true, true, true);
    TestTodo();
    assert(1);
    return EXIT_SUCCESS;
}
