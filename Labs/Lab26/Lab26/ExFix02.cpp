#include <iostream>
#include <array>
#include <string>

using namespace std;

const char* Mes[] = { "Marco", "Abril", "Junho", "Julho" };

struct vector
{
	static const int tam = 4;
	double valor[tam];

};

void preencher(vector* vec);
void mostrar(vector* vec);

int main()
{
	vector gastos;
	preencher(&gastos);
	mostrar(&gastos);
	return 0;
}

void preencher(vector* vec)
{
	for (int i = 0; i < vec->tam; i++)
	{
		cout << "Entre com o gasto de " << Mes[i] << ": ";
		cin >> vec->valor[i]; // (*vet)[i];
	}
}

void mostrar(vector* vec)
{
	double total = 0.0;
	cout << "\nGastos\n";
	for (int i = 0; i < vec->tam; i++)
	{
		cout << Mes[i] << ": R$" << vec->valor[i] << endl;
		total += vec->valor[i];
	}
	cout << "Total de gastos: R$" << total << endl;
}
