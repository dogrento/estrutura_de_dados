#include "utils.h"


/* */
int partition (int A[], int left, int right) {
  /*Terminar*/	
  //int pivot = right;
  //int j, 
  //    i = left-1;
  //
  //for(j=left;j<right;j++){
  //  if(A[j]<=A[pivot]){
  //    i++;

  //    // if(i!=j){
  //      swap(A,i,j);
  //    // }
  //  }
  //}

  //// if(i+1!=pivot){
  //  swap(A,i+1, pivot);
  //  pivot = i+1;
  //// }

  //return pivot;
  int pivot = right,
      i = left-1,
      j;

  printf("pivot: %d\n", A[pivot]);

  for(j = left; j < right; j++){
	printf("----- entrando no for-----\n");				  
  	printf("i: %d\n", i);
  	printf("j: %d\n", j);
	printf("comparando A[j]: %d ---- A[pivot]: %d\n", A[j], A[pivot]);				  
  	if(A[j] <= A[pivot]){
		i++;
		printf("divindo...\n");
		swap(A, j, i);
		print(A, right, "");
	}
  }
  printf("posicionando pivot...\n");
  swap(A, i+1, pivot);
  pivot = i+1;
  return pivot;
}

int random_partition(int A[], int left, int right){
  /*Terminar*/	
  int pivot = rand()%right;

  if(left <= pivot && pivot <= right && A[pivot] != A[right]){
    swap(A, pivot, right);

  }
  
  return partition(A, left, right);
}

/* */
void quick_sort (int *A, int left, int right) {
  /*Terminar*/	
  if(left <= right){
    int pivot = partition(A, left, right);
    printf("posição do pivot: A[%d]\n", pivot);
    // int pivot = random_partition(A, left, right);
    quick_sort(A, left, pivot-1);
    quick_sort(A, pivot + 1, right);
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
  int n = atoi(argv[1]);;
  int range = 10; /*intervalo de valores sorteados*/
  int *A = (int *)malloc(n * sizeof(int));

  for (i = 0; i < n; i++) {
    A[i] = rand() % (n+1); /*valores aleatórios*/
    //A[i] = i; /*ordem crescente*/
    // A[i] = n-i; /*ordem descrente*/
    // A[i] = 0; /*iguais*/
  }  

  start = clock();
  print (A, n, "Input");
  quick_sort (A, 0, n-1);
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

