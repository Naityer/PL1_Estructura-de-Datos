#ifndef PAQUETE_HPP
#define PAQUETE_HPP

class Paquete
{
public:
    Paquete();
    ~Paquete();
    
    
private:

    bool tipoPrioridad;
    char ID_Paquete[10];
    int num_seguimiento{0};
    char DNI_Cliente[10];
    
};

#endif // PAQUETE_HPP
