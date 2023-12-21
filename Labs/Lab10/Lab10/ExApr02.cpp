#include <iostream>

using namespace std;

int main() {

	system("chcp 1252 > nil");

	float peso[3]{ 2, 3, 4 };
	float nota[3]{ 0 };

	cout << "Entre com as três notas: ";
	cin >> nota[0];
	cin >> nota[1];
	cin >> nota[2];

	cout << fixed;

	cout.precision(1);

	cout << "Média sistema antigo é " << (nota[0] * peso[0] + nota[1] * peso[1] + nota[2] * peso[2]) / 9.0;
	cout << endl;
	cout << "Média sistema novo é " << (nota[0] + nota[1] + nota[2]) / 3;

	

	return 0;
}