//
// Created by lufe0 y Gonzo Feb2024.
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "veterinario.h"
#include "raza.h"

using namespace std;

class Perro {
private:
    int edad;
    std::string nombre;
    std::string raza;
    std::string tamanio;
    std::string color;
    Propietario* pPropietario;
    Veterinario* vVeterinario;
    Raza* rRaza;
    
public:
    Perro();
    Perro(string, int, string, string, string);

    ~Perro(); //Destructor
    void ladrar();
    Propietario * getPropietario();
    Veterinario * getVeterinario();

    // Sirve para.......
    void agregarPropietario(std::string nombre, std::string docIdentidad);
    void agregarVeterinario(string nombre, int aniosExperiencia);
    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario*);

    void setVeterinario(Veterinario*);

    void consultarEdadPropietario();

    int getEdad();
    void setEdad(int edad);
    std::string getRaza();
    void setRaza(std::string raza);
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getTamanio();
    void setTamanio(std::string tamanio);
    std::string getColor();
    void setColor(std::string color);
};
#endif
