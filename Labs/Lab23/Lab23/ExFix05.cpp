#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");


	char arquivo[101];
	cout << "Digite o nome do arquivo: ";
	cin >> arquivo;

	ifstream fin;
	fin.open(arquivo);
	if (!fin.is_open())
	{
		cout << "Abertura do arquivo " << arquivo << " falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	char search[101];
	cout << "Palavra a ser procurada: ";
	cin >> search;

	bool achou{ false };
	char palavraAtual[32];
	while (fin >> palavraAtual && !achou)
	{
		achou = !strcmp(palavraAtual, search);
	}

	fin.close();

	if (achou)
		cout << "A palavra \"" << search << "\" está presente no texto.";
	else
		cout << "A palavra \"" << search << "\" não está presente no texto.";

	return EXIT_SUCCESS;
}
