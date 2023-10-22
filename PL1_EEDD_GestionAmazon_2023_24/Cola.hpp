#include <NodoCola.hpp>

class Cola
{
public:
    Cola();
    ~Cola();
    
    void insertar(Paquete* p);
    Paquete* eliminar();
    void mostrar();
    Paquete* verPrimero();
    
    int getLongitud();
    pnodoCola getPrimero();

private:
    pnodoCola primero, ultimo;
    int longitud;
};