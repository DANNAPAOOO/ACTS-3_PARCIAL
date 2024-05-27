#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0)); // inicializamos la semilla para generar números aleatorios

    // Creamos la matriz y le pasamos 3 filas y 3 columnas
    int matriz[3][3];

    // Llenamos la matriz con dos ciclos for, uno para las filas y otro para las columnas
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // A la matriz le damos números aleatorios entre 0 y 9
            matriz[i][j] = rand() % 10;
        }
    }

    // Mostramos todos los datos que hay en la matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}