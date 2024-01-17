#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	ifstream fin;

	fin.open("notas.txt");

	if (!fin.is_open()) 
	{
		cout << "Falha ao abrir o arquivo notas.txt";
		exit(EXIT_FAILURE);
	}

	ofstream fout;
	fout.open("resultado.txt");
	if (!fout.is_open()) 
	{
		cout << "Falha ao abrir o arquivo resultado.txt";
		exit(EXIT_FAILURE);
	}

	while (!fin.eof()) 
	{
		char nome[10];
		fin >> nome;

		float n1, n2, n3;
		fin >> n1 >> n2 >> n3;

		float media = (n1 + n2 + n3) / 3;

		char situacao[32];
		if (media < 5)
			strcpy(situacao, "Reprovado");
		else if (media >= 7)
			strcpy(situacao, "Aprovado");
		else
			strcpy(situacao, "Quarta prova");

		fout << nome << " - " << situacao << endl;

	}

	fin.close();
	fout.close();

	cout << "Avaliação realizada.";

	return EXIT_SUCCESS;
}