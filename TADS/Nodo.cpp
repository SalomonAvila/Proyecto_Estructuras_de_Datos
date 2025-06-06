/*********************************************************************************
-Nombres: Gabriel Jaramillo, Salomon Avila, Tomas Silva, Juan Pabon, Angel Morales
-Pontificia Universidad Javeriana
-Proyecto de Estructuras de Datos; Entrega 2
-Temas: TADs, Compilacion Modular, Contenedores, Estructuras Lineales
*********************************************************************************/
#include <vector>
#include <utility>
#include "Nodo.h"
using namespace std;

/**
 * @brief Constructor por defecto 
 * 
 */
Nodo::Nodo(){
    frecuencia = -1;
    valor = -1;
    esHoja = false;
    nodoIzquierda = nullptr;
    nodoDerecha = nullptr;
}

/**
 * @brief Destructor por defecto
 * 
 */
Nodo::~Nodo(){
    delete this;
}

/**
 * @brief Getters y Setters
 * 
 *
 */
Nodo* Nodo::getNodoDerecha(){
    return nodoDerecha;
}

Nodo* Nodo::getNodoIzquierda(){
    return nodoIzquierda;
}

void Nodo::setEsHoja(bool estado){
    esHoja = estado;
}

bool Nodo::getEsHoja(){
    return esHoja;
}

void Nodo::setFrecuencia(int frec){
    frecuencia = frec;
}

int Nodo::getFrecuencia(){
    return frecuencia;
}

void Nodo::setNodoDerecha(Nodo *nod){
    nodoDerecha = nod;
}

void Nodo::setNodoIzquierda(Nodo *nod){
    nodoIzquierda = nod;
}

 void Nodo::setValor(int val){
    valor = val;
 }

 int Nodo::getValor(){
    return valor;
 }