#include "libro.h"

int main() {

    Libro libro("Programación en C++", "Juan Perez");

    Capitulo c1("Introducción", 10);
    Capitulo c2("Variables y tipos", 15);
    Capitulo c3("POO en C++", 25);

    libro.agregarCapitulo(c1);
    libro.agregarCapitulo(c2);
    libro.agregarCapitulo(c3);

    libro.muestraLibro();

    return 0;
}