#include <stdio.h>
#include "stack.h"

int main(){

    int size = 5;
    Stack* pilha;

    pilha = create(size);
    printf("%d\n", get_peek(pilha));
    push(pilha, 37);
    printf("%d\n", get_peek(pilha));

    pop(pilha, 37);


    get_elements(pilha);

    destroy(pilha);
    
    return 0;
}