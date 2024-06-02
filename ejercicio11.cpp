#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int suma = 0;
    int mayor = -999;
    int menor = 999;
    
    cout<< "Introduce 10 números: \n";
    for (int i = 0; i < 10; ++i) {
        cout<< "Número " << i + 1 << ": ";
        cin>> numeros[i];
    }

  
    for (int i = 0; i < 10; ++i) {
        suma += numeros[i];
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    
    cout << "La suma de los 10 números es: " << suma << endl;
    cout << "El mayor número es: " << mayor << endl;
    cout << "El menor número es: " << menor << endl;

    return 0;
}
