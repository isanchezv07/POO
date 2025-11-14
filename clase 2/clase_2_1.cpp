#include <iostream>

using namespace std;

int modulo(int &v1, int &v2){
    int modulo = v1 % v2;
    return modulo;
}

int main(){
    int v1, v2;
    cout<<"Ingrese el valor 1: ";
    cin>> v1;
    cout<<"Ingrese el valor 2: ";
    cin>> v2;
    cout<<"Modulo: "<< modulo(v1, v2) << endl;

    return 0;
}