#include "utils.h"

/* */
void selection_sort_recursive (int *A, int n) {
  /*Terminar*/	
  printf("\nEntrando na função!\n");
  printf("n=%d\n", n);

  if(n==1){
    printf("n==1\n");
    return;
  }
  selection_sort_recursive(A, n-1);
  printf("n=%d\n", n);
  int i=0; 
  while(i<n){
    printf("i:A[%d]=%d\n", i, A[i]);
    i++;
  }
  // for(i=0; i<n;i++){
  //   printf("i:A[%d]=%d\n", i, A[i]);
  //   if(A[i])
    // printf("position: %d\n", position);
    // printf("A[%d]=%d\n", position, A[position]);

    // if(A[i]<A[position]){
    //   position = i;
    // //   // printf("A[i] é menor que A[n-1]\n");
    //   printf("%d < %d\n",A[i], A[position]);
    //   printf("Atualizando: position -> %d\n", position);
    // }
    // if(position!=i){
    //   swap(A,position,n-n);
    //   printf("swapping?\n");
    // }
  // }
  //     position=0;

  // printf("A[n-1]=%d\n", A[n-1]);
  // printf("------------Entrando no LOOP-------------\n");
  // printf("min position -> %d\n", position);
  // print(A, n, "DEBUG");
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
  selection_sort_recursive (A, n);
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

