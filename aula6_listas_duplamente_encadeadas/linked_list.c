
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

    // definindo anterior para null
    node->prev = NULL;

    // criando a conexao entre os nodes
    if(l!=NULL){
        l->prev = node;
    }

    // retornando a nova lista
    return node;
}

List* remove_element(List* l, int element){

    // verifica se o elemento está na lista
    //e atribui o endereço à variável caso exista 
	List* node = search_element(l, element);

    // se não houver o elemento na lista, 
    //node será null portanto retorna a lista sem
    //que haja modificação
    if(node == NULL){
        return l;
    }

    // criar dois ponteiros temporários para 
    //receberem prev e next
    List* tmpPrev = node->prev;
    List* tmpNext = node->next;

    // se a cabeça da lista for igual 
    //ao elemento a ser removido,
    if(l==node){

        // lista recebe o ponteiro tmp next
        l=tmpNext;
    }

    // fazer as conexão entre os nós 
    
    // se ponteiro com next não for null
    if(tmpNext != NULL){
        //vai apontar para o previous do elemente a ser removido
        tmpNext ->prev = tmpPrev;
    }

    //se ponteiro com prev não for null
    if(tmpPrev!= NULL){
        tmpPrev->next=tmpNext;
    }

    free(node);

}

List* search_element(List* l, int element){

    // se lista não for null
    if(l != NULL){

        // cria um ponteiro temporario faz ele apontar a lista
        List* tmp=l;

        // percorre lista até null
        while(tmp != NULL){

            // se data for igual ao elemento que busco, retorna o ponteiro daquela posição
            if(tmp->data == element){
                return tmp;
            }

            // atualiza tmp para next
            tmp = tmp->next;
        }
    }

    // caso lista seja NULL ou elemento não foi encontrado, retorne NULL
    return NULL;
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
