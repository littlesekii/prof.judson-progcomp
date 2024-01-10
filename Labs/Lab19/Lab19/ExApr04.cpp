#include <iostream>
using namespace std;

void exibirVetorInt(int[], int);

int main() {
	// Muda o código da página do console para 1252
	system("chcp 1252 > nil");

	int mat[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	exibirVetorInt(mat[0], sizeof(mat[0]) / sizeof(int))	;


	return 0;
}

void exibirVetorInt(int vet[], int size) {
	for (size_t i{}; i < size; i++)
		cout << vet[i] << " ";
}