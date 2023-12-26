#include <iostream>

struct chocolate {
	char marca[20];
	float peso;
	int calorias;
};

int main(void) {
	system("chcp 1252 > nil");

	chocolate lanche[3]{ 
		{ "Linea", 30, 100 }, 
		{ "Garoto", 100, 350 },
		{ "KitKat", 299, 350 },
	};

	std::cout
		<< "Marca: " << lanche[0].marca
		<< "\nPeso: " << lanche[0].peso << "g "
		<< "\nCalorias: " << lanche[0].calorias;

	std::cout << std::endl << std::endl;

	std::cout
		<< "Marca: " << lanche[1].marca
		<< "\nPeso: " << lanche[1].peso << "g "
		<< "\nCalorias: " << lanche[1].calorias;

	std::cout << std::endl << std::endl;

	std::cout
		<< "Marca: " << lanche[2].marca
		<< "\nPeso: " << lanche[2].peso << "g "
		<< "\nCalorias: " << lanche[2].calorias;

	return 0;
}