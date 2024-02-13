#include <iostream>
#include "Perro.h"
#include "Propietario.h"
#include "veterinario.h"
#include "raza.h"

int main() {

    // Instanciar
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    std::cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<std::endl;

    Perro* wachiwa = new Perro("Wachiwa", 90, "Dobberman", "blanco", "mediano");
    wachiwa->ladrar();

    Propietario* felipe = new Propietario("felipe");
    felipe->setDocId("1105365975");
    felipe->setEdad(777);

    felipe->mostrarInfo();

    /*adicional - familiaridad con las relaciones*/


    wachiwa->agregarPropietario(felipe->getNombre(), felipe->getId());
    
    std::cout<< "El documento de id del pPropietario del perro "<<wachiwa->getNombre() << " es " << wachiwa->getPropietario()->getId() << std::endl;

    /*relaciones*/
    cout << "la edad del propietario del perro es: " << wachiwa->getPropietario()->getEdad() << endl;

    /*Relación de asociación - asociar objetos desde la clase creadora*/
    Veterinario* chango = new Veterinario("changuito", 1);
    wachiwa->agregarVeterinario(chango->getNombre(), chango->getAniosExp());
    cout << "nombre del veterinario: " << wachiwa->getVeterinario()->getNombre() << ", y anios de experiencia: " << wachiwa->getVeterinario()->getAniosExp() << endl;

    /*Relación de asociación - asociar objetos desde la clase creadora*/
    Raza* mastin = new Raza("Mastin Napolitano", "italia");
    Raza* maltes = new Raza("Maltes", "italia");
    wachiwa ->agregarRaza(mastin);
    cout << "Perro: " << wachiwa->getNombre() <<", raza: " << wachiwa->getRaza() << ", pais Origen: " << wachiwa->getRRaza()->getPaisOrigen() << endl;

    
    
    return 0;
}
