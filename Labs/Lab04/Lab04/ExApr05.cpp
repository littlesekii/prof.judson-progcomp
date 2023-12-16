#include <iostream>

using namespace std;

int Absoluto(int);

int main(void) {

	system("chcp 1252 > nil");

	int x;
	cout << "Digite um número inteiro: ";
	cin >> x;

	cout << "O valor absoluto é " << Absoluto(x) << ".";

	return 0;
}

int Absoluto(int x) {
	return sqrt(pow(x, 2));
}