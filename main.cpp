#include <iostream>
#include "ejercicioss.h"

using namespace std;
int main() {
    int tamanio, posicion, *ptrArreglo=nullptr, nuevonumb;
    cout<<"Ingrese el numero de elementos: ";
    cin>>tamanio;

    int*arreglo= new int [tamanio];
    for (int i = 0; i < tamanio; ++i)
        arreglo[i] = randint(0, 999);

    imprimir_arreglo (arreglo, tamanio);

    cout<<"ingrese la posición a cambiar (-1 para finalizar): ";
    cin>>posicion;
    while (posicion != -1){
    ptrArreglo=&arreglo[posicion];

    cout<<"Ingrese el nuevo valor: ";
    cin>>nuevonumb;

    *ptrArreglo=nuevonumb;

    imprimir_arreglo(arreglo, tamanio);
    cout<<"ingrese la posición a cambiar (-1 para finalizar): ";
    cin>>posicion;
    }

    return 0;
}