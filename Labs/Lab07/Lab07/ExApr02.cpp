#include <iostream>

using namespace std;

char codificar(char);
char decodificar(char);

int main() {

	system("chcp 1252 > nil");

	char caracter;
	cout << "Entre com um caracter: ";
	cin >> caracter;

	bool encode;
	cout << "Digite (1) para codificar ou (0) para decodificar: ";
	cin >> encode;

	if (encode)
		cout << "Caractere codificado: " << codificar(caracter);
	else
		cout << "Caractere decodificado: " << decodificar(caracter);

	return 0;
}

char codificar(char c) {
	return c + 3;
}

char decodificar(char c) {
	return c - 3;
}