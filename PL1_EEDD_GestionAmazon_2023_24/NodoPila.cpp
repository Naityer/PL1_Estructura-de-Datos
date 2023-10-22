#include "NodoPila.hpp"

NodoPila::NodoPila(Paquete* p, NodoPila* sig)
{
    this->paquete = p;
    siguiente = sig;
}

NodoPila::~NodoPila()
{
}



