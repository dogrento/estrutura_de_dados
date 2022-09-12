#include "linked_list.h"
#include <time.h>

List* popula_lista(List* l, int size){

    srand(time(NULL));

    for (int i = 0; i<size; i++){
        l = insert_front(l, rand()%10);
    }

    return l;
}

int main(){

    int size = 10;
    List* list = create();

    list = popula_lista(list, size);

    print(list);

    //sum
    // printf("soma dos elementos: %d\n", sum(list));

    //in
    int element = 3;

    if(in(list, element))
        printf("O elemento %d está na lista.", element);
    else
        printf("O elemento %d NÃO está na lista.", element);


    destroy(list);
    
    return 0;
}