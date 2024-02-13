//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros


Propietario::Propietario(std::string nombre, std::string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}

Propietario::Propietario(string name){
    nombre = name;
}

void Propietario::mostrarInfo(){
    cout << "nombre: " << nombre << " id: " << docIdentidad << " edad: " << edad << endl;
}

std::string Propietario::getNombre()  {
    return nombre;
}
string Propietario::getId(){
    return docIdentidad;
}
int Propietario::getEdad(){
    return edad;
}

void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Propietario::setEdad(int ed){
    edad = ed;
}

void Propietario::setDocId(string id){
    docIdentidad = id;
}