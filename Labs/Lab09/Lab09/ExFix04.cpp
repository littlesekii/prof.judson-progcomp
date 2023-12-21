#include <iostream>

using namespace std;

int main() {

	system("chcp 1252 > nil");

	cout << "Aposta dos Amigos" << endl;
	cout << "-----------------" << endl;

	float apostaJ1, apostaJ2;
	int valorPremio;

	cout << "Digite a quantia apostada pelo jogador 1: ";
	cin >> apostaJ1;
	cout << "Digite a quantia apostada pelo jogador 2: ";
	cin >> apostaJ2;

	cout << "Entre com o valor do prêmio: ";
	cin >> valorPremio;

	float totalApostado = apostaJ1 + apostaJ2;
	float partJ1, partJ2;

	partJ1 = apostaJ1 / totalApostado;
	partJ2 = apostaJ2 / totalApostado;

	cout << endl;

	cout << fixed;
	cout.precision(2);
	cout << "O jogador 1 tem " << partJ1 * 100 << "% de participação.";
	cout << endl;
	cout << "O jogador 2 tem " << partJ2 * 100 << "% de participação.";

	cout << endl << endl;

	cout << fixed;
	cout.precision(0);
	cout << "O jogador 1 tem direito a R$" << valorPremio * partJ1;
	cout << endl;
	cout << "O jogador 2 tem direito a R$" << valorPremio * partJ2;

	return 0;
}