#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#include "fila_struct.h" 


int main(){

	int size_par = 20;
	int size_impar = 20;

	Queue *fila_par = create(size_par);
	Queue *fila_impar = create(size_impar);
	srand(time(NULL));
	
	int response_par, response_impar;
	while(response_par == 0 && response_impar == 0){

		int valor = rand()%(size_par + size_impar);
		printf("%d\n", valor);

		if(valor % 2 == 0){
			enqueue(fila_par, valor);
			printf("colocando na fila par.\n");
		}
		else{
			enqueue(fila_impar, valor);
			printf("colocando na fila impar.\n");
		}
		response_par = is_full(fila_par);
		response_impar = is_full(fila_impar);

	};

	//for(int i=0; i<size; i++){
	//	enqueue(q, rand()%size);
	//}

	// colocar elemento na array
	//enqueue(q, 0);
	//enqueue(q, 1);
	
	//remove o primeiro item da lista caso não esteja vazia
//	int elem = dequeue(q);
//	printf("removi %d do array.", elem);
//
	printf("array par: ");
	print_array(fila_par);
	printf("array impar: ");
	print_array(fila_impar);


	return 0;
}



