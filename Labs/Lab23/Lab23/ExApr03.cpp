#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>	

using namespace std;

struct aluno 
{
	char nome[33]{};
	char serie[3];
};

int main()
{
	system("chcp 1252 > nil");

	aluno alunos[15]{};

	ifstream fin;
	fin.open("interclasse.txt");
	if (!fin.is_open())
	{
		cout << "Abertura do arquivo interclasse.txt falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	int cont{};
	char valor[32]{};
	while (!fin.eof())
	{
		fin >> valor;
		strcat(alunos[cont].nome, valor);

		strcat(alunos[cont].nome, " ");

		fin >> valor;
		strcat(alunos[cont].nome, valor);

		fin >> valor;
		strcat(alunos[cont].serie, valor);
		
		cont++;
	}

	cout << "Matutino 6a Série\n";
	cout << "-----------------\n";

	for (size_t i = 0; i < 15; i++)
	{
		if (!strcmp(alunos[i].serie, "M6"))
			cout << alunos[i].nome << "\t" << alunos[i].serie << endl;
	}

	cout << endl;
	cout << "Matutino 7a Série\n";
	cout << "-----------------\n";

	for (size_t i = 0; i < 15; i++)
	{
		if (!strcmp(alunos[i].serie, "M7"))
			cout << alunos[i].nome << "\t" << alunos[i].serie << endl;
	}

	cout << endl;
	cout << "Matutino 8a Série\n";
	cout << "-----------------\n";

	for (size_t i = 0; i < 15; i++)
	{
		if (!strcmp(alunos[i].serie, "M8"))
			cout << alunos[i].nome << "\t" << alunos[i].serie << endl;
	}

	cout << endl;
	cout << "Vespertino 6a Série\n";
	cout << "-------------------\n";

	for (size_t i = 0; i < 15; i++)
	{
		if (!strcmp(alunos[i].serie, "T6"))
			cout << alunos[i].nome << "\t" << alunos[i].serie << endl;
	}

	cout << endl;
	cout << "Vespertino 7a Série\n";
	cout << "-------------------\n";

	for (size_t i = 0; i < 15; i++)
	{
		if (!strcmp(alunos[i].serie, "T7"))
			cout << alunos[i].nome << "\t" << alunos[i].serie << endl;
	}

	cout << endl;
	cout << "Vespertino 8a Série\n";
	cout << "-------------------\n";

	for (size_t i = 0; i < 15; i++)
	{
		if (!strcmp(alunos[i].serie, "T8"))
			cout << alunos[i].nome << "\t" << alunos[i].serie << endl;
	}

	fin.close();

	return 0;
}