#include <stdlib.h>
#include <stdio.h>

struct no {
    int val;
    struct no* prox;
};

struct linkedlist {
    struct no* cabeca;
    int qtdade;
};

struct linkedlist* inicializar() {
    struct linkedlist* lista = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    lista->cabeca = NULL;
    //lista->cabeca = (int*)calloc(qtdade, sizeof(int));
    //lista->capacidade
    lista->qtdade = 0;
    return lista;
}

struct no* alocarNovoNo(int valor) {

    struct no* novoNo = (struct no*)malloc(sizeof(struct no));
    novoNo->prox = NULL;
    novoNo->val = valor;

    return novoNo;
}

void inserirElementoNoFim(struct linkedlist* lista, int valor) {
    struct no *aux = lista;
        for(int i=0 ; i<lista->qtdade ; i++){
            aux = aux->prox;
            if(aux->prox==NULL){
                struct no* novoNo = alocarNovoNo(valor);
                aux->prox = novoNo;
                novoNo->prox = NULL;
        }

    }
    lista->qtdade++;
}

void inserirElementoNoInicio(struct linkedlist* lista, int valor) {
    /*if(!malloc(sizeof(struct linkedlist))){
        struct linkedlist* lista = (struct linkedlist*)malloc(sizeof(lista));
    }*/


    struct no* novoNo = alocarNovoNo(valor);
    struct no* aux = lista->cabeca;
    lista->cabeca = novoNo;
    novoNo->prox = aux;
    /*if(lista->cabeca==NULL){
        lista->cabeca=novoNo;
    }
    else{
        novoNo->prox = aux->prox;
        lista->cabeca = novoNo;
    }*/
    free(aux);
    free(novoNo);
    lista->qtdade++;
    /*
    struct linkedlist* aux = lista;
    lista = novoNo;
    novoNo->prox = aux;
    free(aux);

    lista* novo = (lista*)malloc(sizeof(lista));
    novo->val=valor;
    novo->prox=lista;*/
}

void inserirElementoEmPosicao(struct linkedlist* lista, int valor, int posicao) {
     struct no* aux = lista->cabeca;
     for(int i=0 ; i<posicao ; i++){
            aux = aux->prox;
            if(i == posicao){
                struct no* novoNo = alocarNovoNo(valor);
                novoNo = aux;
                aux->prox = novoNo;
            }
     }
     //lista = *aux;

}

/*int obterElementoEmPosicao(struct linkedlist* lista, int posicao) {
        struct no* aux = lista->cabeca;
        if(posicao == 0){
            return 0;
        }
        for(int i=0 ; i<=posicao ; i++){
            aux = aux->prox;
            if(i==posicao){
                return 1;
            }
}*/

void removerElementoEmPosicao(struct linkedlist* lista, int posicao) {
    if(posicao >= 0 && posicao <= lista->qtdade){
    /*cont;
    elementoremoção;
    aux;
    novosotado;
    free(aux);*/
    }
}

void imprimirLista(struct linkedlist* lista) {
    //usamos o aux para percorrer a lista
    if (lista->cabeca != NULL) {
        struct no* aux = lista->cabeca;
        //navega partindo da cabeça até chegar NULL
        printf("[");
        do {
            printf("%d", aux->val);
            aux = aux->prox;
            if (aux != NULL) {
                printf(", ");
            }
        } while (aux != NULL);
        printf("]");
    }
    else {
        printf("A lista estar vazia!");
    }
}
