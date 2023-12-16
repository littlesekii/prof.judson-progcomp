#include <iostream>

using namespace std;

float media(int, int);

int main(void) {

	system("chcp 1252 > nil");

	int x, y;
	cout << "Digite um valor inteiro: ";
	cin >> x;

	cout << "Digite outro valor inteiro: ";
	cin >> y;

	cout << "A média dos números é " << media(x, y);

	return 0;
}

float media(int x, int y) {
	return (x + y) / 2.0;
}