#include <iostream>
#include <fstream>
using namespace std;

struct MaiorMenor
{
	int menor;
	int posMenor;
	int maior;
	int posMaior;
};

MaiorMenor maiorMenor(const int*, const int);

int main()
{
	system("chcp 1252 > nil");
	
	int vet[100]{};

	ifstream fin;
	fin.open("numeros.txt", ios::in);

	int tam{};
	if (fin.is_open())
	{
		while (fin >> vet[tam]) tam++;
	}

	MaiorMenor mn = maiorMenor(vet, tam);

	cout << "A posição " << mn.posMenor << " contém o menor número: " << mn.menor;
	cout << endl;
	cout << "A posição " << mn.posMaior << " contém o menor número: " << mn.maior;

	return EXIT_SUCCESS;
}

MaiorMenor maiorMenor(const int* vet, const int tam)
{
	MaiorMenor mn{};

	mn.maior = vet[0];
	mn.posMaior = 1;
	mn.menor = vet[0];
	mn.posMenor = 1;

	for (size_t i = 1; i < tam; i++)
	{
		if (vet[i] > mn.maior)
		{
			mn.maior = vet[i];
			mn.posMaior = i + 1;
		}
			
		if (vet[i] < mn.menor)
		{
			mn.menor = vet[i];
			mn.posMenor = i + 1;
		}

	}


	return mn;
}