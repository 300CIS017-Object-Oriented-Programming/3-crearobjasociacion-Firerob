#include "raza.h"
#include "Perro.h"

Raza::Raza(string nom, string pais){
    nombre = nom;
    paisOrigen = pais;
}   

void Raza::agregarRaza(Perro* perro){
    pPerro = perro;
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
void Raza::mostrarInfo(){
    cout << "Perro: " << pPerro->getNombre() <<", raza: " << nombre << ", pais Origen: " << paisOrigen << endl;
}
