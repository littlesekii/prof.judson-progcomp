#include <iostream>

using namespace std;

struct dimensaoMatriz {
	size_t linhas;
	size_t colunas;
};

void mostrarTransposta(int[][3]);

int main()
{
	int matriz[3][2]{};
	int transposta[2][3]{};

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			cin >> matriz[i][j];
		}
	}

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			transposta[j][i] = matriz[i][j];
		}
	}

	mostrarTransposta(transposta);













	//dimensaoMatriz dm{ 3, 2 };
	//dimensaoMatriz dmTransposta{ 2, 3 };

	////aloca memoria dinamica da matriz
	//int** matriz = new int* [dm.linhas];

	//for (size_t i = 0; i < dm.linhas; i++)
	//	matriz[i] = new int[dm.colunas];


	////desaloca a memoria dinamica
	//for (size_t i = 0; i < dm.linhas; i++)
	//	delete[] matriz[i];
	//delete[] matriz;

	return 0;

}

void mostrarTransposta(int transposta[][3])
{
	for (size_t i = 0; i < 2; i++)
	{
		cout << "{ ";
		for (size_t j = 0; j < 3; j++)
		{
			cout << transposta[i][j] << " ";
		}
		cout << "}" << endl;
	}
}