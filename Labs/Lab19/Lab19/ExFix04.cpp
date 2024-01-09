#include <iostream>

using namespace std;

void exibirChar(char);

int main()
{
	system("chcp 1252 > nil");

	char c{};
	cout << "Digite um caractere: ";
	cin >> c;

	exibirChar(c);
	cout << "Programando em C++";
	exibirChar(c);

	return 0;
}

void exibirChar(char c) {
	cout << endl;
	for (size_t i = 0; i < 20; i++)
	{
		cout << c;
	}
	cout << endl;
}