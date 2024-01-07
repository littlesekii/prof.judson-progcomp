#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");


	int i = 0;
	while (++i < 4)
		cout << "Oi! ";
	do
		cout << "Tchau! ";
	while (i++ <= 8);


	return 0;
}