#include <iostream>
#include <Paquete.hpp>

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