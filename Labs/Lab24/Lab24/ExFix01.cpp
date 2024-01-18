#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	ifstream fin;
	fin.open("integer.bin", ios::in | ios::binary);

	if (fin.is_open())
	{
		cout << "Arquivo integer.bin encontrado!" << endl;
		int integer{};

		fin.read((char*)(&integer), sizeof(integer));

		cout << "Ele contém o número " << integer << "." << endl << endl;
	}

	fin.close();

	int integer{};
	cout << "Digite um número: ";
	cin >> integer;

	ofstream fout;
	fout.open("integer.bin");

	if (!fout.is_open())
	{
		cout << "Falha ao abrir o arquivo.";
		exit(EXIT_FAILURE);
	}

	fout.write((char*)(&integer), sizeof(integer));
	cout << "Número armazenado no arquivo integer.bin.";

	fout.close();

	return EXIT_SUCCESS;
}