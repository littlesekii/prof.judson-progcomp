#include <iostream>
#include <cctype>
using namespace std;

int contarPalavras(const char*);

int main()
{
	system("chcp 1252 > nil");

	char frase[100];
	cout << "Entre com uma frase:";
	cin.getline(frase, 100);

	cout << "Existem " << contarPalavras(frase) << " palavras nesta frase!";

	return 0;
}

int contarPalavras(const char* frase)
{
	int qtd{};
	
	for (size_t i = 0; frase[i]; i++)
	{
		if 
		(
			((i == 0) && isalnum(frase[i])) || 
			(isspace(frase[i]) && isalnum(frase[i + 1]))
		)
			qtd++;
	}

	return qtd;
}
