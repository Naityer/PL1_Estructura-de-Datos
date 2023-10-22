#include <NodoPila.hpp>

class Pila
{
public:
    Pila();
    ~Pila();
    
    void insertar(Paquete* p);
    Paquete* extraer();
    Paquete* cima();
    void mostrar();
    int getLongitud();
    
private:

    pnodoPila ultimo;
    int longitud;
};

