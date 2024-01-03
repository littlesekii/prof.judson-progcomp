#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

struct balao {
	float diametro;
	char marca[20];
	int modelo;
};

int main(void) {
	system("chcp 1252 > nil");

	balao* b = new balao;

	cout << "Entre com o diâmetro: ";
	cin >> b->diametro;

	cout << "Entre com a marca: ";
	cin.ignore();
	cin.getline(b->marca, sizeof(b->marca) / sizeof(char));

	cout << "Entre com o modelo: ";
	cin >> b->modelo;

	system("cls");
	char* output = new char[101];
	sprintf(
		output, 
		"Informações do Balão\n  Diâmetro: %.1f\n  Marca: %s\n  Modelo: %04d",
		b->diametro,
		(*b).marca,
		b->modelo
	);

	cout << output;

	delete b;
	delete[] output;

	return 0;
}