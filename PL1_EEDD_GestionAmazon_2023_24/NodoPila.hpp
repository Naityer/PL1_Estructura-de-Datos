#include <iostream>
#include "Paquete.hpp"

#ifndef NODOPILA_HPP
#define NODOPILA_HPP

using namespace std;

class NodoPila
{
public:
    NodoPila(Paquete* p, NodoPila* sig = NULL);
    ~NodoPila();


private:
    Paquete* paquete;
    NodoPila* siguiente;
    friend class Pila;
};

typedef NodoPila* pnodoPila;

#endif // NODOPILA_HPP