#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	char texto[301]{};

	char palavra[31];
	cout << "Digite palavras (s para sair):\n";
	cin >> palavra;

	while (strcmp(palavra, "s")) 
	{
		strcat(texto, " ");
		strcat(texto, palavra);		

		cin >> palavra;
	}

	cout << endl;
	cout << texto;
	cout << endl;
	cout << endl;

	int qtdVogais{}, qtdConsoantes{}, qtdOutras{};
	for (size_t i = 0; texto[i] != '\0'; i++)
	{
		
		if (isspace(texto[i]))
		{
			char primeiraLetra{ texto[i + 1] };

			if (isalpha(primeiraLetra))
			{
				switch (primeiraLetra)
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
			else
				qtdOutras++;
		}
	}

	cout << qtdVogais << " palavras começam por vogais\n"
		<< qtdConsoantes << " palavras começam por consoantes\n"
		<< qtdOutras << " outras palavras";


	return 0;
}