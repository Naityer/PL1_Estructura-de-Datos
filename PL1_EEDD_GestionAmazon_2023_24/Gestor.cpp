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
        cout << "\nPILA LLENA !!! - Canditdad paquetes MAX = " <<  pila->getLongitud() << endl;
    }
}

void Gestor::muestraPedidos()
{
    pila->mostrar();
    cout << "CANTIDAD PEDIDO = " << pila ->getLongitud() << endl;
}

void Gestor::borraPedidosPila() 
{
    pila->~Pila();
    pila->setLongitud(0);
}

void Gestor::encolarPedidos()
{
    Paquete* paquete;
    cout << "Encolando " << pila->getLongitud() << " pedidos... " << endl;
    cout << "===================================================" << endl;
    
    while(pila->getLongitud() > 0)
    {
        
        paquete = pila->extraer();
        paquete->setID();
        
        // 0 - PEDIDO ESTANDAR 
        if(estacionA->getLongitud() <= estacionB->getLongitud() && paquete->getPrioridad() == 0) {
            cout << "Paquete ESTANDAR ID: " << paquete->getID() << " asginado a la Estacion A " << endl; 
            estacionA->insertar(paquete);
        } 
        else if(estacionA->getLongitud() > estacionB->getLongitud() && paquete->getPrioridad() == 0) {
            cout << "Paquete ESTANDAR ID: " << paquete->getID() << " asginado a la Estacion B " << endl; 
            estacionB->insertar(paquete);
        } 
        // 1 - PEDIDO URGENTE
        else if(estacionC->getLongitud() <= estacionD->getLongitud() && paquete->getPrioridad() == 1) {
            cout << "Paquete URGENTE ID: " << paquete->getID() << " asginado a la Estacion C " << endl; 
            estacionC->insertar(paquete);
        } else {
            cout << "Paquete URGENTE ID: " << paquete->getID() << " asginado a la Estacion C " << endl;
            estacionD->insertar(paquete);
        }
    }
}

void Gestor::muestraPedidosSalasAyB()
{
    cout << "\nESTACION A" << "NUMERO PAQUETES = " <<estacionA->getLongitud();
    estacionA->mostrar();
    cout << "\nESTACION B" << "NUMERO PAQUETES = " <<estacionB->getLongitud();
    estacionB->mostrar();
}

void Gestor::muestraPedidosSalasCyD()
{
    cout << "\nESTACION C" << "NUMERO PAQUETES = " <<estacionC->getLongitud();;
    estacionC->mostrar();
    cout << "\nESTACION D" << "NUMERO PAQUETES = " <<estacionD->getLongitud();;
    estacionD->mostrar();
}

void Gestor::borraPedidosColas()
{
    estacionA->~Cola();
    estacionA->setLongitud(0);
    estacionB->~Cola();
    estacionB->setLongitud(0);
    estacionC->~Cola();
    estacionC->setLongitud(0);
    estacionD->~Cola();
    estacionD->setLongitud(0);
}

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

