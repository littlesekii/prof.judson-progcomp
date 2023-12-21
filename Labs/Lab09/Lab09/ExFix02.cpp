#include <iostream>

using namespace std;

int main() {

	system("chcp 1252 > nil");

	double x;

	cout << "Digite um ponto-flutuante: ";
	cin >> x;


	cout << "Notação padrão: " << x;
	cout << scientific << endl;
	cout << "Notação científica: " << x;
	cout << fixed << endl;
	cout.precision(2);
	cout << "Notação decimal: " << x;

	return 0;
}