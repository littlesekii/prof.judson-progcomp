#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main(void) {
	system("chcp 1252 > nil");


	unsigned short qtd;
	cout << "Quantos valores deseja guardar? ";
	cin >> qtd;

	int* valores = new int[qtd];

	cout << "Quais os valores? ";

	for (int i = 0; i < qtd; i++)
		cin >> *(valores + i);

	cout << "Os valores ";
	for (int i = 0; i < qtd; i++) {
		cout << *(valores + i);
		if (i < qtd - 2)
			cout << ", ";
		else if (i == qtd - 2)
			cout << " e ";
	}
	cout << " foram armazenados.";

	delete[] valores;

	return 0;
};