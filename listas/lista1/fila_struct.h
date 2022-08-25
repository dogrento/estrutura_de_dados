#include <stdio.h>
#include <stdlib.h>

// definindo struct para fila
/*
 * Atributos:
 * 	int front: posição do primeiro elemento (referente a fila)
 * 	int back: posição do último elemento
 * 	int size: quantidades de elementos da fila
 * 	int* array: ponteiro referende ao vetor que será alocado
 * */
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



