#include "linked_list.h"

List* insert_back (List *l, int element){

    List* tmp = l;
    List* node = (List*) malloc(sizeof(List));

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