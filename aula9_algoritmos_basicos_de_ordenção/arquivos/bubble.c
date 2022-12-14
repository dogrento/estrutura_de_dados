#include "utils.h"

/* */
void bubble_sort (int *A, int n) {
  /*Terminar*/	
  int troca = 0;
  if(n==1)
    return;
  //int aux;
  // // ordenando utilizando funções fornecidas pelo utils.h
  // while(!check(A, n, TRUE)){
  //   for(int i=0; i<n; i++){
  //     if(A[i] > A[i+1]){
  //       swap(A, i, i+1);
  //     }
  //   }
  // }  

  // ordenando de um jeito cru
  //for(int i = 0; i < n; i++){
  //  for(int j = 0; j< n-1; j++){
  //    if(A[j]>A[j+1]){
  //      // algoritmo de troca simples
  //      aux = A[j];
  //      A[j]=A[j+1];
  //      A[j+1]=aux;
  //    }
  //  }
  //}
  for(int i = 0; i < n; i++){
	printf("------entrando no for: %d -----\n", i);
  	printf("i: %d\n", i);
  	printf("n-i-1: %d\n", n-i-1);
	printf("\n");
	for(int j = 0; j < n-i-1; j++){
  		printf("j: %d\n", j);
		printf("Comparando elemento %d --- %d\n", A[j], A[j+1]);
		if(A[j] > A[j+1]){
			troca++;
			swap(A, j, j + 1);
			print(A, n, "troca");
		}
	}
  }
  printf("Houve %d trocas.\n", troca);
}

/* */
int main (int argc, char *argv[]) {

  clock_t start, end;
  double elapsed_time;
  srand(time(NULL));

  if (argc < 2) {
    printf("run: %s [size]\n", argv[0]);
    exit(1);
  }

  int i;
  int n = atoi(argv[1]);;
  int range = 10; /*intervalo de valores sorteados*/
  int *A = (int *)malloc(n * sizeof(int));

  for (i = 0; i < n; i++) {
    A[i] = rand() % (n+1); /*valores aleatórios*/
  }  

  start = clock();
  print (A, n, "Input");
  bubble_sort (A, n);
  print (A, n, "Sorted");
  end = clock();
  elapsed_time = (end - start)/(double)CLOCKS_PER_SEC;
  printf("Running time: %.2f\n", elapsed_time);
  if (!check(A, n, TRUE)) {
    printf("Error: non-ascending order!\n");
  }
  free (A);
  return 0;
}

