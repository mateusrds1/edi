#include <stdio.h>
#include <stdlib.h>

struct arraylist{
    int* vetor;
    int qtdade;
    int capacidade;
};

struct arraylist* inicializar(int capacidade) {
    struct arraylist* lista = (struct arraylist*)malloc(sizeof(struct arraylist));
    lista->vetor = (int*)calloc(capacidade, sizeof(int));
    lista->qtdade = 0;
    lista->capacidade = capacidade;
    return lista;
}

int obterElementoEmPosicao(struct arraylist* lista, int posicao) {
    if(posicao >= lista->vetor[0] && posicao <= lista->qtdade){
      return lista->vetor[posicao];
    }
    return 0;
}

//sempre que surgir a necessidade de reatribuição, como eh o cado de duplicarCapacidade
//nós precisaremos de dereferencing, para que a variável original lista seja atualizada
//note que inserção é a operação que pode necessitar chamar duplicarCapacidade
void duplicarCapacidade(struct arraylist* lista) {
    lista->vetor = (int*)realloc(lista -> vetor, 2 * lista->capacidade * sizeof(int));
    lista -> capacidade = 2 * lista -> capacidade;
}

//como eu não consigo dinamicamente saber a qtdade de elementos alocado para meu ponteiro de lista
//então uso a variável capacidade para armazenar este valor
void inserirElementoNoFim(struct arraylist* lista, int valor) {
	//verificar-se está lotado
	if(lista->qtdade == lista->capacidade){
        duplicarCapacidade(lista);
	}
	lista -> vetor[lista -> qtdade] = valor;
	lista -> qtdade++;
}///OK

void inserirElementoEmPosicao(struct arraylist* lista, int valor, int posicao) {
	//verificar se posicao
	if(posicao>=lista->vetor[0] && posicao <= lista->qtdade){
      	//verificar se está lotado
        if(lista->qtdade == lista->capacidade){
            duplicarCapacidade(lista);
        }
        duplicarCapacidade(lista);
        for(int i = lista->qtdade; i>posicao; i--){
            lista->vetor[i]=lista->vetor[i-1];
        }
        lista->vetor[posicao] = valor;
        lista ->qtdade++;
    }
}///OK


void atualizarElemento(struct arraylist* lista, int valor, int posicao) {
	if(posicao >= 0 && posicao <= lista->qtdade){
        lista->vetor[posicao] = valor;
	}
}///OK


void removerElementoNoFim(struct arraylist* lista) {
	lista->qtdade--;
}///OK

void removerElementoEmPosicao(struct arraylist* lista, int posicao) {
	for(int i = posicao;i<lista->qtdade;i++){
        lista->vetor[i] = lista->vetor[i+1];
	}
	lista->qtdade--;
}///OK

void exibirLista(struct arraylist* lista) {
    printf("[");
    for (int i = 0; i < lista->qtdade; i++) {
        printf("%d", lista->vetor[i]);
        if (i < lista->qtdade - 1) {
            printf(", ");
        }
    }
    printf("]");
}
