#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numeros;
    int numero;
    const int maximo_numeros = 20;

    cout << "Introduce hasta 20 numeros enteros (introduce 0 para finalizar):" << endl;

    for (int i = 0; i < maximo_numeros; ++i) {
        cin >> numero;
        if (numero == 0) {
            break;
        }
        numeros.push_back(numero);
    }

    cout << "Numeros en orden inverso a su introduccion:" << endl;
    for (int i = numeros.size() - 1; i >= 0; --i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}

