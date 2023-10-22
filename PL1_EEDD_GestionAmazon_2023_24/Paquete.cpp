#include "Paquete.hpp"

Paquete::Paquete()
{
    this->prioridad = (rand() % 2);  // 0 = Estandar ; 1 = Urgente
    this->generarNumSeguimiento();
    this->generarDNI();
    
}

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
    this->num_seguimiento += 1;
}

//    bool getPrioridad;
//    string getID {"None"};
//    int getNum_seguimiento{0};
//    char getDNI[10];

bool Paquete::getPrioridad()
{
    return this->prioridad;
} 
   
string Paquete::getID()
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

