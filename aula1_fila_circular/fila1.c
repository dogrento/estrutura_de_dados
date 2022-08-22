#include <stdio.h>
#include <stdlib.h>

// função que enfileira
void enqueue(int *array, int *back, int size, int element){

	if(*back < size){
		array[*back] = element;
		*back++;
	}
	else{
		printf("fila cheia------");
	}
}

//funç que remove item da lista
int dequeue(int *array, int *front, int size){
	if(*front < size){
		int element = array[*front];
		*front++;
		return element;
	}
	else{
		printf("fila vazia --------");
	}
}

int main(){
	// FILA
	int front = 0;
	int back = 0;
	int size = 3;

	//alocar memo para array
	int *array = (int *)malloc(size * sizeof(int));

	// colocar elemento na array
	enqueue(array,&back, size, 0);
	enqueue(array, &back, size, 1);

	int elem = dequeue(array, &front, size);
	printf("removi %d do array.", elem);

	return 0;
}



