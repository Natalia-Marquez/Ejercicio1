//
// Created by utec on 4/10/19.
//
#include <iostream>
#include "ejercicioss.h"

using namespace std;

int randint(int first, int last) {
    return first + rand()%(last-first+1);
}

void imprimir_arreglo(int *arreglo, int tamanio){
    for (int a=0; a<tamanio; a++){
        cout<<arreglo[a]<<" ";
    }
    cout<<endl;

}