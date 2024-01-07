#include <iostream>

using namespace std;

bool palindromo(char*);

int main()
{
	system("chcp 1252 > nil");

	char frase[61]{};

	size_t i{ 0 };
	char temp{};
	do
	{		
		temp = cin.get();
		if (temp != ' ' && temp != '\n')
			frase[i++] = temp;
	} while (temp != '\n');

	cout << boolalpha;
	cout << palindromo(frase);

	return 0;
}

bool palindromo(char* palavra) {

	size_t tamanhoPalavra{ strlen(palavra) };

	for (size_t i = 0; i < tamanhoPalavra; i++)
	{
		if (palavra[i] != palavra[(tamanhoPalavra - 1) - i])
			return false;
	}

	return true;
}