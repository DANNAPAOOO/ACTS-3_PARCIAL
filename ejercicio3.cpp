#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "Digite el numero de paises: ";
    cin >> n;

    string paises[n]; //creamos el arreglo y le pasamos el tamaño ingresado

    //Llenamos el arreglo con un ciclo for
    for (int i = 0; i < n; i++) {
        cout << "Digite pais " << i+1 << ": ";
        cin >> paises[i]; //le pasamos al arreglo los paises ingresados
    }

    //pedimos la posicion
    int pos;
    cout << "Digite la posicion: ";
    cin >> pos;

    //mostramos el pais que se encuentra en la posicion digitada
    if (pos >= 0 && pos < n) {
        cout << "El pais que hay en la posicion " << pos << " es: " << paises[pos] << endl;
    } else {
        cout << "Posicion invalida" << endl;
    }

    return 0;
}