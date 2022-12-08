#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool buscarRec(struct noBst* raiz, int val);
void inserirNoRec(struct noBst** raiz, int val);
int main(){
    struct noBst *raiz = NULL;
    inserirNoRec(&raiz,12);
    inserirNoRec(&raiz,8);
    inserirNoRec(&raiz,14);
    inserirNoRec(&raiz,4);
    inserirNoRec(&raiz,10);
    inserirNoRec(&raiz,18);
    inserirNoRec(&raiz,2);
    inserirNoRec(&raiz,6);
    inserirNoRec(&raiz,20);

    bool i = buscarRec(raiz,20);
    printf("%d", i);

    return 0;
}

struct bst {
    struct noBst* raiz;
    int tam;
};

struct noBst {
    int val;
    struct noBst* esq;
    struct noBst* dir;
};

/**
 * Funcao que aloca uma nova bst.
 **/
struct bst* alocarBst() {
    struct bst* bst = ( struct bst* ) malloc ( sizeof ( struct bst));
    	bst -> raiz = NULL;
}

/**
 * Funcao que aloca um novo noBst.
 **/
struct noBst* alocarNovoNo(int val) {
    struct noBst* novoNo = ( struct noBst* ) malloc ( sizeof( struct noBst ));
    	novoNo-> val = val;
    	novoNo-> esq = NULL;
    	novoNo-> dir = NULL;
    	return novoNo;
    	}
//}

/**
 * Funcao recursiva para inserir novo no na arvore passada
 * atraves da raiz.
 **/
void inserirNoRec(struct noBst** raiz, int val) {
  if ((*raiz) == NULL)
    (*raiz) = alocarNovoNo(val);
  else {
    if (val > (*raiz)->val)
      inserirNoRec(&(*raiz)->dir, val);
    else
      inserirNoRec(&(*raiz)->esq, val);
  }
}


/**
 * Funcao iterativa para inserir novo no na arvore passada
 * atraves da raiz.
 **/
void inserirNoIt(struct noBst* raiz, struct noBst* novoNo) {
    //IMPLEMENTAR
}

/**
 * Fachada para função de insercao.
 **/
void inserir(struct bst* bst, int val, bool rec) {
    //IMPLEMENTAR
}

/**
 * Funcao recursiva para buscar v na arvore passada
 * atraves da raiz.
 **/
bool buscarRec(struct noBst* raiz, int val) {
  if (raiz == NULL) {
    return false;
  } else {
    if (raiz->val == val)
      return true;
    else if (raiz->val > val)
      return buscarRec(raiz->esq, val);
    else
      return buscarRec(raiz->dir, val);
  }
}


/**
 * Funcao iterativa para buscar v na arvore passada
 * atraves da raiz.
 **/
bool buscarIt(struct noBst* raiz, int v) {
    //IMPLEMENTAR
}

/**
 * Fachada para função de busca.
 **
bool buscar(struct bst* bst, int val, bool rec) {
    //IMPLEMENTAR
}*/

void navegar(struct noBst* raiz) {
    if(raiz != NULL){
        //PRE-ORDEM
        printf("%d", raiz->val);
        navegar(raiz->esq);
        navegar(raiz->dir);
        //EM-ORDEM
        navegar(raiz->esq);
        printf("%d", raiz->val);
        navegar(raiz->dir);
        //POS-ORDEM
        navegar(raiz->esq);
        navegar(raiz->dir);
        printf("%d", raiz->val);
    }
}

/**
 * Funcao rec para navegacao em-ordem.
 **/
void navEmOrdem(struct noBst* raiz) {

}

/**
 * Funcao rec para navegacao pre-ordem.
 **/
void navPreOrdem(struct noBst* raiz) {
    if(raiz != NULL){
        printf("%d", raiz->val);
        navegar
    }
}

/**
 * Funcao rec para navegacao pos-ordem.
 **/
void navPosOrdem(struct noBst* raiz) {
    //IMPLEMENTAR
}

/**
 * Funcao rec para obter valor minimo.
 **/
int min(struct noBst* raiz) {
    struct noBst* atual = raiz;
    if( raiz == NULL){
    	printf(" Arvore vazia\n");
    }
    while( raiz->esq != NULL){
    	raiz = raiz->esq;
    	}
    	return raiz->val;
}

int minRec(struct noBst *raiz){
    if(raiz == NULL) printf(" Arvore vazia\n");
    else if(raiz->esq != NULL)
        return minRec(raiz->esq);
    return raiz->val;
}

/**
 * Funcao rec para obter valor maximo.
 **/
int max(struct noBst* raiz) {
    struct noBst* atual = raiz;
    if( raiz == NULL){
    	printf(" Arvore vazia\n");
    }
    while( raiz->dir != NULL){
    	raiz = raiz->dir;
    	}
    	return raiz->val;
}
int maxRec(struct noBst *raiz){
    if(raiz == NULL) printf(" Arvore vazia\n");
    else if(raiz->dir != NULL)
        return minRec(raiz->dir);
    return raiz->val;
}
/**
 * Funcao rec para obter altura da arvore.
 **/
int altura(struct noBst* raiz) {
    //IMPLEMENTAR
}

/**
 * Funcao rec para remover da arvore no com valor especifico.
 **/
struct noBst* removerRec(struct noBst* raiz, int val) {
    //IMPLEMENTAR
}

/**
 * Fachada para funcao de remocao.
 */
void remover(struct bst* bst, int val) {
    //IMPLEMENTAR
}
