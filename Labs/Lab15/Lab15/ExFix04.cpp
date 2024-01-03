#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

struct carro {
	char modelo[101];
	unsigned short ano;
	float preco;
};

void valorTotal(carro*);

int main(void) {
	system("chcp 1252 > nil");

	carro* carros = new carro[2];

	cout << "Entre com os dados de 2 carros:\n";
	cin >> carros->modelo >> carros->ano >> carros->preco;
	carros++;
	cin >> carros->modelo >> carros->ano >> carros->preco;

	valorTotal(carros);

	delete[] carros;

	return 0;
}

void valorTotal(carro* c) {
	char output[101]{};

	setlocale(LC_NUMERIC, "Portuguese");
	sprintf(output,
		"O valor total é R$%.2f",
		c->preco + (c + 1)->preco
	);

	cout << output;
}