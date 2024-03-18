#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

t_stack * createStack(int maxStackSize)
{
    t_stack * stack = malloc(sizeof(t_stack));
    stack->maxSize = maxStackSize;
    stack->top_index = -1;
    stack->items = malloc(sizeof(int) * maxStackSize);
    return stack;
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

int is_full(t_stack *stack)
{
    if (stack->top_index > -1) return 1;
    return 0;
}

int is_empty(t_stack *stack)
{
    if (stack->top_index < 0) return 1;
    return 0;
}

void clear(t_stack *stack)
{
    stack->top_index = -1;
}

void print(t_stack *stack) 
{
    for (int i = 0; i <= stack->top_index; i++) {
        printf("%d", stack->items[i]);
    }
}

int size(t_stack *stack)
{
    return stack->top_index;
}