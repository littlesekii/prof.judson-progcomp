#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	int velocidade;
	cout << "As últimas 10 velocidades registradas:" << endl;
	
	int qtdMultados{}, valorTotalMulta{};
	for (size_t i = 0; i < 10; i++)
	{
		cin >> velocidade;
		
		if (velocidade > 80)
		{
			cout << velocidade
				<< "Km/h excede o limite = multa de R$" 
				<< (velocidade - 80) * 8
				<< endl;

			qtdMultados++;

			valorTotalMulta += (velocidade - 80) * 8;

		}
	}

	cout << qtdMultados << " carros foram multados em um valor total de R$" << valorTotalMulta << ".";

	return 0;
}