#ifndef USUARIO_H
#define USUARIO_H

#include <string>
using namespace std;

class Usuario {
private:
    string id;
    string nombre;
    int kmAcumulados;

public:
    Usuario() {
        id = "";
        nombre = "";
        kmAcumulados = 0;
    }

    Usuario(string i, string n) {
        id = i;
        nombre = n;
        kmAcumulados = 0;
    }

    // Getters
    string getId() { return id; }
    string getNombre() { return nombre; }
    int getKmAcumulados() { return kmAcumulados; }

    // Setters
    void setId(string v) { id = v; }
    void setNombre(string v) { nombre = v; }
    void setKmAcumulados(int v) { kmAcumulados = v; }

    // Método para acumular kilómetros
    void acumulaKm(int km) { kmAcumulados += km; }
};

#endif