#include <iostream>

using namespace std;

void main()
{
	system("chcp 1252 > nil");

	int anos, qtd;
	float valor;

	cout << "H� quantos anos voc� fuma? ";
	cin >> anos;

	cout << "Quantos cigarros voc� fuma por dia? ";
	cin >> qtd;

	cout << "Qual o pre�o m�dio da carteira de cigarros? ";
	cin >> valor;

	float qtdFumado = ((anos * 365) * 5) / 20.0;

	float total = qtdFumado * valor;

	cout << "Voc� gastou at� agora R$" << total << " com cingaros. Dava pra comprar um PS5!";

}