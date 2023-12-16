#include <iostream>

using namespace std;

float moduloVetor(float, float);

int main()
{
	system("chcp 1252 > nil");

	cout << "Digite as coordenadas do vetor: " << endl;

	float x, y;
	cout << "x: ";
	cin >> x;

	cout << "y: ";
	cin >> y;

	cout << "O tamanho do vetor é " << moduloVetor(x, y);
}

float moduloVetor(float x, float y) {
	return sqrt(pow(x, 2) + pow(y, 2));
}
