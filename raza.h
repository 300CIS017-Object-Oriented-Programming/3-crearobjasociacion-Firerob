#ifndef RAZA_H
#define RAZA_H

#include <iostream>
#include <string>


using namespace std;

class Raza{
    private:
    string nombre;
    string paisOrigen;
    Perro* pPerro;

    public:
    Raza();
    Raza(string nom, string pais);

    void agregarRaza(Perro* perr);

    string getNombre();
    string getPaisOrigen();
    void setNombre(string nom);
    void setPaisOrigen(string pais);
    
    void mostrarInfo();
};

#endif 