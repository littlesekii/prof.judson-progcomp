#include <iostream>

using namespace std;


double maracutaia(double[]);

int main() {

	system("chcp 1252 > nil");

	double valores[3];

	cout << "Entre com tr�s valores reais: ";
	cin >> valores[0];
	cin >> valores[1];
	cin >> valores[2];

	cout << "O resultado da maracutaia �: " << maracutaia(valores);

	return 0;
}

double maracutaia(double val[]) {
	return val[0] * val[2] - val[1];
}