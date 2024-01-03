#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

struct ASCII {
	char caractere;
	int valor;
};

ASCII* alocaASCII(char, int);

int main(void) {
	system("chcp 1252 > nil");

	// Declara��o da vari�vel
	int numero;
	char letra;

	// Pedido de input
	cout << "Insira uma letra: ";
	cin >> letra;
	// Pedido de input
	cout << "Insira um n�mero inteiro: ";
	cin >> numero;

	ASCII* ascii = alocaASCII(letra, numero);

	cout << ascii << " - " << ascii->caractere << "|" << ascii->valor;

	delete ascii;

	return 0;
}

ASCII* alocaASCII(char caractere, int valor) {
	// Aloca mem�ria para o elemento ASCII
	ASCII* ascii = new ASCII;

	// Inicializa os campos do elemento ASCII
	ascii->caractere = caractere;
	ascii->valor = valor;

	// Retorna o endere�o de mem�ria do elemento ASCII
	return ascii;
}