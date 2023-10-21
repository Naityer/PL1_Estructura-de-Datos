#include <iostream>
#include "Cola.hpp"
#include "Pila.hpp"

class Gestor
{
public:
    Gestor();
    ~Gestor();
    
    void genera12Pedidos();
    void muestraPedidos();
    void borraPedidosPila();
    void encolarPedidos();
    void muestraPedidosSalasAyB();
    void muestraPedidosSalasCyD();
    void borraPedidosColas();
    void enlistarPedidos();
    void muestraPedidosEstandar();
    void muestraPedidosUrgentes();
    void buscarPedidos();
    void reiniciar();

private: 


};

#endif // GESTOR_HPP
