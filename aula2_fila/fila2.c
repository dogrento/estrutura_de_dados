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
	q->size = 3;

	//alocar memo para array
	q->array = (int *)malloc(size * sizeof(int));

	return q;
}

// função que enfileira
void enqueue(Queue *q, int element){

	if(q->back < q->size){
		q->array[q->back] = element;
		q->back++;
	}
	else{
		printf("fila cheia------");
	}
}

//funç que remove item da lista
int dequeue(Queue* q){
	if(q->front < q->size){
		int element = q->array[q->front];
		q->front++;
		return element;
	}
	else{
		printf("fila vazia --------");
	}
}

int main(){

	Queue *q = create(4);

	// colocar elemento na array
	enqueue(q, 0);
	enqueue(q, 1);

	int elem = dequeue(q);
	printf("removi %d do array.", elem);

	return 0;
}



