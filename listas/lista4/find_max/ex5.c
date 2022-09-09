#include <time.h>
#include "../linked_list.h"

int find_max(List* l){

    List* tmp=l; 
    int max = tmp->data;

    while(tmp != NULL){
        if(tmp->data > max){
            max = tmp->data;
        }
        tmp=tmp->next;
    }
    free(tmp);
    return max;
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

    printf("maior elemento da lista é: %d\n", find_max(lista));

    destroy(lista);
    
    return 0;
}