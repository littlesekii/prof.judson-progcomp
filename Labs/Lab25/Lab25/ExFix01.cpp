#include <iostream>

using namespace std;

void exibirParesOrdem(const int[][2], int);

int main()
{
	system("chcp 1252 > nil");

	int pares[10][2]{};

	cout << "Digite pares de valores (0 para encerrar):\n";

	int qtd{};
	bool parIndex{1};
	int p;
	
	cin >> p;
	while ((p != 0) && (qtd < 10))
	{

		parIndex = !parIndex;

		pares[qtd][parIndex] = p;

		if (parIndex)
			qtd++;

		if (qtd < 10)
			cin >> p;
	}

	cout << endl;
	cout << "Pares organizados: " << endl;
	exibirParesOrdem(pares, qtd);

	return EXIT_SUCCESS;
}

void exibirParesOrdem(const int pares[][2], int qtd)
{
	for (size_t i = 0; i < qtd; i++)
	{
		int v1{ pares[i][0] }, v2{ pares[i][1] };

		cout << "(";
		cout << ((v1 < v2) ? v1 : v2);
		cout << ",";
		cout << ((v1 > v2) ? v1 : v2);
		cout << ")";
		cout << endl;
	}
}