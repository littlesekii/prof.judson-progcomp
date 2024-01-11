#include <iostream>
using namespace std;

int main() {
	// Muda o código da página do console para 1252
	system("chcp 1252 > nil");

	char ascii[16][16]{};

	char current = 0;
	for (size_t i = 0; i < 16; i++)
		for (size_t j = 0; j < 16; j++)
			ascii[j][i] = current++;

	int CLInicio[2]{}, CLFim[2]{};
	cout << "Entre com as coordenadas da região de interesse.\n";
	cout << "De: ";
	cin >> CLInicio[0];
	cin.ignore();
	cin >> CLInicio[1];

	cout << "Até: ";
	cin >> CLFim[0];
	cin.ignore();
	cin >> CLFim[1];

	int col = CLFim[0] - CLInicio[0] + 1;
	int row = CLFim[1] - CLInicio[1] + 1;
	char** dinASCII = new char* [col] {};


	for (size_t i = 0; i < col; i++)
	{
		dinASCII[i] = new char[row] {};
	}

	for (size_t i = CLInicio[0], dinI = 0; i <= CLFim[0]; i++, dinI++)
	{
		for (size_t j = CLInicio[1], dinJ = 0; j <= CLFim[1]; j++, dinJ++)
		{
			dinASCII[dinI][dinJ] = ascii[i][j];
		}
	}

	for (size_t i = 0; i < col; i++)
	{
		for (size_t j = 0; j < row; j++)
		{
			cout << dinASCII[i][j] << ' ';
		}
		cout << endl;
	}


	for (size_t i = 0; i < col; i++)
	{
		delete[] dinASCII[i];
	}
	delete[] dinASCII;

	return 0;
}