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
    int getCountEstandar();
    int getCountUrgente();
    
    //SET
    bool setPrioridad();
    void setID();
    void setNum_seguimiento(bool prioridad);
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
    void generarNumSeguimiento(bool prioridad);
    void asignarID();
};

#endif // PAQUETE_HPP