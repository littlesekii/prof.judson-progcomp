#include <iostream>

using namespace std;


int main() {

	system("chcp 1252 > nil");

	/* int */ float distance, liters;
	cout << "Dist�ncia percorrida (km): ";
	cin >> distance;
	cout << "Litros de combust�vel: ";
	cin >> liters;

	cout << "O consumo do seu carro foi de " << distance / liters << " km/litro.";

	return 0;
}
