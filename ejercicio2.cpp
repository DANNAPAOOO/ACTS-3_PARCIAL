#include <iostream>
using namespace std;

int main() 
{
    int numeros[5];
    int i, menor;
    
    cout<<"Ingrese 5 números:\n";
    for (i = 0; i < 5; i++) {
        cout<<"Número : "<< i + 1;
        cin>>numeros[i];
    }
    
    menor = numeros[0];
    
    for (i = 1; i < 5; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }    
    cout<<"El menor número ingresado es:"<< menor;

    return 0;
}
