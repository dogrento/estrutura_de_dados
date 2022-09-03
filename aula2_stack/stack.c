#include "stack.h"

Stack* create(int size){
	// criar a caixinha de pilha
	Stack* pilha = (Stack*)malloc(size * sizeof(Stack));

	//inicializando variavel peek para valor inicial
	pilha->peek = 0;

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
		printf("stack overflow\n");
}

int pop(Stack* s){
	if(!is_empty(s)){
		s->peek--;

	}
}

int is_full(Stack* s){
	return(s->peek == s->size);
}

int is_empty(Stack* s){
	return (s->peek == 0);
}
