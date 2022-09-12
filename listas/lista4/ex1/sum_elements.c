#include <time.h>

#include "../linked_list.h"

int sum(List* l){
    int sum = 0;
    List* tmp;
    for(tmp = l; tmp!=NULL; tmp = tmp->next){
        sum += tmp->data;
    }
    return sum;
}

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
    printf("soma dos elementos: %d\n", sum(list));

    destroy(list);
    
    return 0;
}