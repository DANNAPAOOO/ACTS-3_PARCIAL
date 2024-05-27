#include <iostream>
using namespace std;

int main() {
  // Crear una matriz 2x2
  int matriz[2][2];

  // Asignar los valores a la matriz
  matriz[0][0] = 10;
  matriz[0][1] = 20;
  matriz[1][0] = 30;
  matriz[1][1] = 40;

  // Imprimir los valores de la matriz
  cout << "El dato que hay en la fila 1 y columna 1 es: " << matriz[0][0] << endl;
  cout << "El dato que hay en la fila 1 y columna 2 es: " << matriz[0][1] << endl;
  cout << "El dato que hay en la fila 2 y columna 1 es: " << matriz[1][0] << endl;
  cout << "El dato que hay en la fila 2 y columna 2 es: " << matriz[1][1] << endl;

  return 0;
}