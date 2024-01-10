#include <iostream>
using namespace std;

int main() {
	// Muda o código da página do console para 1252
	system("chcp 1252 > nil");

	int mat[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	// Imprime o valor de mat[0][0], que é o primeiro elemento da matriz
	cout << "mat[0][0] = " << mat[0][0] << endl;

	// Imprime o valor de mat[0], que é o endereço do primeiro elemento da primeira linha da matriz
	cout << "mat[0] = " << mat[0] << endl;

	// Imprime o valor de &mat[0][0], que é o mesmo que mat[0]
	cout << "&mat[0][0] = " << &mat[0][0] << endl;


	return 0;
}
