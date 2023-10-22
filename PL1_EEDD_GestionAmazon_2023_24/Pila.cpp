#include "Pila.hpp"

Pila::Pila()
{
    ultimo = NULL;
    longitud = 0;
}

void Pila::insertar(Paquete* p)
{
    pnodoPila nuevo;
    nuevo = new NodoPila(p, ultimo);
    ultimo = nuevo;
    longitud++;
}

Paquete* Pila::extraer()
{
    pnodoPila nodo;
    Paquete* p;
    if(!ultimo)
        return 0;
        
    nodo = ultimo;
    ultimo = nodo->siguiente;
    p = nodo->paquete;
    longitud--;
    delete nodo;
    return p;
}

Paquete* Pila:: cima()
{
    //pnodoPila nodo;
    if (!ultimo)
        return NULL;
    return ultimo->paquete;
}


void Pila::mostrar()
{
    pnodoPila aux = ultimo;
    cout << "\tEl contenido de la pila" << endl;
    cout << "===================================" << endl;
    cout << endl; 
    
    // Títulos de las columnas
    cout << left << setw(20) << "TIPO_PRIORIDAD" << setw(20) << "ID_PAQUETE" << setw(20) << "NUM_SEGUIMIENTO" << setw(20) << "DNI_CLIENTE" << endl;
    cout << left << setw(20) << "______________" << setw(20) << "__________" << setw(20) << "_______________" << setw(20) << "___________" << endl;

    while(aux) {
        // Datos de la fila
        cout << left << setw(20) << aux->paquete->getPrioridad() << setw(20) << aux->paquete->getID() << setw(20) << aux->paquete->getNum_seguimiento() << setw(20) << aux->paquete->getDNI() << endl;
        // Separacion de columnas
        cout << left << setw(20) << "______________" << setw(20) << "__________" << setw(20) << "_______________" << setw(20) << "___________" << endl;        
         aux = aux ->siguiente;
    }
    cout << endl;
    
{
//    // Datos de la fila
//    cout << left << setw(20) << tipoPrioridad << setw(20) << ID_Paquete << setw(20) << num_seguimiento << setw(20) << DNI_Cliente << endl;
//    // Separacion de columnas
//    cout << left << setw(20) << "______________" << setw(20) << "__________" << setw(20) << "_______________" << setw(20) << "___________" << endl;
}
    
}

int Pila::getLongitud()
{
    return this->longitud;
}

Pila::~Pila()
{
    pnodoPila aux;
    while(ultimo) {
        aux = ultimo;
        ultimo = ultimo->siguiente;
        delete aux;
    }
}

