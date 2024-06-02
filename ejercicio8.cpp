#include <iostream>
using namespace std;
int main()
{
    double salario, aumento, salario_final;
    cout<<"ingrese su salario actual: ";
    cin>>salario;

    aumento= salario * 0.25;
    salario_final= salario + aumento;
    cout<<"su salario con aumento es: " << salario_final << endl;
    return 0;	
}
