#include "libro.h"

int main(){
    Libro libro("El principito", "Antoine de Saint-Exupéry", 120, 10.99);
    cout << "El titulo del libro es: " << libro.getTitulo() << endl;
}