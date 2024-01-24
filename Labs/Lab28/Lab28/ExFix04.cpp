#include <iostream>

using namespace std;

struct par { int x; int y; };

void calcular(const par&, int&, int&);

int main()
{
	system("chcp 1252 > nil");

	par p{ 4, 5 };

	cout << "Digite um par de valores:\n";
	cin >> p.x;
	cin >> p.y;

	int soma{}, produto{};

	calcular(p, soma, produto);

	cout << "Soma: " << soma;
	cout << endl;
	cout << "Produto: " << produto;

	return EXIT_SUCCESS;
}

void calcular(const par& p, int& soma, int& produto)
{
	soma = p.x + p.y;
	produto = p.x * p.y;
}