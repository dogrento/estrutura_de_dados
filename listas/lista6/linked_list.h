#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *prev;
	struct node *next;
}List;

List* create();
List* insert_front(List* l, int element);
List* remove_element(List* l, int element);
void destroy(List* l);
void print(List* l);

/*Exercícios*/

// ex2
List* insert_back(List* l, int element);
