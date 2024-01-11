#include <iostream>
#include <random>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	double donates[10]{};

	double soma{}, qtd{};
	cout << "Digite ate 10 valores de donativos(zero para encerrar):\n";
	for (size_t i = 0; i < 10; i++)
	{
		cin >> donates[i];
		soma += donates[i];

		if (donates[i] == 0)
			i = 10;
		else
			qtd++;
	}

	double media = soma / qtd;

	int qtdMaior{};
	for (size_t i = 0; i < 10; i++)
	{
		if (donates[i] > media)
			qtdMaior++;

		if (donates[i] == 0)
			i = 10;
	}
	cout << fixed;
	cout.precision(2);
	cout << "A media dos valores doados foi de R$ " << media << "." << endl;

	cout << qtdMaior << " valores foram maiores que a media.";

	return 0;
}