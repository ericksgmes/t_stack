#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void createStack(int maxStackSize)
{
    t_stack * stack = malloc(sizeof(t_stack));
    stack->maxSize = maxStackSize;
    stack->top_index = -1;
    stack->items = malloc(sizeof(int) * maxStackSize);
}