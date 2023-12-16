#include <iostream>

using namespace std;

float aumento(float);

int main()
{
	system("chcp 1252 > nil");

	float salario;
	cout << "Salário atual: R$";
	cin >> salario;

	cout << "Salário ajustado para R$" << aumento(salario);
}

float aumento(float valor) {
	return valor + valor * 15 / 100;
}
