#include "NodoCola.hpp"

NodoCola::NodoCola(Paquete* p, NodoCola* sig)
{
    this->paquete = p;
    siguiente = sig;
}

NodoCola::~NodoCola()
{
}



