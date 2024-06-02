#include <iostream>
#include <string.h>
int multiplicacion(int articulos, int precio){
   return articulos*precio;
}
//VERSION3 EXAMEN PRACTICO 13-05-24//
int main() {

    char nombre[50];
    char contrasena[50];
    int intentos = 3;
    int articulos, precio, i, total;
   

    do {
        std::cout<<"Introduce tu nombre: ";
        std::cin>> nombre;
        std::cout<<"Introduce tu contraseña: ";
        std::cin>>contrasena;
        if (strcmp(nombre, "DANNA") == 0 && strcmp(contrasena, "2B10") == 0) {     
            std::cout<<"bienvenido al sistema";  
            break;
        } else {
            intentos--;
        
            std::cout<<"Nombre de usuario o contraseña incorrectos. Te quedan" << intentos << std::endl;     
            
                      
        }
    } while (intentos < 3);
  if (intentos == 3) {
    std::cout<<"Lo sentimos ha superado el número máximo de intentos permitidos";
  }
        std::cout<<"Bienvenido a el sistema.\n";
            std::cout<<"cuando hayas terminado introduce 0 para finalizar.\n";
            std::cout<<"ingrese la cantidad vendida : ";
            std::cin>>articulos;
    //Funcion repetitiva while//
            while (articulos !=0) {
              std::cout<<"ingrese el precio : ";
              std::cin>>precio;
                if (articulos < 0 || precio < 0) {
                   std::cout<<"la cantidad y precio deben ser numeros positivos";
                } else {                    
                  total= articulos*precio;
                }
                std::cout<<"el total  es de :" << total << std::endl ;            
           
     return 0;
}
}