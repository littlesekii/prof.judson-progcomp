#include <iostream>

using namespace std;

struct investimento {
	float valor;
	float rentabilidade;
	bool jurosCompostos;
};

float juros(float, short, float, bool);

int main()
{
	system("chcp 1252 > nil");

	investimento daiane{ 100, 10, false };
	investimento celia{ 100, 5, true };

	float valorFinalDaiane{};
	float valorFinalCelia{};

	int anos{};
	do
	{
		anos++;
		valorFinalDaiane = juros(daiane.valor, anos, daiane.rentabilidade, daiane.jurosCompostos);
		valorFinalCelia = juros(celia.valor, anos, celia.rentabilidade, celia.jurosCompostos);
	} while (valorFinalDaiane >= valorFinalCelia);

	cout << fixed;
	cout.precision(2);
	cout << "Se passaram " << anos << " anos para os saldos atingirem os valores" << endl;
	cout << "Daiane: " << valorFinalDaiane << endl;
	cout << "Celia: " << valorFinalCelia << endl;

	return 0;
}

float juros(float valor, short anos, float rentabilidade, bool jurosCompostos)
{
	rentabilidade /= 100.0f;

	float rendimento{};

	for (size_t i = 0; i < anos; i++)
	{
		if (jurosCompostos)
			rendimento += (valor + rendimento) * rentabilidade;
		else
			rendimento += valor * rentabilidade;
	}

	return valor + rendimento;
}
