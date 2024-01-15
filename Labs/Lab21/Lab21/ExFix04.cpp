#include <iostream>

using namespace std;

struct retirada
{
	int qtd50;
	int qtd20;
	int qtd10;
	int qtd5;
};

int main()
{
	system("chcp 1252 > nil");

	int saque;
	retirada notas{};

	cout << "Caixa Eletrônico\n";
	cout << "----------------\n";
	cout << "Saque: ";
	cin >> saque;



		notas.qtd50 = saque / 50;
		saque %= 50;

		notas.qtd20 = saque / 20;
		saque %= 20;

		notas.qtd10 = saque / 10;
		saque %= 10;

		notas.qtd5 = saque / 5;
		saque %= 5;


	cout << endl;

	cout << "Entregando:\n";
	cout << notas.qtd50 << " cédula(s) de R$50.\n";
	cout << notas.qtd20 << " cédula(s) de R$20.\n";
	cout << notas.qtd10 << " cédula(s) de R$10.\n";
	cout << notas.qtd5 << " cédula(s) de R$5.\n";
}