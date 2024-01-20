#include <iostream>

using namespace std;

int preencheVetor(int*, int);
void mostraVetor(const int*, int);
void inverteVetor(int*, int);

int main()
{
	system("chcp 1252 > nil");

	int vet[10];
	cout << "Entre com até 10 valores: \n";
	int qtd = preencheVetor(vet, 10);

	mostraVetor(vet, qtd);
	cout << endl;

	inverteVetor(vet, qtd);
	mostraVetor(vet, qtd);
	cout << endl;

	inverteVetor(vet+1, qtd - 2);
	mostraVetor(vet, qtd);
	cout << endl;
	

	return EXIT_SUCCESS;
}

int preencheVetor(int* vet, int size) 
{
	int value;
	int i = 0;
	while (((i < size) && (cin >> value)))
	{
		vet[i++] = value;
	}

	return i;
}

void mostraVetor(const int* vet, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << vet[i] << " ";
	}
}

void inverteVetor(int* vet, int size)
{
	for (size_t i = 0; i < size - i - 1; i++)
	{
		int aux{};
		aux = vet[i];
		vet[i] = vet[size - i - 1];
		vet[size - i - 1] = aux;
	}
}