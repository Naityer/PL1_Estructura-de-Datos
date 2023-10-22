#include "Gestor.hpp"
//#include "Pila.hpp" en Gestor.hpp
//include "Paquete.hpp" en NodoPila

Gestor::Gestor() 
{
    pila = new Pila();
    estacionA = new Cola();
    estacionB = new Cola();
    estacionC = new Cola();
    estacionD = new Cola();
}

void Gestor::genera12Pedidos() 
{
    
    if(pila->getLongitud() < 48) {
        for(auto i = 1; i <= 12; i++) {
            Paquete *p = new Paquete();
            pila->insertar(p);
        }
    } else {
        cout << "\nPILA LLENA\n";
    }
}

void Gestor::muestraPedidos()
{
    pila->mostrar();
}

void Gestor::borraPedidosPila() 
{
    pila->~Pila();
}

void Gestor:: encolarPedidos()
{
    
    Paquete* paquete;
    
  
}

//void Gestor:: muestraPedidosestacionsAyB()
//{
//    
//}
//
//void Gestor:: muestraPedidosestacionsCyD()
//{
//    
//}
//
//void Gestor::borraPedidosColas()
//{
//    
//}
//
//void Gestor::enlistarPedidos()
//{
//    
//}
//
//void Gestor::muestraPedidosEstandar()
//{
//    
//}
//
//void Gestor::muestraPedidosUrgentes()
//{
//    
//}
//
//void Gestor::buscarPedidos()
//{
//    
//}
//
//void Gestor:reiniciar()


Gestor::~Gestor()
{
}

