#include <iostream>

using namespace std;

void main()
{
	system("chcp 1252 > nil");

	int anos, qtd;
	float valor;

	cout << "Há quantos anos você fuma? ";
	cin >> anos;

	cout << "Quantos cigarros você fuma por dia? ";
	cin >> qtd;

	cout << "Qual o preço médio da carteira de cigarros? ";
	cin >> valor;

	float qtdFumado = ((anos * 365) * 5) / 20.0;

	float total = qtdFumado * valor;

	cout << "Você gastou até agora R$" << total << " com cingaros. Dava pra comprar um PS5!";

}