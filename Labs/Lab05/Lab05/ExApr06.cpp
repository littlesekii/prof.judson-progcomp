#include <iostream>
#include "ExApr06Funcoes.h"

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	cout << "Digite as coordenadas do vetor: " << endl;

	float x, y;
	cout << "x: ";
	cin >> x;

	cout << "y: ";
	cin >> y;

	cout << "Coordenadas polares do vetor:" << endl; 
	cout <<"(" << moduloVetor(x, y) << ", " << anguloVetor(x, y) << ")";
}