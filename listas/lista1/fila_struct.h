#include <stdio.h>
#include <stdlib.h>

// definir struct para fila
typedef struct{
	int front,
	    back,
	    size;
	int* array;
}Queue;

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
	return (q->front == q->back);
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



