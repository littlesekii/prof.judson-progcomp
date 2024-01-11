#include <iostream>
#include <random>

using namespace std;

int somaDivisivel(int, int, int);

int main()
{
	system("chcp 1252 > nil");

	int divisor, start, end;
	cout << "Digite três números inteiros a, b e c (\"a\" maior que 1):" << endl;
	cin >> divisor >> start >> end;
	cout << "A soma é igual a " << somaDivisivel(divisor, start, end) << ".";
		
}

int somaDivisivel(int divisor, int start, int end) 
{
	int soma{};
	for (int i = start; i <= end; i++)
		if (i % divisor == 0)
			soma += i;

	return soma;
}