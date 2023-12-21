#include <iostream>

using namespace std;

int main() {

	system("chcp 1252 > nil");

	double x1, x2;

	cout << "Digite o valor x1: ";
	cin >> x1;
	cout << "Digite o valor x2: ";
	cin >> x2;

	int soma = int(x1) + int(x2);

	cout << "A adição inteira dos valores é " << soma << ".";

	return 0;
}