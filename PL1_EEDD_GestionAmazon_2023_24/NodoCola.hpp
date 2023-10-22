#include <iostream>
#include "Paquete.hpp"

#ifndef NODOCOLA_HPP
#define NODOCOLA_HPP

using namespace std;

class NodoCola
{
public:
    NodoCola(Paquete* p, NodoCola* sig = NULL);
    ~NodoCola();

private:

    Paquete* paquete;
    NodoCola* siguiente;
    friend class Cola;

};

typedef NodoCola* pnodoCola;

#endif // NODOCOLA_HPP