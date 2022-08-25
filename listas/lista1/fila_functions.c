#include <stdio.h>
#include <stdlib.h>

#include "fila_struct.h"

Queue* create(int size){
	/*
	 * função que aloca a memoria para o vetor que de fato,
	 * será a fila.
	 *
	 * Params:
	 * 	int size: valor relacionado ao "tamanho da fila".
	 *
	 * Return:
	 * 	Queue q[size]: retornará uma instância da struct do tipo Queue.		
	 *
	 * */

	// declarando e inicializando ponteiro
	// do tipo Queue; alocando espaço de memoria para o vetor
	// e apontando ao endereço alocado..
	Queue* q = (Queue *)malloc(size * sizeof(Queue));

	// acessando atributos da struct via ponteiros que foram instanciadas (q) 
	// e definindo valores de "ínicio" a elas.
	q->front = 0;
	q->back = 0;
	q->size = size;

	//alocando espaço ao atributo array do tipo int*
	//com tamanho [size].
	q->array = (int *)malloc(size * sizeof(int));


	// retornando Fila inicializada
	return q;
}

int is_full(Queue* q){
	/*
	 * Função que retorna se FILA está cheia ou não.
	 *
	 * Params:
	 * 	Queue* q: Ponteiro para uma fila.
	 * 
	 * Return:
	 * 	1 se True;
	 * 	0 se False;
	 *
	 * */

	// Se a posição do primeiro elemento da fila estiver
	// a frente da posição do ultimo elemento, afinal 
	// se trata de uma fila circular,
	// retorna True
	//
	// Exemplo:
	// 	front=3; back=4(resto = 0) -> False
	// 	front=3; back=2(resto = 3) -> True
	// 	front=3; back=3(resto = 0) -> False
	
	if(q->front == (q->back + 1)% q->size)
		return 1;
	// caso contrário, retorna False.
	else
		return 0;
}

void enqueue(Queue *q, int element){
	/*
	 * Função que adiciona um elemento(int) na fila
	 * por passagem de refência..
	 *
	 * Params:
	 * 	Queue* q     : uma fila.
	 * 	int element  : elemento a ser adicionado
	 *
	 * Returns:
	 * 	*função do tipo void, sem retorno. Mas
	 * 	adiciona elemento via ponteiro à fila.
	 *
	 * */

	// Se a fila não estiver cheia:
	// 	- array na posição onde back estiver, recebe o elemento.
	// 	- atualiza a posição do back para a proxima casa (se) vazia.
	// 
	// exemplo:
	// 		back=2; size=5; resto = 3 
	// 		back=4; size=5; resto = 0(volta para a primeiro pos.
	
	if(~is_full(q)){
		q->array[q->back] = element;
		q->back = (q->back+1) % q->size;

	}
	// caso contrário, informa que a fila está cheia.
	else{
		printf("fila cheia------");
	}
}


int is_empty(Queue* q)
{
	/*
	 * Funç que retorna se fila está vazia ou não.
	 *
	 * Params:
	 * 	Queue* q: ponteiro para fila.
	 *
	 * Returns:
	 * 	1 -> True
	 * 	0 -> False	
	 * */

	// Se posição front for igual ao back, retorna True.
	if (q->front == q->back)
		return 1;

	// caso contrário
	else
		return 0;
}

int dequeue(Queue* q){
	/*
	 *Funç que remove o elemento mais "antigo"(ou o primeiro) da fila.
	 *Params:
	 *	Queue* q: ponteiro para fila.
	 *
         *Returns:	
	 *	-Se elemento foi removido, retorna o elemento que foi removido.
	 *	-Caso contrário, informa que não há nada a ser removido.
	 * */
	
	// Se fila NÃO estiver vazia:
	// 	- elemento recebe o valor que está no front;
	//	- front recebe a proxima posição (válida);
	//	- retorna o valor que foi "removido";
	if(~is_empty(q)){
		int element = q->array[q->front];
		q->front == (q->front + 1) % q->size;
		return element;
	}

	// caso contrário, informa que fila está vazia.
	else{
		printf("fila vazia --------");
	}
}

void print_array(Queue* q){
	/*
	 * Funç que printa itens da fila
	 *
	 * Params:
	 * 	Queue* q: ponteiro da fila.
	 *
	 * Return:
	 * 	funç tipo void, apenas printa no console as informações
	 *
	 * */
	int j=0;
	int tamanho = q->size;

	for(j == 0; j< tamanho; j++){
		printf("pos[%d]:%d\n", j, q->array[j]);
	}	
}



