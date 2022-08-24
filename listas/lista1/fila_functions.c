#include <stdio.h>
#include <stdlib.h>

#include "fila_struct.h"

Queue* create(int size){

	// FILA
	Queue* q = (Queue *)malloc(size * sizeof(Queue));
	q->front = 0;
	q->back = 0;
	q->size = size;

	//alocar memo para array
	q->array = (int *)malloc(size * sizeof(int));

	return q;
}

int is_full(Queue* q){
	if(q->front == (q->back + 1)% q->size)
		return 1;
	else
		return 0;
}

// função que enfileira
void enqueue(Queue *q, int element){

	if(~is_full(q)){
		q->array[q->back] = element;
		q->back = (q->back+1) % q->size;

	}
	else{
		printf("fila cheia------");
	}
}


int is_empty(Queue* q)
{
	if (q->front == q->back)
		return 1;
	else
		return 0;
}

//funç que remove item da lista
int dequeue(Queue* q){
	if(~is_empty(q)){
		int element = q->array[q->front];
		q->front == (q->front + 1) % q->size;
		return element;
	}
	else{
		printf("fila vazia --------");
	}
}

void print_array(Queue* q){
	int j=0;
	int tamanho = q->size;
	printf("q->size: %d\n", q->size);
	printf("q->array: %d\n", q->array[4]);
	printf("%d", j);
	for(j == 0; j< tamanho; j++){
		printf("pos[%d]:%d\n", j, q->array[j]);
	}	
}



