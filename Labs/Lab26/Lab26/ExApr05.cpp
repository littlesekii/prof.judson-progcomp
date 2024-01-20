#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

struct CharSet
{
	char* str; // ponteiro para vetor dinâmico
	int tam; // tamanho do vetor
};

int main()
{
	system("chcp 1252 > nil");

	CharSet string;

	string.tam = 101;
	string.str = new char[101] {};

	strcpy(string.str, "Batata Doce");

	cout << string.str;

	return 0;
}
