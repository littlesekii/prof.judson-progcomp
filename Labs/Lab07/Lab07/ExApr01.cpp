#include <iostream>

using namespace std;

char codificar(char);
char decodificar(char);

int main() {

	system("chcp 1252 > nil");

	char caracter;
	cout << "Entre com um caracter: ";
	cin >> caracter;

	cout << "Caractere codificado: " << codificar(caracter);
	cout << endl << endl;
	cout << "Caractere decodificado: " << decodificar(caracter);

	return 0;
}

char codificar(char c) {
	return c + 3;
}
char decodificar(char c) {
	return c - 3;
}