#include <time.h>
#include "../linked_list.h"

// void swap_elements(List* data, List* next){
//     int tmp = data->data;
//     data->data = next->data;
//     next->data = tmp;
// }

// List* sort_list(List* l){
//     int swapped, i; 
//     List *ptr1; 
//     List *lptr = NULL; 
  
//     /* Checking for empty list */
//     if (l == NULL) 
//         return l; 
  
//     do
//     { 
//         swapped = 0; 
//         ptr1 = l; 
  
//         while (ptr1->next != lptr) 
//         { 
//             if (ptr1->data > ptr1->next->data) 
//             { 
//                 swap_elements(ptr1, ptr1->next); 
//                 swapped = 1; 
//             } 
//             ptr1 = ptr1->next; 
//         } 
//         lptr = ptr1; 
//     } 
//     while (swapped); 
// } 





// List* popula_lista(List* l, int size){

//     srand(time(NULL));

//     for (int i = 0; i<size; i++){
//         l = insert_front(l, rand()%size);
//     }
//     return l;
// }
List* merge(List* a, List* b){
    List* c = NULL;

    while(a!=NULL || b!=NULL){
        if(a!=NULL){
            
        }
    }
    return c;
}

int main(){

    int k;
    List* a = create();
    List* b = create();
    List* c = create();

    for (k = 10; k >= 0; k -= 2)
        a = insert_front (a, k);
    for (k = 19; k >= 0; k -= 2) 
        b = insert_front (b, k);

    print(a);
    print(b);
    c = merge(a,b);
    print(c);

    destroy(a);
    destroy(b);
    
    return 0;
}