#include <iostream>
#include <fstream>

using namespace std;

struct peixe
{
	char nome[20];
	unsigned peso;
	float comprimento;
};

int main()
{
	system("chcp 1252 > nil");

	ifstream fin;
	fin.open("pescado.txt", ios::in);

	if (!fin.is_open()) {
		cout << "Falha ao abrir o arquivo txt";
		exit(EXIT_FAILURE);
	}

	ofstream fout;
	fout.open("pescado.bin", ios::out | ios::binary);

	if (!fout.is_open()) {
		cout << "Falha ao abrir o arquivo bin";
		exit(EXIT_FAILURE);
	}

	peixe p{};
	while (!fin.eof()) 
	{
		fin >> p.nome;
		fin >> p.peso;
		fin >> p.comprimento;

		fout.write((char*)(&p), sizeof(peixe));

	}

	fin.close();
	fout.close();
	return EXIT_SUCCESS;
}