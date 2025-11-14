#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Ingresa un numero impar: ";
        cin >> n;
    } while (n % 2 == 0);

    cout << "Correcto! " << n << " es impar." << endl;
    return 0;
}