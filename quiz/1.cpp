#include <iostream>
using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
    public:
        void mostrar(){
            cout << "Nombre: " << nombre << endl;
            cout << "Edad: " << edad << endl;
        }
};

int main() {
    Persona persona;
    persona.mostrar();
    return 0;
}