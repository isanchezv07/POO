#include <iostream>

using namespace std;

int numeroImpar(int num1){
    while(num1 % 2 == 0){
        cout<<"Ingrese un numero impar: ";
        cin>>num1;
    }
}

int main(){
    int num1;
    numeroImpar(num1);

    
    num1 = 2;
    cout<<"El numero es: "<<num1<<endl;
    return 0;
}