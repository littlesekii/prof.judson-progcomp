#include <iostream>

using namespace std;

int main() {

	system("chcp 1252 > nil");

	int a, b, c;

	cout << "Digite os valores de A, B e C: ";
	cin >> a;
	cin >> b;
	cin >> c;

	int delta = b * b - 4 * a * c;

	if (delta < 0) {
		cout << "O valor de delta é " << delta << ", ou seja, é negativo, logo, ";
		cout << "X não possui uma raiz real.";
	}
	else if (delta == 0) {
		float x = (- b + sqrt(delta)) / (2.0 * a);
		cout << "X: " << x;
	}
	else {
		float x1 = (-b + sqrt(delta)) / (2.0 * a);
		float x2 = (-b - sqrt(delta)) / (2.0 * a);
		cout << "X': " << x1;
		cout << endl;
		cout << "X'': " << x2;
	}
	

	return 0;
}