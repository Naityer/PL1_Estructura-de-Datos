#include <iostream>
#include "Pila.hpp"
#include "Cola.hpp"
//#include "Lista.hpp"
//#include "Arbol.hpp"

class Gestor
{
public:
    Gestor();
    void genera12Pedidos(); // A
    void muestraPedidos();  // B
    void borraPedidosPila(); // C
    void encolarPedidos(); // D
    void muestraPedidosestacionsAyB(); // F
    void muestraPedidosestacionsCyD(); // G
    void borraPedidosColas(); // H
    void enlistarPedidos(); // I
    void muestraPedidosEstandar(); //J
    void muestraPedidosUrgentes(); // K
    void buscarPedidos(); // L
    void reiniciar(); // M
    ~Gestor();
    
//    PedidosEnPila()
//    PedidosEnestacionA() 
//    PedidosEnestacionB() 
//    PedidosEnestacionC() 
//    PedidosEnestacionD()
//    PedidosEnListaEstandar()
//    PedidosEnListaUrgentes()
//    PedidosEnArbol()
    
private: 

//    bool usadosA[49];
//    bool usadosB[49];
//    bool ocupadasP[99];
//    bool ocupadasS[99];
//    int IDsA[49];
//    int IDsB[49];
//    int habPrimPlanta[99];
//    int habSegPlanta[99];
    Pila* pila;
    Cola* estacionA;
    Cola* estacionB;
    Cola* estacionC;
    Cola* estacionD;
//    Lista* listaA;
//    Lista* listaB;
//    Arbol* arbol;


};

