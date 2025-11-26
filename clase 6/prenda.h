#include <iostream>
using namespace std;

class Prenda {
private:
    string marca;
    string color;

public:
    Prenda() {
        marca = "sin marca";
        color = "sin color";
    }

    Prenda(string marca, string color) {
        this->marca = marca;
        this->color = color;
    }

    string getMarca() {
        return marca;
    }

    string getColor() {
        return color;
    }
};

class Persona {
private:
    string nombre;
    Prenda prendas[5];   
    int totalPrendas;

public:
    Persona(string nombre) {
        this->nombre = nombre;
        totalPrendas = 0;
    }

    void agregaPrenda(Prenda p) {
        if (totalPrendas < 5) {
            prendas[totalPrendas] = p;
            totalPrendas++;
        } else {
            cout << "No se pueden agregar más prendas." << endl;
        }
    }

    void muestraPrendas() {
        cout << "=== Prendas de " << nombre << " ===" << endl;

        if (totalPrendas == 0) {
            cout << "No tiene prendas aún." << endl;
            return;
        }

        for (int i = 0; i < totalPrendas; i++) {
            cout << i + 1 << ". Marca: " << prendas[i].getMarca()
                 << ", Color: " << prendas[i].getColor() << endl;
        }
    }
};