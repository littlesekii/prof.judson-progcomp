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

	// Declaração da variável
	int numero;
	char letra;

	// Pedido de input
	cout << "Insira uma letra: ";
	cin >> letra;
	// Pedido de input
	cout << "Insira um número inteiro: ";
	cin >> numero;

	ASCII* ascii = alocaASCII(letra, numero);

	cout << ascii << " - " << ascii->caractere << "|" << ascii->valor;

	delete ascii;

	return 0;
}

ASCII* alocaASCII(char caractere, int valor) {
	// Aloca memória para o elemento ASCII
	ASCII* ascii = new ASCII;

	// Inicializa os campos do elemento ASCII
	ascii->caractere = caractere;
	ascii->valor = valor;

	// Retorna o endereço de memória do elemento ASCII
	return ascii;
}