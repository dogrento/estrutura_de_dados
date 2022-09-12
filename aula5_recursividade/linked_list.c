
#include"linked_list.h"

List* create(){
    // inicializa e popula vetor com valor null
    return NULL;
}

List* insert_front(List* l, int element){
    // aloca mem para um nó com o tamanho do conteudo apontado
    // vindo do parametro 
    List* node = (List*) malloc(sizeof(List));

    // armazena o elemento na lista tmp 
    node->data = element;

    // linkando o proximo da lista 
    node->next = l;

    // retornando a nova lista
    return node;
}

List* remove_element(List* l, int element){
	
    // criando ponteiros temporarios
    List *tmp = l,
         *p = NULL;

    // buscando na lista o elemento a ser retirado -
    // enquanto lista temporaria for diferente de NULL
    // e o elemento da lista temporario for diferente
    // do elemento escolhido:
    while(tmp != NULL && tmp->data != element){
        // ponteiro aux recebe tmp
        p = tmp;
        // tmp recebe o proximo do node
        tmp = tmp->next;
    }
    if(tmp = NULL)
        return l;
    
    if(p=NULL)
        l = tmp->next;

    else
        p->next = tmp->next;

    free(tmp);

    return l;
}

void destroy(List *l){
    while(l!=NULL){
        List *tmp = l->next;
        free(l);
        l=tmp;
    }
}

void print(List *l){
    List *tmp;
    for(tmp = l; tmp!= NULL; tmp= tmp->next){
        printf("data: %d\n", tmp->data);
    }
}
