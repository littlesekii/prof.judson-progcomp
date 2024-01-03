#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

struct local {
	char nome[101];
	char pais[101];
	char continente[101];
};

int main(void) {
	system("chcp 1252 > nil");

	unsigned short qtd{};
	cout << "Quantos locais deseja visitar? ";
	cin >> qtd;
	cin.ignore();

	local* locais = new local[qtd];

	for (int i = 0; i < qtd; i++) {
		cout << "Local #" << i+1;
		cout << "\nDigite o nome: ";
		cin.getline((locais + i)->nome, 101);
		cout << "Digite o país: ";
		cin.getline((locais + i)->pais, 101);
		cout << "Digite o continente: ";
		cin.getline((locais + i)->continente, 101);
		system("cls");
	}

	

	for (int i = 0; i < qtd; i++) {
		char output[101]{};

		sprintf(output,
			(
				"Local #%d\n"
				"Nome: %s\n"
				"País: %s\n"
				"Continente: %s"
				),
			i + 1,
			(locais + i)->nome,
			(locais + i)->pais,
			(locais + i)->continente
		);
		cout << output;
		cout << endl << endl;
	}


	delete[] locais;

	return 0;
}