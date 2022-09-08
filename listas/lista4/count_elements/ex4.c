#include <time.h>
#include "../linked_list.h"

int count_elements(List* l){
    int count = 0;
    List* tmp;

    for(tmp=l; tmp!= NULL; tmp=tmp->next){
        count++;
    }
    free(tmp);
    return count;
}

List* popula_lista(List* l, int size){

    srand(time(NULL));

    for (int i = 0; i<size; i++){
        l = insert_front(l, rand()%size);
    }
    return l;
}

int main(){

    int size = 37;
    List* lista = create();

    lista = popula_lista(lista, size);

    print(lista);

    printf("lista contém %d elementos. ", count_elements(lista));

    destroy(lista);
    
    return 0;
}