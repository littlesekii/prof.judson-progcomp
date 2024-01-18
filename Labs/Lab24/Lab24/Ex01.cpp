#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	ifstream fin;
	fin.open("pescado.txt", ios::in);

	if (!fin.is_open()) 
	{
		cout << "Falha ao abrir o arquivo pescado.txt.";
		exit(EXIT_FAILURE);
	}

	char nome[20];
	unsigned peso;
	float comprimento;

	unsigned pesoTotal{};
	while (!fin.eof())
	{
		fin >> nome;
		fin >> peso;
		fin >> comprimento;

		pesoTotal += peso;
	}
	fin.close();
		
	cout << "O peso total dos peixes é de " << pesoTotal << "g";

	return EXIT_SUCCESS;
}