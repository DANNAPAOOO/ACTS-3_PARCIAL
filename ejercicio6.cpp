#include <iostream>
using namespace std;
int main(){
	double precio,descuento,total;

	cout<<"ingrese el precio de su compra: ";
	cin>>precio;

	descuento = precio*0.15;
	total = precio-descuento;
	cout << "El total es: " << total << endl;
	return 0;
}
