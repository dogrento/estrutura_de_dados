#include <time.h>
#include "../linked_list.h"

int is_in (List *l, int k){
    List* tmp;
    for(tmp = l; tmp!=NULL; tmp=tmp->next){
        if(tmp->data==k){
            return 1;
            break;
        }
    }
    free(tmp);
    return 0;
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
    int element = 5;
    List* list = create();

    list = popula_lista(list, size);

    print(list);

    if(is_in(list, element))
        printf("elemento %d está na lista.\n", element);
    else    
        printf("elemento %d não está na lista.\n", element);

    destroy(list);
    
    return 0;
}