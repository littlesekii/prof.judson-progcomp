#include <iostream>

using namespace std;

float quadrado(float);
float cubo(float);

int main() {

	float x;
	cout << "Digite um valor: ";
	cin >> x;

	cout << endl;
	cout << "Quadrado = " << quadrado(x) << endl;
	cout << "Cubo = " << cubo(x) << endl;
	cout << "Cubo do quadrado = " << cubo(quadrado(x));

	return 0;
}

float quadrado(float x) {
	return x * x;
}

float cubo(float x) {
	return x * x * x;
}