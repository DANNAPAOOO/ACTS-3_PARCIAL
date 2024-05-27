#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(time(0)); // Inicializa la semilla del generador de números aleatorios
  int matriz[3][3];
  
  // Llena la matriz con números aleatorios entre 0 y 9
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matriz[i][j] = rand() % 10; // Genera un número aleatorio entre 0 y 9
    }
  }

  // Imprime la matriz
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}