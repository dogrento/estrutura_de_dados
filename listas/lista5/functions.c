#include"linked_list.h"

//ex1
int sum(List* l){
    if(l != NULL){
        return l->data + sum(l->next);
    }
}

//ex2
int in(List* l, int k){
    if(l!=NULL && l->data == k){
        return 1;
    }
    else if(l!=NULL)
        in(l->next, k);
}