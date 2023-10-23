#include "NodoLista.hpp"

NodoLista::NodoLista(Paquete* p, NodoLista* sig, NodoLista* ant)
{
    this->paquete = p;
    siguiente = sig;
    anterior = ant;
}

NodoLista::~NodoLista()
{
}

