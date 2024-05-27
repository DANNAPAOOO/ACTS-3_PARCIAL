#include <iostream>
using namespace std;

int main() {
  int f, c, acum = 0; //Declaramos las variables
  
  cout << "Digite el numero de filas: ";
  cin >> f;
  cout << "Digite el numero de columnas: ";
  cin >> c;
  
  int matriz[f][c]; //Creamos la matriz

  for (int i = 0; i < f; i++) {
    for (int j = 0; j < c; j++) {
      cout << "Digite dato para la fila " << i + 1 << " columna " << j + 1 << ": ";
      cin >> matriz[i][j];
    }
  }
  
  for (int i = 0; i < f; i++) { // Recorremos la matriz
    acum += matriz[i][0]; //Sumamos los elementos de la columna 1
  }
  
  cout << "Todos los elementos de la columna 1 suman un total de: " << acum << endl;
  
  return 0;
}