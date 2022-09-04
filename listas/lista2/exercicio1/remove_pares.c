#include <stdlib.h>
#include "../stack.h"

void popula_pilhaPrincipal(Stack* pilhaPrincipal, Stack* pilhaAux);

void remove_par(Stack* pilhaPrincipal, Stack* pilhaAux){

    int peek;
    
    while(!is_empty(pilhaPrincipal))
    {
        // printf("batata: %d\n", peek);
        peek = get_peek(pilhaPrincipal);
        if(peek%2!=0){
            push(pilhaAux, peek);
            pop(pilhaPrincipal);
        }
        else{
            pop(pilhaPrincipal);
        }
    }

    popula_pilhaPrincipal(pilhaPrincipal, pilhaAux);

}

void popula_pilhaPrincipal(Stack* pilhaPrincipal, Stack* pilhaAux){

    int peekValue=get_peek(pilhaAux);

    while(!is_empty(pilhaAux)){

        push(pilhaPrincipal, peekValue);
        pop(pilhaAux);
        peekValue=get_peek(pilhaAux);
    }
}

int main(){
    
    int size = 6;
    Stack* pilhaPrincipal = create(size);
    Stack* pilhaAux = create(size);

    // populando lista principal com valores random de 0~10
    while(!is_full(pilhaPrincipal)){
        push(pilhaPrincipal, rand()%10);
    }

    get_elements(pilhaPrincipal);
    remove_par(pilhaPrincipal, pilhaAux);        
    get_elements(pilhaPrincipal);
    
    destroy(pilhaPrincipal);
    destroy(pilhaAux);

    return 0;
}