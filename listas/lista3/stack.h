#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int peek,
	    size;

	int* array;
}Stack;

// inicializa struct de dados pilha
Stack* create(int size);

// free dos malloc
void destroy(Stack* s);

// adiciona elementos ao topo pilha 
void push(Stack* s, int element);

// remove e retorna do topo da pilha 
int pop(Stack* s);

// retorna se pilha está vazia
int is_empty(Stack* s);

// retorna se pilha está cheia
int is_full(Stack* s);

// retorn o topo da pilha
int get_peek(Stack* s);

// informa elementos da pilha
void get_elements(Stack* s);



