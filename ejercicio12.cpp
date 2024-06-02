#include <iostream>
using namespace std;

int main() {
    double base, exponente, resultado = 1.0;

    cout<<"Ingrese la base: ";
    cin>>base;

    cout<<"Ingrese el exponente: ";
    cin>>exponente;

    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    cout<< base << " elevado a la " << exponente << " es " << resultado << std::endl;

    return 0;
}

