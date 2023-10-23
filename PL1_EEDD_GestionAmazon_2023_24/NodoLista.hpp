#include <iostream>
#include "Paquete.hpp"

#ifndef NODOLISTAS_HPP
#define NODOLISTAS_HPP

using namespace std;

class NodoLista
{   
 
public:
    NodoLista(Paquete* p, NodoLista *sig = NULL, NodoLista* ant = NULL);
    ~NodoLista();
    
private:

    Paquete* paquete;
    NodoLista *siguiente;
    NodoLista *anterior;
    friend class Lista;
    
};

typedef NodoLista* pnodoLista;

#endif // NODOLISTAS_HPP
