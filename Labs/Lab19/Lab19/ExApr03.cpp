#include <iostream>
using namespace std;

int main() {
	// Muda o c�digo da p�gina do console para 1252
	system("chcp 1252 > nil");

	int mat[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	// Imprime o valor de mat[0][0], que � o primeiro elemento da matriz
	cout << "mat[0][0] = " << mat[0][0] << endl;

	// Imprime o valor de mat[0], que � o endere�o do primeiro elemento da primeira linha da matriz
	cout << "mat[0] = " << mat[0] << endl;

	// Imprime o valor de &mat[0][0], que � o mesmo que mat[0]
	cout << "&mat[0][0] = " << &mat[0][0] << endl;


	return 0;
}
