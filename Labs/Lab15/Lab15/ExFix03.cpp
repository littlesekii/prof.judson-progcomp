#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

struct carro {
	char modelo[101];
	unsigned short ano;
	float preco;
};

int main(void) {
	system("chcp 1252 > nil");

	carro carros[10]{
		{ "Vectra", 2009, 58'000 },
		{ "Polo", 2008, 45'000 },
	};

	carro* ptrCarro = &carros[1];

	char output[101]{};

	setlocale(LC_NUMERIC, "Portuguese");
	sprintf(output, 
		(
			"Modelo: %s\n"
			"Ano de fabricação: %04d\n"
			"Preço: R$%.2f"
		),
		ptrCarro->modelo,
		ptrCarro->ano,
		ptrCarro->preco
	);

	cout << output;

	return 0;
}