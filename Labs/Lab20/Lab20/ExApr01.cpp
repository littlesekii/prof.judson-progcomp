#include <iostream>

using namespace std;

int main() 
{
	system("chcp 1252 > nil");

	int km;
	cout << "Quantidade de quil�metros da viagem: ";
	cin >> km;

	float preco;
	if (km <= 200)
		preco = 0.5f;
	else if (km <= 400)
		preco = 0.4f;
	else
		preco = 0.3f;

	cout << "O pre�o vai ficar R$" << preco << " por km."
		"\nNo total d� uns R$" << preco * km << " conto.";

	return 0;
}