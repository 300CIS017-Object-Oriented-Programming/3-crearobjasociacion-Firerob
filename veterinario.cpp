#include "veterinario.h"

Veterinario::Veterinario(string nom, int anios){
    nombre = nom;
    aniosExperiencia = anios;
}
string Veterinario::getNombre(){
    return nombre;
}
int Veterinario::getAniosExp(){
    return aniosExperiencia;
}
void Veterinario::setNombre(string nom){
    nombre = nom;
}
void Veterinario::setAniosExp(int anio){
    aniosExperiencia = anio;
}