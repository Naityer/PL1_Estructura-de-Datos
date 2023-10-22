#include <iostream>
#include <iomanip>
#include <string>

#ifndef PAQUETE_HPP
#define PAQUETE_HPP

using namespace std;

class Paquete
{
public:

//ATRIBUTOS
    Paquete();
    //GET
    bool getPrioridad();
    int getID();
    int getNum_seguimiento();
    char* getDNI();
    
    //SET
    bool setPrioridad();
    void setID();
    int setNum_seguimiento();
    char setDNI();
    int getCantidadPaquetes();
    ~Paquete();
    
    
private:

//ATRIBUTOS
    bool prioridad;
    int ID {0};
    int num_seguimiento{0};
    char DNI[10];
    
    static int countEstandarID;
    static int countUrgenteID;

//METODOS
    void generarDNI();
    void generarNumSeguimiento();
    void asignarID();
};

#endif // PAQUETE_HPP