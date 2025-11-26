#ifndef VUELO_H
#define VUELO_H

#include <string>
using namespace std;

class Vuelo {
private:
    string numeroVuelo;
    string aerolinea;
    string fecha;
    float precio;
    int duracionMin;
    int distanciaKm;

public:
    Vuelo() {
        numeroVuelo = "";
        aerolinea = "";
        fecha = "";
        precio = 0;
        duracionMin = 0;
        distanciaKm = 0;
    }

    Vuelo(string num, string aero, string f, float p, int dur, int km) {
        numeroVuelo = num;
        aerolinea = aero;
        fecha = f;
        precio = p;
        duracionMin = dur;
        distanciaKm = km;
    }

    // Getters
    string getNumeroVuelo() { return numeroVuelo; }
    string getAerolinea() { return aerolinea; }
    string getFecha() { return fecha; }
    float getPrecio() { return precio; }
    int getDuracionMin() { return duracionMin; }
    int getDistanciaKm() { return distanciaKm; }

    // Setters
    void setNumeroVuelo(string v) { numeroVuelo = v; }
    void setAerolinea(string v) { aerolinea = v; }
    void setFecha(string v) { fecha = v; }
    void setPrecio(float v) { precio = v; }
    void setDuracionMin(int v) { duracionMin = v; }
    void setDistanciaKm(int v) { distanciaKm = v; }
};

#endif