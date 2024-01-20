#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>

using namespace std;

struct produto
{
	float preco;
	float precoAtacado;
	int qtdAtacado;
};

float valorPedido(produto, int);
float totalPedido(const produto*, const int*, const int);

int main()
{
	system("chcp 1252 > nil");

	produto* p;
	int* qtd;

	ifstream fin;
	fin.open("produtos.txt", ios::in);
	
	if (!fin.is_open())
	{
		exit(EXIT_FAILURE);
	}

	int tam{};
	fin >> tam;

	p = new produto[tam]{};

	int i{};
	while (!fin.eof())
	{
		char discard[10]{};
		fin >> discard;

		fin >> (p + i)->preco;

		fin >> discard;

		fin >> (p + i)->precoAtacado;

		fin >> discard;

		fin >> (p + i)->qtdAtacado;	

		i++;
	}
	fin.close();

	fin.open("pedido.txt", ios::in);

	if (!fin.is_open())
	{
		exit(EXIT_FAILURE);
	}

	fin >> tam;

	qtd = new int[tam]{};

	i = 0;
	while (!fin.eof())
	{
		fin >> *(qtd + i);
		i++;
	}

	cout << fixed;
	cout.precision(2);
	cout << "Valor total: R$" << totalPedido(p, qtd, tam);

	delete[] p;
	delete[] qtd;
	return 0;
}

float valorPedido(produto p, int qtd)
{
	if (qtd >= p.qtdAtacado)
		return qtd * p.precoAtacado;
	else
		return qtd * p.preco;
}

float totalPedido(const produto* p, const int* qtd, const int tam)
{	
	float precoTotal{};
	for (size_t i = 0; i < tam; i++)
	{
		precoTotal += valorPedido(*(p + i), *(qtd + i));
	}

	return precoTotal;
}