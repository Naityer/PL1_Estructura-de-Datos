#include "Cola.hpp"

Cola::Cola()
{
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
}

void Cola::insertar(Paquete* p)
{
    pnodoCola nuevo;
    nuevo = new NodoCola(p);
    
    if(ultimo)
        ultimo->siguiente = nuevo;
    ultimo = nuevo;
    
    if(!primero)
        primero = nuevo;
    longitud++;
}

void Cola::mostrar()
{
    pnodoCola aux = primero;
    cout << "\tEl contenido de la cola es: ";
    while(aux) {
        cout <<"-> " << aux->paquete;
        aux = aux->siguiente;
    }
    cout << endl;
}

Paquete* Cola::eliminar()
{
    pnodoCola nodo;
    Paquete* p;
    nodo = primero;
    if(!nodo)
        return NULL;
    primero = nodo->siguiente;
    p = nodo->paquete;
    delete nodo;
    if(!primero)
        ultimo = NULL;
    longitud--;
    return p;
}

Paquete* Cola::verPrimero()
{
    return primero->paquete;
}
Cola::~Cola()
{
    while(primero)
        eliminar();
}


