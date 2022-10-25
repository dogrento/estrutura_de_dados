#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int particione(int A[], int e, int d);
void print(int A[],int n);
int *criar_lista(int size);
void quicksort(int A[], int e, int d);

int main(){
	printf("seu merda.\n");
	int size = 5;
	int* lista = criar_lista(size);

	print(lista, size);    

	int e = 0;
	int d = size-1;
	int partition;
	quicksort(lista, e, d);
	print(lista, size);    

	free(lista);
	
	return 0;
}

int *criar_lista(int size){
	int *lista = (int *)malloc(size * sizeof(int));
	srand(time(NULL));

	for(int i=0; i<size; i++){
		lista[i]=rand()%100;
	}

	return lista;
}

void quicksort(int A[], int e, int d){
	if(e<d){
		int pivot = particione(A, e, d);
		quicksort(A, e, pivot-1);
		quicksort(A, pivot+1, d);
	}
}


int particione(int A[], int e, int d){
	// pivot recebe posição do fim da lista.
	int pivot = d;
	// i recebe a posição que antecede o primeiro elemento que está a esquerda da lista, começo da lista.
	int j, i = e - 1;
	int aux;

	// Para j começando pela esquerda e indo até o elemento que antecede o pivot
	for(j=e; j<d; j++){
		// printf("A[pivot]: %d\n", A[pivot]);
		// se o elemento que está em j for menor ou igual ao elemento do pivot,
		if(A[j]<=A[pivot]){
			// atualiza i para o prox elemento,
			i = i+1;
			// os indices não estiverem no mesmo lugar,
			if(i!=j){
				// troca o elemento que está em i com a posição do j
				// para que assim separe os elementos que são maiores que
				// o pivot, fique a direita e os menores fiquem a esquerda.
				aux = A[i];
				A[i] = A[j];
				A[j] = aux;
			}
		}
	}

	// Se os indices de A[i+1] for diferente do pivot
	if(i+1!=pivot){
		// troque o primeiro elemento do "grupo" do maiores que o pivot (direita)
		// com o pivot, para que assim, fique dividido os grupos.
		aux = A[i+1];
		// A[pivot] = A[i+1];
		A[i+1] = A[pivot];
		A[pivot] = aux;
		pivot = i+1;
	}

	// retorne a posição do pivot
	return pivot;
}

void print(int A[],int n){
	printf("\nLista: {");
	for(int i = 0; i < n; i++){
		if(i!=n-1){
		printf("%d, ", A[i]);
		}
		else{
			printf("%d",A[i]);
		}
	}
	printf("}\n\n");
}
