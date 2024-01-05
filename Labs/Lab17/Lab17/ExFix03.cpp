#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	char palavra[101]{};
	char palavraInvertida[101]{};

	cout << "Digite uma palavra: ";
	cin.getline(palavra, 101);

	unsigned short tamanhoPalavra = strlen(palavra);
	for (size_t i{ 0 }; palavra[i]; i++)
	{
		palavraInvertida[i] = palavra[tamanhoPalavra - i - 1];
	}

	cout << "Palavra invertida: " << palavraInvertida;
	cout << endl;

	if(strcmp(palavra, palavraInvertida))
		cout << "A palavra não é um palíndromo\n";
	else
		cout << "A palavra é um palíndromo\n";


	return 0;
}