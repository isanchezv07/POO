#include <iostream>
using namespace std;

int main() {
    int cantidad;
    double numero, suma = 0;

    cout << "Cuantos numeros deseas introducir? ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++) {
        cout << "Numero " << i << ": ";
        cin >> numero;
        suma += numero;
    }

    double media = suma / cantidad;
    cout << "La media aritmetica es: " << media << endl;

    return 0;
}