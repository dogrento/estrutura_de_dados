#include <stdio.h>

typedef struct{
	int peek,
	    size;

	int* array;
}Stack;

Stack* create(int size);
void destroy(Stack* s);
void push(Stack* s, int element);
int pop(Stack* s);
int is_empty(Stack* s);
int is_full(Stack* s);



