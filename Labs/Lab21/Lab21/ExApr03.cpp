#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	int soma{};

	for (size_t i = 1; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			cout << (soma += i, i) << " ";
	}
	cout << endl;
	cout << "A soma destes números é " << soma;

	return 0;
}