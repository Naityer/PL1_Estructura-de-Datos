#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Paquete
{
    
public:

//ATRIBUTOS
    Paquete();
    //GET
    bool getPrioridad();
    string getID();
    int getNum_seguimiento();
    char* getDNI();
    
    //SET
    bool setPrioridad();
    string setID();
    int setNum_seguimiento();
    char setDNI();
    ~Paquete();
    
    
private:

//ATRIBUTOS
    bool prioridad;
    string ID {"None"};
    int num_seguimiento{0};
    char DNI[10];

//METODOS
    void generarDNI();
    void generarNumSeguimiento();
};

