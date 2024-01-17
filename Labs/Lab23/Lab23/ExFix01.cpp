#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	ifstream fin;

	fin.open("pescado.txt");

	if (!fin.is_open()) {
		cout << "Falha ao abrir o arquivo pescado.txt";
		exit(EXIT_FAILURE);
	}

	char nome[31];
	
	int kg;
	int centimetros;

	int totalKg{};
	while (!fin.eof()) {
		fin >> nome;
		fin >> kg;
		fin >> centimetros;

		totalKg += kg;
	}

	cout << "O total de kg é " << totalKg;

	fin.close();

	return EXIT_SUCCESS;
}