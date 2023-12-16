#include <iostream>

using namespace std;

float anguloVetor(float, float);

int main()
{
	system("chcp 1252 > nil");

	cout << "Digite as coordenadas do vetor: " << endl;

	float x, y;
	cout << "x: ";
	cin >> x;

	cout << "y: ";
	cin >> y;

	cout << "O ângulo do vetor é " << anguloVetor(x, y);
}

float anguloVetor(float x, float y) {
	float rad = atan2(y, x);
	float degrees = rad * 180 / 3.14159;
	return degrees;
}
