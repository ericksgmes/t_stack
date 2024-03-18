#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {
    t_stack * stack = createStack(7);
    push(stack, 1);
    print(stack);
    return 0;
}