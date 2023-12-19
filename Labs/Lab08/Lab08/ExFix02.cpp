#include <iostream>

using namespace std;

int main() {

	double valor;
	cout << "Digite um ponto flutuante: ";
	cin >> valor;

	cout << "Notação padrão: " << valor << endl;

	cout.setf(ios_base::scientific, ios_base::floatfield);
	cout << "Notacao cientifica: " << valor << endl;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Notacao decimal: " << valor << endl;


	return 0;
}
