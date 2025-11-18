#include <iostream>

using namespace std;

class Perro{
    private:
        int color, edad;
        string raza;
    public:
        Perro(){
            color = 255;
            edad = 1;
            raza = "pug";
        }
        Perro(int color, int edad, string raza){
            this->color = color;
            this->edad = edad;
            this->raza = raza;
        }

        string ladrar(){
        }
        void comer(int raciones){
        }
};

int main(){
    return 0;
}