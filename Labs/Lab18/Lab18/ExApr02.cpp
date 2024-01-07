#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	int soma{};

	int i{ 0 };
	for (; i <= 100; i++)
		soma += (i % 2 != 0) ? i : 0;

	cout << soma << endl;
	soma = 0;

	i = 0;
	while (i <= 100) 
		soma += (i++ % 2 != 0) ? i : 0;

	cout << soma << endl;
	soma = 0;

	i = 0;
	do
		soma += (i++ % 2 != 0) ? i : 0;
	while (i <= 100);

	cout << soma << endl;

	return 0;
}