#include "raza.h"
#include "Perro.h"

Raza::Raza(string nom, string pais){
    nombre = nom;
    paisOrigen = pais;
}   

string Raza::getNombre(){
    return nombre;
}
string Raza::getPaisOrigen(){
    return paisOrigen;
}
void Raza::setNombre(string nom){
    nombre = nom;
}
void Raza::setPaisOrigen(string pais){
    paisOrigen = pais;
}

