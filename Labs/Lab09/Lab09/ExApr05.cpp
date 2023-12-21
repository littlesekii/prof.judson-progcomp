#include <iostream>

using namespace std;

int main() {
	system("chcp 1252 > nil");

	double valor = 245.795;
	int valorInteiro = valor;

	cout << valor * 100 << endl;
	cout << valorInteiro * 100 << endl;

	return 0;
}