#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main(void) {
	system("chcp 1252 > nil");

	int* n = new int{ 100 };

	cout << "Conte�do armazenado: " << *n;
	cout << endl;

	cout << "Digite novo valor para esse bloco de mem�ria: ";
	cin >> *n;

	cout << "Conte�do armazenado: " << *n;

	delete n;

	return 0;
}