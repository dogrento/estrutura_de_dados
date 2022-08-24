#include <stdio.h>
#include <stdlib.h>

// definir struct para fila
typedef struct{
	int front,
	    back,
	    size;
	int* array;
}Queue;

Queue* create(int size);

int is_full(Queue* q);

// função que enfileira
void enqueue(Queue *q, int element);

int is_empty(Queue* q);

//funç que remove item da lista
int dequeue(Queue* q);

void print_array(Queue* q);



