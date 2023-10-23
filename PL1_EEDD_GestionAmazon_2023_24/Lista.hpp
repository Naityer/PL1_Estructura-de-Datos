#include "NodoLista.hpp"

#ifndef LISTA_HPP
#define LISTA_HPP

class Lista
{
public:
    Lista (); 
    ~Lista ();
    
    void insertarNodo(Paquete* p, char c) ;
    void borrarNodo(char c) ;
    bool listaVacia();
    void recorrerLista(bool orden); // 1-True = ASCENDENTE 0-False = DESCENDENTE
    void esSiguiente() ;
    void esAnterior();
    void esPrimero();
    void esUltimo();
    bool esActual();
    Paquete* valorActual();
    int getLongitud();
    void setLogitud(int v);
    void getPrimerElemento();

private:
    pnodoLista primero, actual, final;
    int longitud;
};



#endif // LISTA_HPP
