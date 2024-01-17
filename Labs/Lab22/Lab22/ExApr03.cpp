#include <iostream>
#include <cctype>

using namespace std;

struct prato
{
	char nome[40];
	float preco;
};

int main()
{
	system("chcp 1252 > nil");

	prato pratos[3]
	{
		{ "Sardinha", 15.40 },
		{ "Carne Assada", 25.40 },
		{ "Batata Baroa", 10.20 },
	};

	float total{};
	char escolha;
	do
	{
		system("cls");
		cout << "Cardápio:\n";
		for (size_t i = 0; i < 3; i++)
		{
			cout << pratos[i].nome << " - R$" << pratos[i].preco;
			cout << endl;
		}
		cout << "Vai pedir o que?? (a, b, c) e (s) para encerrar: ";
		cin >> escolha;

		switch (escolha)
		{
			case 'a':
				total += pratos[0].preco;
				break;
			case 'b':
				total += pratos[1].preco;
				break;
			case 'c':
				total += pratos[2].preco;
				break;
		} 
		
	} while (escolha != 's');

	cout << endl;
	cout << "Tu vai pagar R$" << total << " meu parceiro.";
	
	return 0;
}