#include "prenda.h"

int main() {

    Persona p("Carlos");

    Prenda pr1("Nike", "Rojo");
    Prenda pr2("Adidas", "Negro");
    Prenda pr3("Puma", "Blanco");

    p.agregaPrenda(pr1);
    p.agregaPrenda(pr2);
    p.agregaPrenda(pr3);

    p.muestraPrendas();

    return 0;
}