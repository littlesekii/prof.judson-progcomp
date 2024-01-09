#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	int matriz[5][5]
	{
		{38, 51, 50, 56, 98},
		{17, 65, 25, 62, 54},
		{23, 23, 64, 45, 92},
		{41, 39, 19, 68, 87},
		{65, 10, 12, 22, 13},
	};

	int soma{};
	for (size_t i = 0; i < 5; i++)
		for (size_t j = 0; j < 5; j++)
			soma += matriz[i][j];

	cout << "A soma da matriz é " << soma << endl;
	cout << "A média da matriz é " << soma / 25.0;

	return 0;

}