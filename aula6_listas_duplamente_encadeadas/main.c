#include "linked_list.h"

int main(){

    List* lista = create();

    lista = insert_front(lista, 3);

    destroy(lista);
    
    return 0;
}