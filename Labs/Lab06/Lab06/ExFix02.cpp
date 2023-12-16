#include <iostream>

using namespace std;


int main() {

	system("chcp 1252 > nil");

	/* int */ float distance, liters;
	cout << "Distância percorrida (km): ";
	cin >> distance;
	cout << "Litros de combustível: ";
	cin >> liters;

	cout << "O consumo do seu carro foi de " << distance / liters << " km/litro.";

	return 0;
}
