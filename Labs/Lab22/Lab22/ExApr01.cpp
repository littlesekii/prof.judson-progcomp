#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cctype>

using namespace std;

float valorMinimoDesconto = 100.f;
float desconto = 5.f / 100.f;

struct vegetal 
{
	const char *nome;
	float precoKg;
};

const vegetal vegetais[3]
{
	{ "Alface", 1.25f },
	{ "Beterraba", 0.65f },
	{ "Cenoura", 0.90f },
};

int main()
{
	system("chcp 1252 > nil");

	char escolha;

	float quilos[]{ 0.f, 0.f, 0.f };
	do
	{
		system("cls");

		cout << "Supermercado ABC\n"
			"----------------\n";

		char itens[301];
		sprintf(itens,
			(
				"a) %s\tR$%.2f/Kg\n"
				"b) %s\tR$%.2f/Kg\n"
				"c) %s\tR$%.2f/Kg\n"
				),
			vegetais[0].nome, vegetais[0].precoKg,
			vegetais[1].nome, vegetais[1].precoKg,
			vegetais[2].nome, vegetais[2].precoKg
		);
		cout << itens;

		cout << "Faça seu pedido usando as letras (a, b, c) e (s) para encerrar: ";
		cin >> escolha;

		switch (escolha) {
			case 'a':
				cout << "Digite a quantidade de quilos de " << vegetais[0].nome << ": ";
				cin >> quilos[0];
				break;
			case 'b':
				cout << "Digite a quantidade de quilos de " << vegetais[1].nome << ": ";
				cin >> quilos[1];
				break;
			case 'c':
				cout << "Digite a quantidade de quilos de " << vegetais[2].nome << ": ";
				cin >> quilos[2];
				break;
		}

	} while (escolha != 's');
	cout << endl << endl;

	float totalPedido{ 0.f };
	float valorDesconto{ 0.f };
	float valorEntrega{ 0.f };

	float totalKg = quilos[0] + quilos[1] + quilos[2];

	if (totalKg < 5)
		valorEntrega = 3.5f;
	else if (totalKg < 20)
		valorEntrega = 10.f;
	else
		valorEntrega = 8.f + (0.1f * totalKg);

	totalPedido += quilos[0] * vegetais[0].precoKg;
	totalPedido += quilos[1] * vegetais[1].precoKg;
	totalPedido += quilos[2] * vegetais[2].precoKg;

	if (totalPedido > 100)
		valorDesconto = -(totalPedido * desconto);

	cout << fixed;
	cout.precision(2);
	cout << "Produto      Preço/Kg    Pedido (Kg)   Total Parcial\n";
	cout << "----------   ---------   -----------   -------------\n";

	cout
		<< vegetais[0].nome
		<< "       R$" << vegetais[0].precoKg << "/Kg"
		<< "   " << quilos[0] << "Kg"
		<< "        R$" << vegetais[0].precoKg * quilos[0];

	cout << endl;

	cout
		<< vegetais[1].nome
		<< "    R$" << vegetais[1].precoKg << "/Kg"
		<< "   " << quilos[1] << "Kg"
		<< "        R$" << vegetais[1].precoKg * quilos[1];

	cout << endl;

	cout
		<< vegetais[2].nome
		<< "      R$" << vegetais[2].precoKg << "/Kg"
		<< "   " << quilos[2] << "Kg"
		<< "        R$" << vegetais[2].precoKg * quilos[2];

	cout << endl;

	/*cout <<
	cout <<*/

	
	cout << "----------------------------------------------------\n";

	cout << endl;

	cout << "Se o usuário fizesso o pedido acima, a saída seria:\n";

	cout << endl;

	cout << "Total do pedido:                       R$" << totalPedido << endl;
	cout << "Descontos:                             R$" << valorDesconto << endl;
	cout << "Custo de entrega:                      R$" << valorEntrega << endl;
	cout << "----------------------------------------------------\n";
	cout << "Total a pagar:                         R$" << totalPedido + valorDesconto + valorEntrega;

	return 0;
}