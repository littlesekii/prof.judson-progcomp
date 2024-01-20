#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void firstName(unsigned char* , unsigned const char*);
void lastName(unsigned char*, unsigned const char*);

int main()
{
	system("chcp 1252 > nil");

	char nome[101];
	cout << "Entre com os nomes a cadastrar (\".\" para encerrar):\n";
	cin.getline(nome, 101);

	while (strcmp(nome, "."))
	{
		unsigned char first[31]{}, last[31]{};
		firstName(first, (unsigned char*)nome);
		lastName(last, (unsigned char*)nome);
		cout << last << ", " << first << endl;

		cin.getline(nome, 101);
	}

	return 0;
}

void firstName(unsigned char* dest, unsigned const char* source)
{
	while (!isspace(*source))
		*(dest++) = *(source++);
}

void lastName(unsigned char* dest, unsigned const char* source)
{
	source += strlen((const char*)source) - 1;

	while (!isspace(*(source - 1)))
		source--;

	while (*source)
		*(dest++) = *(source++);
}
