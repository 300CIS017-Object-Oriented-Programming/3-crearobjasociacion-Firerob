#ifndef RAZA_H
#define RAZA_H

#include <iostream>
#include <string>


using namespace std;

class Raza{
    private:
    string nombre;
    string paisOrigen;

    public:
    Raza();
    Raza(string nom, string pais);

    

    string getNombre();
    string getPaisOrigen();
    void setNombre(string nom);
    void setPaisOrigen(string pais);
    
    
};

#endif 