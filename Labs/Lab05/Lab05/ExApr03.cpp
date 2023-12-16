#include <iostream>
using namespace std;

float calculaIMC(float x, float y);

int main()
{
	system("chcp 1252 > nil");

	cout << "Índice de Massa Corporal(IMC)" << endl;
	cout << "------------------------" << endl;

	float altura, massa;
	cout << "Altura: ";
	cin >> altura;

	cout << "Massa: ";
	cin >> massa;

	cout << "IMC: " << calculaIMC(altura, massa);
}

float calculaIMC(float altura, float massa) {
	return massa / pow(altura, 2);
}
