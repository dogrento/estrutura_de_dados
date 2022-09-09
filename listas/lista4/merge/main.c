#include <time.h>
#include "../linked_list.h"


List* popula_lista(List* l, int size){

    srand(time(NULL));

    for (int i = 0; i<size; i++){
        l = insert_front(l, rand()%10);
    }

    return l;
}

int main(){

    int size = 10;
    int element = 5;
    List* list = create();

    list = popula_lista(list, size);

    print(list);


    destroy(list);
    
    return 0;
}