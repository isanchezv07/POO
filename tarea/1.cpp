#include <iostream>
using namespace std;

int main() {
    double a, b;
    char opcion;

    cout << "Ingresa el primer numero: ";
    cin >> a;

    cout << "Ingresa el segundo numero: ";
    cin >> b;

    cout << "Elige una opcion:\n";
    cout << "<S> Suma\n<R> Resta\n<M> Multiplicacion\n";
    cin >> opcion;


    if (opcion == 'S' || opcion == 's') {
        cout << "Resultado: " << a + b << endl;
    } 
    else if (opcion == 'R' || opcion == 'r') {
        cout << "Resultado: " << a - b << endl;
    } 
    else if (opcion == 'M' || opcion == 'm') {
        cout << "Resultado: " << a * b << endl;
    } 
    else {
        cout << "Opcion incorrecta." << endl;
    }

    return 0;
}