#include <iostream>

struct chocolate {
	char marca[20];
	float peso;
	int calorias;
};

int main(void) {
	system("chcp 1252 > nil");

	chocolate lanche{ "Charge", 2.3, 350 };

	std::cout
		<< "Marca: " << lanche.marca
		<< "\nPeso: " << lanche.peso << "g "
		<< "\nCalorias: " << lanche.calorias;


	return 0;
}