#ifndef RESERVACION_H
#define RESERVACION_H

#include "usuario.h"
#include "vuelo.h"

class Reservacion {
private:
    Usuario* usuario;
    Vuelo* vuelo;
    float precioFinal;
    bool activa;

public:
    Reservacion() {
        usuario = nullptr;
        vuelo = nullptr;
        precioFinal = 0;
        activa = false;
    }

    Reservacion(Usuario* u, Vuelo* v, float precio) {
        usuario = u;
        vuelo = v;
        precioFinal = precio;
        activa = true;
    }

    // Getters
    Usuario* getUsuario() { return usuario; }
    Vuelo* getVuelo() { return vuelo; }
    float getPrecioFinal() { return precioFinal; }
    bool getActiva() { return activa; }

    // Métodos
    void cancelar() { activa = false; }
};

#endif