#include <iostream>

using namespace std;

int numeroImpar(){
    int num1;
    while(num1 % 2 == 0){
        cout<<"Ingrese un numero impar: ";
        cin>>num1;
    }
}

int main(){
    numeroImpar();
    int num1 = 3;
    cout<<"El numero es: "<<num1<<endl;
    return 0;
}