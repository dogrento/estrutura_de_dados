#include "linked_list.h"

int main(){

    List* lista = create();

    lista = insert_front(lista, 0);
    lista = insert_front(lista, 2);
    lista = insert_front(lista, 4);

    print(lista);

    remove_element(lista, 0);
    print(lista);

    destroy(lista);
    
    return 0;
}