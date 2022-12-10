#include "utils.h"

/* */
void selection_sort (int *A, int n) {
  /*Terminar*/	
  int min, i, j;
  if(n==1)
    return;
  //for(i=0; i<n-1;i++){
  //  position = i;
  //  for(j=i+1;j<n;j++){
  //    if(A[position]>A[j]){
  //      position = j;
  //    }
  //  }
  //  if(position!=i){
  //    swap(A,position,i);
  //  }
  //}
  for(i=0; i<n;i++){
	  printf("-----entrando no for------\n");
	  min = i;
	  for(j=i+1; j < n; j++){
		  printf("comparando min: %d --- atual:%d\n", A[min], A[j]);
		  if(A[min] > A[j]){
		  	min = j;
			printf("definindo novo min... %d\n", A[min]);  
		  }
	  }
	  printf("min: %d\n", A[min]);
	  if(min!=i){
		printf("trocando...\n");  
	  	swap(A, min, i);
	  }
	  print(A, n, "");
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
  selection_sort (A, n);
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

