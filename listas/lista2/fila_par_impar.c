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

		int valor = rand()%(100);
		printf("%d\n", valor);

		if(valor % 2 == 0){
			enqueue(fila_par, valor);
		}
		else{
			enqueue(fila_impar, valor);
		}
		response_par = is_full(fila_par);
		response_impar = is_full(fila_impar);

	};
	
	printf("Fila par:\n");
	print_array(fila_par);
	printf("\n");
	printf("Fila impar:\n");
	print_array(fila_impar);

	return 0;
}



