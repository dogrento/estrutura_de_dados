#include <time.h>
#include "../linked_list.h"

int is_similar(List* a, List* b){
    int response;
    List *tmpA = a,
         *tmpB = b;
    

    if(tmpA !=NULL && tmpB != NULL && tmpA->data==tmpB->data)
        response = 1;
    else
        return response = 0;
    
    while(response == 1 && tmpA!=NULL && tmpB != NULL){
        if(tmpA !=NULL && tmpB != NULL && tmpA->data==tmpB->data)
            response = 1;
        else
            response = 0;
        
        tmpA = tmpA->next;
        tmpB = tmpB->next;
    }
    if(response)
        return response;

    else 
        return response; 
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
    List* a = create();
    List* b = create();

    a = popula_lista(a, size);
    b = popula_lista(b, size);

    printf("lista A:\n");
    print(a);
    printf("\n");
    printf("lista B:\n");
    print(b);

    printf("\n");
    printf("is_similar: %d\n", is_similar(a,b));

    destroy(a);
    destroy(b);
    
    return 0;
}