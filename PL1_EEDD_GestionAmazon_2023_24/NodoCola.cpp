#include "NodoCola.hpp"

NodoCola::NodoCola(Paquete* p, NodoCola* sig)
{
    paquete = p;
    siguiente = sig;
}

NodoCola::~NodoCola()
{
}



