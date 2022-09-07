#include "linked_list.h"

int main(){

    List* list = create();

    list = insert_front(list, 1);
    list = insert_front(list, 2);
    list = insert_front(list, 3);
    list = insert_front(list, 4);
    print(list);

    destroy(list);
    return 0;
}