#include <stdio.h>
#include <stdlib.h>
//#include <iostream.h>
#include "linkedlis2.h"

int obterElementoEmPosicao(struct linkedlist* lista, int posicao);

int main(){
    struct linkedlist lista;

    lista = (*inicializar());
   // inserirElementoNoInicio(&lista,1);
    /*inserirElementoNoFim(&lista,2);
    inserirElementoNoFim(&lista,3);
    inserirElementoNoFim(&lista,4);
    inserirElementoNoFim(&lista,5);*/

    imprimirLista(&lista);

    return 0;
    }

