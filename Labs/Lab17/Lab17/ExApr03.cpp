#include <iostream>

using namespace std;

int somarRange(int, int);

int main()
{
	system("chcp 1252 > nil");

	int inicio, fim;
	cout << "Digite o n�mero inicial: ";
	cin >> inicio;

	cout << "Digite o n�mero final: ";
	cin >> fim;

	int soma = somarRange(inicio, fim);

	cout << "A soma do range d� " << soma;

	return 0;
}

int somarRange(int start, int end) 
{
	int result{};
	for (size_t i = start; i <= end; i++)
		result += i;

	return result;
}