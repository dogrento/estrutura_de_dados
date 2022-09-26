#include "linked_list.h"

//ex2
List* insert_back (List *l, int element){

    List* tmp = l;
    List* node = (List*) malloc(sizeof(List));

    if(l == NULL){
        return tmp;
    }
    
    while(tmp->next !=NULL){
        tmp = tmp->next;
    }

    node->data=element;
    node->next=tmp->next;
    node->prev=tmp;

    tmp->next = node;

    while(tmp->prev != NULL){
        tmp = tmp->prev;
    }

    return tmp;
}

// ex3
List* create_circular (List *l){
    List* tmp = l;

    if(l == NULL){
        return tmp;
    }

    while(tmp->next!=NULL){
        tmp = tmp->next;
    }

    tmp->next = l;
    l->prev = tmp;

    return l;
}