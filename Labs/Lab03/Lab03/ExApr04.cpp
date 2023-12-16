#include <iostream>

using namespace std;

void main()
{
	system("chcp 1252 > nil");

	float custo;
	cout << "Custo de fábrica: ";
	cin >> custo;

	custo += custo * 0.28 + custo * 0.45;
	cout << "O custo ao consumidor é de R$" << custo;
}