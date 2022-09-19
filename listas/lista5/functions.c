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
        return in(l->next, k);
}

//ex3
List* merge(List* a, List* b){
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;

    if(a->data < b->data){
        a->next = merge(a->next, b);
        return a;
    }

    else{
        b->next = merge(a, b->next);
        return b;
    }
}