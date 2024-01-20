#include <iostream>
#include <array>
#include <string>

using namespace std; 

const char* Mes[] = {"Marco", "Abril", "Junho", "Julho"};

void preencher(double* vet, int tam);
void mostrar(const double* vet, int tam);

int main()
{
	double gastos[4];
	preencher(gastos, 4);
	mostrar(gastos, 4);
	return 0;
}

void preencher(double* vet, int tam)
{
	for (int i = 0; i < tam; i++)
	{
		cout << "Entre com o gasto de " << Mes[i] << ": ";
		cin >> vet[i]; // (*vet)[i];
	}
}

void mostrar(const double* vet, int tam)
{
	double total = 0.0;
	cout << "\nGastos\n";
	for (int i = 0; i < tam; i++)
	{
		cout << Mes[i] << ": R$" << vet[i] << endl;
		total += vet[i];
	}
	cout << "Total de gastos: R$" << total << endl;
}
