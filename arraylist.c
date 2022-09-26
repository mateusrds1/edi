//#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "arraylist2.h"

//using namespace std;

int main(){
    struct arraylist lista;
    lista = (*inicializar(10));

    inserirElementoNoFim(&lista,1);
    inserirElementoNoFim(&lista,2);
    inserirElementoNoFim(&lista,3);
    inserirElementoNoFim(&lista,4);
    inserirElementoNoFim(&lista,5);
    inserirElementoNoFim(&lista,6);
    inserirElementoNoFim(&lista,7);
    inserirElementoNoFim(&lista,8);
    inserirElementoNoFim(&lista,9);
    inserirElementoNoFim(&lista,10);
    inserirElementoNoFim(&lista,11);
    exibirLista(&lista);

    return 0;
}
