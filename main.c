#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {
    t_stack * stack = createStack(9);
        if(is_empty(stack) == 1){
        printf("lista vazia\n");
    } else {
        printf("lista nao esta vazia\n");
    }
    push(stack, 1);
    push(stack, 234);
    push(stack, 123);
    push(stack, 11);
    push(stack, 24);
    push(stack, 0);
    push(stack, 8);
    push(stack, 8);
    push(stack, 2);
    int x;
    top(stack, &x);
    printf("topo da pilha é: %d\n", x);
    x = size(stack);
    printf("tamanho da pilha é: %d\n", x);
    clear(stack);
    if(is_empty(stack) == 1){
        printf("lista vazia\n");
    } else {
        printf("lista nao esta vazia\n");
    }
    print(stack);
    destroyStack(stack);
    return 0;
}