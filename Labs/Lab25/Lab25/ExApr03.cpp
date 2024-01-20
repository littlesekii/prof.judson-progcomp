#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int locate(const int*, const int, const int);

bool openSpace(int*, const int, const int);

int primeiroValorMaior(const int*, const int, const int);

int main()
{

	system("chcp 1252 > nil");

	int vet[10]{ -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };

	cout << "Digite 10 valores:\n";

	int val{};
	
	for (size_t i = 0; i < 10; i++)
	{
		cin >> val;

		int maior{};
		maior = primeiroValorMaior(vet, 10, val);

		int posMaior{};
		posMaior = locate(vet, 10, maior);

		if (openSpace(vet, 10, posMaior))
			vet[posMaior] = val;

	}
	
	cout << "Os valores ordenados:\n";
	for (size_t i = 0; i < 10; i++)
	{
		cout << vet[i] << " ";
	}

	return EXIT_SUCCESS;
}

int locate(const int* vet, const int tam, const int value) 
{
	for (size_t i = 0; i < tam; i++)
	{
		if (vet[i] == value)
			return i;
	}
	return -1;
}

bool openSpace(int* vet, const int tam, const int pos) 
{
	int space{};
	for (size_t i = 0; i < tam; i++)
	{
		if (vet[i] == -1)
			space++;
	}
	if (!space)
		return false;

	int aux{};
	for (int i = tam - 1 - 1; i >= pos; i--)
	{
		vet[i + 1] = vet[i];
	}

	return true;
}

int primeiroValorMaior(const int* vet, const int tam, const int comp)
{
	for (size_t i = 0; i < tam; i++)
	{
		if (vet[i] > comp)
			return vet[i];
	}
	return -1;
}