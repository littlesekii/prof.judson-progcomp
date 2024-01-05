#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	char palavra1[11]{};
	char palavra2[11]{};
	char palavra3[11]{};
	char palavra4[11]{};

	cout << "Digite 4 palavras:\n";
	cin >> palavra1 >> palavra2 >> palavra3 >> palavra4;

	size_t lenPalavra1 = strlen(palavra1);
	size_t lenPalavra2 = strlen(palavra2);
	size_t lenPalavra3 = strlen(palavra3);
	size_t lenPalavra4 = strlen(palavra4);
								
	size_t charCount{
		lenPalavra1 +
		lenPalavra2 +
		lenPalavra3 +
		lenPalavra4 + 3 + 1 //espaços + \0
	};


	char* concateno = new char[charCount] {};

	/*for (size_t i = 0; i <= lenPalavra1; i++)
		*(concateno++) = (i == lenPalavra1) ? ' ' : palavra1[i];

	for (size_t i = 0; i <= lenPalavra2; i++)
		*(concateno++) = (i == lenPalavra2) ? ' ' : palavra2[i];

	for (size_t i = 0; i <= lenPalavra3; i++)
		*(concateno++) = (i == lenPalavra3) ? ' ' : palavra3[i];

	for (size_t i = 0; i < lenPalavra4; i++)
		*(concateno++) = palavra4[i];*/


	strcpy(concateno, palavra1);
	concateno += lenPalavra1;
	strcpy(concateno++, " ");

	strcpy(concateno, palavra2);
	concateno += lenPalavra2;
	strcpy(concateno++, " ");

	strcpy(concateno, palavra3);
	concateno += lenPalavra3;
	strcpy(concateno++, " ");

	strcpy(concateno, palavra4);
	concateno += lenPalavra4;


	concateno -= charCount - 1;
	cout << "Concatenando as palavras obtém-se:\n" << concateno;

	delete[] concateno;

}