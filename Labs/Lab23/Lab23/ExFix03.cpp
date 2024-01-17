#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <cctype>
#include <locale.h>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	setlocale(LC_ALL, "Portuguese");

	ifstream fin;
	fin.open("meutextolegal.txt");

	if (!fin.is_open()) 
	{
		cout << "Não foi possível abrir o arquivo \"meutextolegal.txt\"";
		exit(EXIT_FAILURE);
	}

	int qtdCaracteres{};
	int qtdVogais{};
	int qtdConsoantes{};
	int qtdOutros{};

	char c;
	while (fin.get(c))
	{
		qtdCaracteres++;

		if (!isalpha(c))
			qtdOutros++;
		else
			switch (c)
			{
				case 'a':
				case 'A':
				case 'e':
				case 'E':
				case 'i':
				case 'I':
				case 'o':
				case 'O':
				case 'u':
				case 'U':
					qtdVogais++;
					break;
				default:
					qtdConsoantes++;
			}			
	}

	cout << "Quantidade de caracteres: " << qtdCaracteres << endl;
	cout << "Quantidade de vogais: " << qtdVogais << endl;
	cout << "Quantidade de consoantes: " << qtdConsoantes << endl;
	cout << "Quantidade de outros: " << qtdOutros << endl;

	return EXIT_SUCCESS;
}