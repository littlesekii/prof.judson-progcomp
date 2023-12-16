#include <iostream>
#include <iomanip>
constexpr auto PI = 3.14159;

using namespace std;

float VolumeCilindro(int, int);

int main(void) {

	system("chcp 1252 > nil");
	cout << setprecision(8); //show more decimals

	cout << "Calcula o Volume de um Cilindro" << endl;
	cout << "-------------------------------" << endl;

	int r, h;
	cout << "Entre com o raio da base: ";
	cin >> r;

	cout << "Entre com a altura: ";
	cin >> h;

	cout << "O volume do cilindro é " << VolumeCilindro(r, h);

	return 0;
}

float VolumeCilindro(int r, int h) {
	return PI * pow(r, 2) * h;
}