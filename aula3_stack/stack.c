#include "stack.h"

Stack* create(int size){
	// criar a caixinha de pilha
	Stack* pilha = (Stack*)malloc(size * sizeof(Stack));

	//inicializando variavel peek para valor inicial
	pilha->peek = 0;

	//atribuindo valor para size
	pilha->size = size;

	// alocando memoria para array
	pilha->array = (int*) malloc(size*sizeof(int));
} 

void destroy(Stack* s){
	//primeiro dar free no array e depois na caixinha.
	free(s->array);
	free(s);
}

void push(Stack* s, int element){
	if(!is_full(s)){
		s->array[s->peek] = element;
		s->peek++;	
	}
	else
		printf("função push: stack overflow\n");
}

int pop(Stack* s, int element){
	if(!is_empty(s)){
		s->peek--;
		s->array[s->peek]=0;
		printf("elemento %d removido\n", element);
	}
}

int is_full(Stack* s){
	return(s->peek == s->size);
}

int is_empty(Stack* s){
	return (s->peek == 0);
}

int get_peek(Stack* s){
	return(s->peek);
}

void get_elements(Stack* s){
	printf("size: %d\n", s->size);
	for(int i = 0; i<s->size;i++){
		printf("position: %d, element: %d\n", i, s->array[i]);
	}
}
