#include <iostream>

using namespace std;

int main() {

	system("chcp 1252 > nil");

	double x;

	cout << "Digite um ponto-flutuante: ";
	cin >> x;


	cout << "Nota��o padr�o: " << x;
	cout << scientific << endl;
	cout << "Nota��o cient�fica: " << x;
	cout << fixed << endl;
	cout.precision(2);
	cout << "Nota��o decimal: " << x;

	return 0;
}