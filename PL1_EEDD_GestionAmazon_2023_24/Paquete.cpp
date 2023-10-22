#include "Paquete.hpp"

Paquete::Paquete()
{
    this->prioridad = (rand() % 2);  // 0 = Estandar ; 1 = Urgente
    this->generarNumSeguimiento();
    this->generarDNI();
}

int Paquete::countEstandarID = 0;
int Paquete::countUrgenteID = 51;

//FUNCIONES DE PAQUETES

void Paquete::generarDNI()
{
    char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE" ;
    int numDNI = 0, aux = 1E7;
    for(int i = 0; i < 8; i++) {
        int num = rand() % 10;
        this->DNI[i] = '0' + num;
        numDNI = numDNI + num * aux;
        aux /= 10;
    }
    
    this->DNI[8] = letras[numDNI % 23];
    this->DNI[9] = '\0';
}

void Paquete::generarNumSeguimiento()
{
    this->num_seguimiento = rand() % 9000;
}

void Paquete::asignarID()
{
    // 0 - PRIORIDAD ESTANDAR
    if(countEstandarID >= 0 && countEstandarID <= 49 && this->prioridad == 0) {
            countEstandarID++;
            this->ID = countEstandarID;
    
    // 1 - PRIORIDAD URGENTE
    } else if (countUrgenteID >= 51 && countUrgenteID <= 99 && this->prioridad == 1) {
        countUrgenteID++;
        this->ID = countUrgenteID;
    } 
}

// SETTER

void Paquete::setID(){
    this->asignarID();
}

//   GETTER getPrioridad;  getID {"None"}; getNum_seguimiento{0};  getDNI[10];

bool Paquete::getPrioridad()
{
    return this->prioridad;
} 
   
int Paquete::getID()
{
    return this->ID;
}

int Paquete::getNum_seguimiento()
{
    return num_seguimiento;
}

char* Paquete::getDNI()
{
    return DNI;
}

Paquete::~Paquete()
{
    
}

