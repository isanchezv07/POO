#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    for (int i = 0; i <= 100; i += 2) {
        suma += i;
    }

    cout << "La suma de los numeros pares entre 0 y 100 es: " << suma << endl;

    return 0;
}