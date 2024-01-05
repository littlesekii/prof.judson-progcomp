#include <iostream>

using namespace std;

void main()
{

	setlocale(LC_ALL, "Portuguese");

	const char* mes[]
	{
		"Janeiro",
		"Fevereiro",
		"Março",
		"Abril",
		"Maio",
		"Junho",
		"Julho",
		"Agosto",
		"Setembro",
		"Outubro",
		"Novembro",
		"Dezembro"
	};

	int vendas[12]{};
	int totalVendas{};

	cout << "Digite o número de livros vendidos: \n\n";
	for (int i = 0; i < 12; i++) 
	{
			
		cout << *(mes + i) << ": ";
		cin >> vendas[i];
		totalVendas += vendas[i];
	}
	cout << "\nEm um ano foram vendidos " << totalVendas << " livros.";
		

}