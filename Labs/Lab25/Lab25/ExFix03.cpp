#include <iostream>

using namespace std;

int* preencheVetor(int*, int*);
void mostraVetor(const int*, const int*);
void inverteVetor(int*, int*);

int main()
{
	system("chcp 1252 > nil");

	int vet[10];
	cout << "Entre com até 10 valores: \n";

	
	int* last = preencheVetor(vet, vet + 10);

	mostraVetor(vet, last);
	cout << endl;

	inverteVetor(vet, last);
	mostraVetor(vet, last);
	cout << endl;

	inverteVetor(vet + 1, last - 1);
	mostraVetor(vet, last);
	cout << endl;


	return EXIT_SUCCESS;
}

int* preencheVetor(int* start, int* end)
{
	int value;
	while (((start != end) && (cin >> value)))
	{
		*(start++) = value;
	}

	return --start;
}

void mostraVetor(const int* start, const int* end)
{
	do
		cout << *start << " ";
	while (start++ != end);
}

void inverteVetor(int* start, int* end)
{
	while (start < end)
	{
		int aux{};
		aux = *start;
		*start = *end;
		*end = aux;

		++start, --end;
	}
}