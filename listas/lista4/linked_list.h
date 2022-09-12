#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}List;

// Interface da lista encadeada
List* create();
List* insert_front(List* l, int element);
List* remove_element(List* l, int element);
void destroy(List* l);
void print(List* l);
