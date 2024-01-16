#include <iostream>

using namespace std;

struct produto 
{
	char nome[31];
	float preco;
};

int main()
{
	system("chcp 1252 > nil");

	double totalCompra{};
	int qtdAcima1000{};

	produto prod{};
	produto produtoMaisCaro{};

	cout << "Loja de Informática\n";

	char input{};
	do
	{
		cout << "-------------------\n";
		cout << "Produto: ";
		cin >> prod.nome;
		cout << "Preço: ";
		cin >> prod.preco;
		cout << "-------------------\n";

		cout << "Deseja continuar[S/N]? ";
		cin >> input;
		cout << endl;

		if (produtoMaisCaro.preco < prod.preco)
			produtoMaisCaro = prod;

		if (prod.preco > 1000)
			qtdAcima1000++;

		totalCompra += prod.preco;

	} while (input == 's' || input == 'S');

	cout << "Total da compra: R$" << totalCompra << endl;
	cout << qtdAcima1000 << " produtos custam mais de R$1000" << endl;
	cout << produtoMaisCaro.nome << " é o produto mais caro, custando R$" << produtoMaisCaro.preco << endl;


}