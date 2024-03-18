#ifndef STACK_H
#define STACK_H

typedef struct
{
    int maxSize;
    int top_index;
    int * items;
} t_stack;

t_stack * createStack(int maxStackSize);
void push(t_stack *stack, int value);
void pop(t_stack *stack, int poppedValue);
void top(t_stack *stack, int topValue);
int is_full(t_stack *stack);
int is_empty(t_stack *stack);
void clear(t_stack *stack);
void print(t_stack *stack);
int size(t_stack *stack);

#endif