//
// Created by lufe y Gonzo Feb2024.
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>
#include <iostream>

using namespace std;

class Propietario {
private:
    std::string nombre;
    std::string docIdentidad;
    int edad;
public:
    Propietario() = default; //Agrega constructor por defecto sin cuerpo
    Propietario(std::string nombre, std::string docIdentidad);
    Propietario(string);
    void mostrarInfo();
    std::string getNombre();
    string getId();
    int getEdad();
    void setNombre(std::string nombre);
    void setEdad(int ed);
    void setDocId(string id);



};


#endif 
