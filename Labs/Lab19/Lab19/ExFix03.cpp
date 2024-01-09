#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	int qtdCifrao{ 1 };
	int qtdEspaco{ 8 };
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t i = 0; i < qtdEspaco / 2; i++) {
			cout << ' ';
		}

		for (size_t i = 0; i < qtdCifrao; i++) {
			cout << '$';
		}

		for (size_t i = 0; i < qtdEspaco / 2; i++) {
			cout << ' ';
		}
		qtdCifrao += 2;
		qtdEspaco -= 2;
		cout << endl;
	}

	return 0;
}