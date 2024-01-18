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

	fin.open("pescado.lit", ios::in | ios::binary);
	if (!fin.is_open())
	{
		cout << "Falha ao abrir o arquivo pescado.lit.";
		exit(EXIT_FAILURE);
	}


	cout << "Peixes cadastrados\n";
	cout << "------------------\n";


	peixe p{};
	while (fin.read((char*)(&p), sizeof(peixe)))
	{
		cout << "Nome: " << p.nome;
		cout << endl;
		cout << "Peso: " << p.peso;
		cout << endl;
		cout << "Comprimento: " << p.comprimento;
		cout << endl << endl;
	}
	fin.close();

	peixe novoPeixe{};
	cout << "Entre com um novo peixe\n";
	cout << "-----------------------\n";
	cout << "Nome: ";
	cin >> novoPeixe.nome;
	cout << "Peso: ";
	cin >> novoPeixe.peso;
	cout << "Comprimento: ";
	cin >> novoPeixe.comprimento;

	ofstream fout;
	fout.open("pescado.lit", ios::out | ios::app | ios::binary);

	if (!fout.is_open())
	{
		cout << "Falha ao abrir o arquivo pescado.lit.";
		exit(EXIT_FAILURE);
	}

	fout.write((char*)(&novoPeixe), sizeof(peixe));
	fout.close();

	return EXIT_SUCCESS;
}