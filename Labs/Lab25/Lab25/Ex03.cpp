#include <iostream>
#include <fstream>

using namespace std;

void atualizaRange(int*, int*, int);

int main()
{
	system("chcp 1252 > nil");

	int numeros[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	ifstream fin;
	fin.open("valor.bin", ios::in | ios::binary);


	if (fin.is_open())
	{
		int newValue{};
		fin.read((char*)(&newValue), sizeof(newValue));

		atualizaRange(numeros + 1, numeros + 8, newValue);

		cout << "Vetor atualizado com o valor " << newValue << ".";
	}
	else
		cout << "Não foi possível abrir o arquivo.";

	return EXIT_SUCCESS;
}

void atualizaRange(int* start, int* end, int value) 
{
	do
		*(start) = value;
	while (start++ != end);
}
