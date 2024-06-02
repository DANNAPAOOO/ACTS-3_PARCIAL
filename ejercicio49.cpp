#include <iostream>
#include <limits>
using namespace std;


int main() {
    const int filas = 4;
    const int columnas = 3;
    int tabla[filas][columnas];

    
     cout<< "Introduce los valores para una tabla de " << filas << " filas y " << columnas << " columnas:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> tabla[i][j];
        }
    }

    
    int sumaColumnas[columnas] = {0};
    for (int j = 0; j < columnas; ++j) {
        for (int i = 0; i < filas; ++i) {
            sumaColumnas[j] += tabla[i][j];
        }
    }

    int mayorSuma = numeric_limits <int>::min();
    for (int j = 0; j < columnas; ++j) {
        if (sumaColumnas[j] > mayorSuma) {
            mayorSuma = sumaColumnas[j];
        }
    }

   
    cout << "La mayor suma de las columnas es: " << mayorSuma << endl;

    return 0;
}
