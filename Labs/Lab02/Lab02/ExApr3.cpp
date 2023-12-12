#include <iostream>
using namespace std;

int main()
{
	cout << left; 
	cout.width(15); cout << "Produto"; 
	cout.width(15); cout << "Preço/Kg"; 
	cout.width(15); cout << "Pedido (Kg)"; 
	cout.width(15); cout << "Total Parcial";
	cout << endl;

	cout.width(15); cout << "-------------";
	cout.width(15); cout << "-------------";
	cout.width(15); cout << "-------------";
	cout.width(15); cout << "-------------";
	cout << endl;

	cout.width(15); cout << "Alface";
	cout.width(15); cout << "R$ 1,25/Kg";
	cout.width(15); cout << "3,2Kg";
	cout.width(15); cout << "R$ 4,00";
	cout << endl;

	cout.width(15); cout << "Beterraba";
	cout.width(15); cout << "R$ 0,65/Kg";
	cout.width(15); cout << "6,0Kg";
	cout.width(15); cout << "R$ 3,90";
	cout << endl;

	cout.width(15); cout << "Cenoura";
	cout.width(15); cout << "R$ 0,90/Kg";
	cout.width(15); cout << "10,0Kg";
	cout.width(15); cout << "R$ 9,00";
	cout << endl;

	return 0;
}
