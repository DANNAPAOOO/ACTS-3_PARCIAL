#include <iostream>
using namespace std;

int main() {
    //creamos el arreglo le damos un nombre y un tamaño de 5 posiciones
    int num[5];

    //a cada posición le damos un dato con el ciclo for
    for (int i = 0; i < 5; i++) {
        //pido los datos
        cout << "Digite un numero para la posicion " << i << ": ";
        cin >> num[i]; //capturo los números ingresados en la variable numero
    }

    //imprimimos los datos asignados con un ciclo for
    for (int i = 0; i < 5; i++) {
        cout << "El dato en la posicion " << i << " es: " << num[i] << endl;
    }

    return 0;
}