#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <iostream>
#include <string>
using namespace std;

class Veterinario{
    private:
    string nombre;
    int aniosExperiencia;

    public:
    Veterinario();
    Veterinario(string nom, int anios);

    string getNombre();
    int getAniosExp();
    void setNombre(string nom);
    void setAniosExp(int anio);
};

#endif 