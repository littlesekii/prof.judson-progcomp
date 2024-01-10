#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	int matriz[][4]
	{
		{3, 1, 5, 5 },
		{1, 5, 5, 6 },
		{2, 3, 4, 5 },
		{4, 9, 1, 8 },
	};

	cout << "A soma das colunas é: ";

	for (size_t i{}, soma{}; i < 4; i++, soma = 0) {
		for (size_t j = 0; j < 4; j++)
			soma += matriz[j][i];
		cout << soma << ' ';
	}
			

	return 0;
}

