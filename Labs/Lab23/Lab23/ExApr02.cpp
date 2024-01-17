#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>	

using namespace std;

void minusculo(char*);
bool verificaPalindromo(const char*);

int main()
{
	system("chcp 1252 > nil");

	ifstream fin;
	fin.open("palindromos.txt");
	if (!fin.is_open())
	{
		cout << "Abertura do arquivo palindromos.txt falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	int qtdPalindromos{};
	char palavra[32];
	while (!fin.eof())
	{
		fin >> palavra;


		minusculo(palavra);

		if (verificaPalindromo(palavra)) 
		{
			cout << palavra << endl;
			qtdPalindromos++;
		}
	}

	cout << "E no fim, têm " << qtdPalindromos << " palíndromos no arquivo.";

	return 0;
}


void minusculo(char* palavra) {

	for (size_t i = 0; i < strlen(palavra); i++)
	{
		palavra[0] = tolower(palavra[0]);
	}
}

bool verificaPalindromo(const char* palavra) 
{
	int lastIndex = strlen(palavra) - 1;
	for (size_t i = 0; i < lastIndex - i; i++)
	{
		if (palavra[i] != palavra[lastIndex - i])
			return false;
	}

	return true;
}