#include <iostream>

int main() {
    // Pedimos el tamaño
    std::cout << "Digite el tamaño del arreglo: ";
    int n;
    std::cin >> n;

    // Creamos el arreglo y le pasamos el tamaño ingresado
    int num[n];

    // Asignamos un valor a cada posición
    for (int i = 0; i < n; i++) {
        // Pedimos los datos
        std::cout << "Digite un número para la posición " << i + 1 << ": ";
        int numero;
        std::cin >> numero;

        // Capturamos los números ingresados en la variable numero
        num[i] = numero;
    }

    // Imprimimos los datos asignados con un ciclo para
    for (int i = 0; i < n; i++) {
        std::cout << "El dato en la posición " << i + 1 << " es: " << num[i] << std::endl;
    }

    return 0;
}