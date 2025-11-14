#include <iostream>
using namespace std;

class Basketball {
public:
    string marca;
    double diametro;
    double peso;
    string color;
    bool inflada;

    Basketball(string m, double d, double p, string c, bool i) {
        marca = m;
        diametro = d;
        peso = p;
        color = c;
        inflada = i;
    }

    // Destructor
    ~Basketball() {
        cout << "El balón de marca " << marca << " fue destruido." << endl;
    }

    void inflar() {
        inflada = true;
        cout << "El balón ha sido inflado." << endl;
    }

    void desinflar() {
        inflada = false;
        cout << "El balón ha sido desinflado." << endl;
    }

    void mostrarInfo() {
        cout << "Marca: " << marca << endl;
        cout << "Diámetro: " << diametro << " cm" << endl;
        cout << "Peso: " << peso << " kg" << endl;
        cout << "Color: " << color << endl;
        cout << "¿Está inflada?: " << (inflada ? "Sí" : "No") << endl;
    }
};