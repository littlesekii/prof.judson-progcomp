#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	int x, y;
	cout << "Digite um número inteiro: ";
	cin >> x;
	cout << "Digite outro número inteiro: ";
	cin >> y;

	int maior, menor;

	if (x > y) {
		menor = y;
		maior = x;
	}
	else {
		menor = x;
		maior = y;
	}

	int soma{};
	for (int i = menor + 1; i < maior; i++)
	{
		soma += i;
	}

	cout << "A soma de todos os valores entre " << x << " e " << y << ": " << soma << ".";

	return 0;
}