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

void push(t_stack *stack, int value) 
{
    stack->items[stack->top_index+1] = value;
    stack->top_index++;
}

void pop(t_stack *stack, int poppedValue)
{
    poppedValue = stack->items[stack->top_index];
    stack->items--;
}

void top(t_stack *stack, int topValue)
{
    topValue = stack->items[stack->top_index];
}