#include <iostream>
#include "c_ball.h"

using namespace std;    

int main() {
    Basketball ball("Spalding", 24.3, 0.62, "naranja", false);
    ball.mostrarInfo();

    return 0;
}