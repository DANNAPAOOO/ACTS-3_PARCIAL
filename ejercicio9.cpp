#include <iostream>
using namespace std;

int main() {
    int num[10];

    //pedimos el número de posiciones
    int posiciones;
    cout << "Digite el número de posiciones (como máximo 10): ";
    cin >> posiciones;

    //rellenamos el arreglo con valores aleatorios
    for (int i = 0; i < posiciones; i++) {
        //pedimos un número
        cout << "Ingrese un número para la posición " << i << ": ";
        cin >> num[i];
    }

    //sumamos los valores del arreglo
    int suma = 0;
    for (int i = 0; i < posiciones; i++) {
        suma += num[i];
    }

    //imprimimos los datos con un ciclo for
    cout << "Los datos del arreglo son: ";
    for (int i = 0; i < posiciones; i++) {
        cout << num[i] << " ";
    }

    //imprimimos la suma
    cout << "\nLa suma de los datos es: " << suma << endl;

    return 0;
}