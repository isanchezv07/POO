#include <iostream>

using namespace std;

class Circulo{
    private:
        double radio;
        double pi = 3.14159265358979323846;
    public:
        Circulo(double radio){
            this->radio = radio;
        }
        double calcularArea(){
            return pi * radio * radio;
        }
        double calcularPerimetro(){
            return 2 * pi * radio;
        }
};

int main(){
    Circulo circulo(10);
    cout << "El area del circulo es: " << circulo.calcularArea() << endl;
    cout << "El perimetro del circulo es: " << circulo.calcularPerimetro() << endl;
    return 0;
}