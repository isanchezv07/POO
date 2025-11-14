#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    uint8_t prueba = 0;

    for(int i = 0; i < 255; i++){
        prueba += 1;
        cout << +prueba << " ";
    }
    return 0;
}