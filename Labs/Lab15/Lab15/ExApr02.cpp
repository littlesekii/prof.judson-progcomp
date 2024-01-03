#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main(void) {
	system("chcp 1252 > nil");

	int* n = new int{ 100 };

	cout << "Conteúdo armazenado: " << *n;
	cout << endl;

	cout << "Digite novo valor para esse bloco de memória: ";
	cin >> *n;

	cout << "Conteúdo armazenado: " << *n;

	delete n;

	return 0;
}