#include "NodoLista.hpp"

#ifndef LISTA_HPP
#define LISTA_HPP

class Lista
{
public:
    Lista (); 
    ~Lista ();
    
    void insertarNodo(Paquete* p, char c) ;
    void buscarElemento(char c) ;
    bool listaVacia();
    void recorrerLista(bool orden); // 1-True = DESCENDENTE 0-False = ASCENDENTE
    void esPrimero();
    void esUltimo();
    int getLongitud();
    void setLogitud(int v);
    
    Paquete* valorActual();
private:
    pnodoLista primero, actual, final;
    int longitud;
};



#endif // LISTA_HPP
