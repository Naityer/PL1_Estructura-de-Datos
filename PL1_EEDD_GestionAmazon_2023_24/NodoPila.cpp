#include "NodoPila.hpp"

NodoPila::NodoPila(Paquete* p, NodoPila* sig)
{
    paquete = p;
    siguiente = sig;
}

NodoPila::~NodoPila()
{
}



