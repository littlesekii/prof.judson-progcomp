#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	unsigned short linhas;
	cout << "Entre com o número de linhas: ";
	cin >> linhas;

	for (size_t i{ 1 }; i <= linhas; i++)
	{
		for (size_t j{ 0 }; j < linhas - i; j++)
			cout << ".";

		for (size_t j{ linhas }; j > linhas - i; j--)
			cout << "*";

		cout << endl;
	}

	return 0;
}