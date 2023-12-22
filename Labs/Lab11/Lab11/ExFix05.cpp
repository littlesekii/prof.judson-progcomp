#include <iostream>

using namespace std;

char ultimaLetra(char[]);

int main() {
	system("chcp 1252 > nil");

	char palavra[20];

	cout << "Digite uma palavra: ";
	cin >> palavra;

	cout << "Em " << palavra << " a última letra é " << ultimaLetra(palavra) << ".";
}

char ultimaLetra(char texto[]) {
	return texto[strlen(texto) - 1];
}