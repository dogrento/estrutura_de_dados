#include "utils.h"

/* */
void insertion_sort (int *A, int n) {
  /*Terminar*/	
  int i, j, key;
 // for(i=1; i<n; i++){
 //   key = A[i];
 //   j =i-1;

 //   while(j>= 0 && A[j] > key){
 //     A[j+1] = A[j];
 //     j--;
 //   }
 //   A[j+1] = key;
 // }
	for(i = 1; i < n; i++){
		printf("-----entrando no for-----\n");
		key = i;
		printf("key: %d\n", A[key]);
		for(j = i; j > 0; j--){
			printf("A[j]: %d\n", A[j]);
			printf("comparando: A[key]-> %d ---- A[j-1]:%d\n", A[key], A[j-1]);
			if(A[key] < A[j-1]){
				printf("trocando... \n");
				swap(A, key, j-1);
				key = j-1;
				print(A, n, "");
			}
			else{
				break;
			}
		}
	} 
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
  int n = atoi(argv[1]);
  int range = 10; /*intervalo de valores sorteados*/
  int *A = (int *)malloc(n * sizeof(int));

  for (i = 0; i < n; i++) {
    A[i] = rand() % (n+1); /*valores aleatórios*/
  }  

  start = clock();
  print (A, n, "Input");
  insertion_sort (A, n);
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

