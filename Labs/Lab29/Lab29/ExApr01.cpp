#include <iostream>
#include <fstream>

using namespace std;

void unidade(ifstream&, int);

int main()
{
	system("chcp 1252 > nil");

	ifstream fin;
	fin.open("stats.txt", ios::in);

	if (fin.is_open())
	{
		unidade(fin, 1);
		cout << endl;
		cout << endl;
		unidade(fin, 2);
		cout << endl;
		cout << endl;
		unidade(fin, 3);
	}

	fin.close();

	return 0;
}

void unidade(ifstream& fin, int unidade)
{
	const int AULAS_POR_UNIDADE = 10;
	int primeiroIndice{ AULAS_POR_UNIDADE * (unidade - 1) };

	struct {
		int rev{};
		int fix{};
		int apr{};
	} detalhesUnidade;
		

	fin.seekg(0, ios::beg);
	//pula até a primeira linha da unidade escolhida
	for (int i = 0; i < primeiroIndice; i++)
	{
		int val;
		fin >> val;
		fin >> val;
		fin >> val;
		fin >> val;
	}

	//pega cada valor da unidade
	for (size_t i = 0; i < AULAS_POR_UNIDADE; i++)
	{

		int val;
		fin >> val;

		fin >> val;
		detalhesUnidade.rev += val;

		fin >> val;
		detalhesUnidade.fix += val;

		fin >> val;
		detalhesUnidade.apr += val;
	}

	cout << "-----------\n";
	cout << unidade << "a unidade\n";
	cout << "-----------\n";
	cout << "Revisão: " << detalhesUnidade.rev << endl;
	cout << "Fixação: " << detalhesUnidade.fix << endl;
	cout << "Aprendi: " << detalhesUnidade.apr << endl;
	cout << "-----------\n";
	cout << "Total: " << detalhesUnidade.rev + detalhesUnidade.fix + detalhesUnidade.apr;
}