#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	cout << "Digite um texto (# para finalizar):\n";

	int qtdSubs{};
	char c = '\0';
	do
	{
		if (c == '.') {
			cout << "!";
			qtdSubs++;
		}
		else {
			cout << c;
		}
		if (c == '!') {
			cout << '!';
			qtdSubs++;
		}

		cin.get(c);
	} while (c != '#');

	cout << endl << "Substituições: " << qtdSubs;

	return 0;
}