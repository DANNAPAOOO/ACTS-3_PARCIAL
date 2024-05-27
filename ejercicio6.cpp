#include <iostream>

using namespace std;

int main() {
    // Creamos la matriz y le pasamos 2 filas y 2 columnas
    int matriz[2][2];

    // Le damos valores a la matriz
    matriz[0][0] = 20; // fila 1 columna 1
    matriz[0][1] = 20; // fila 1 columna 2
    matriz[1][0] = 30; // fila 2 columna 1
    matriz[1][1] = 40; // fila 2 columna 2

    // Imprimimos los datos para su visualización
    cout << "El dato que hay en la fila 1 y columna 1 es: " << matriz[0][0] << endl;
    cout << "El dato que hay en la fila 1 y columna 2 es: " << matriz[0][1] << endl;
    cout << "El dato que hay en la fila 2 y columna 1 es: " << matriz[1][0] << endl;
    cout << "El dato que hay en la fila 2 y columna 2 es: " << matriz[1][1] << endl;

    return 0;
}