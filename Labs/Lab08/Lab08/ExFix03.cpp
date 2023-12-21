#include <iostream>

#define SEGUNDOS_NO_ANO 3.156E7;

using namespace std;
float segundosVividos(int);

int main() {


	cout << "Digite sua idade em anos: ";
	int idade;
	cin >> idade;

	cout << idade << " anos correspondem a " << segundosVividos(idade) << " segundos.";

	cout << endl << endl;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(1);

	cout << idade << " anos correspondem a " << segundosVividos(idade) << " segundos.";

	return 0;
}

float segundosVividos(int anos) {
	return anos * SEGUNDOS_NO_ANO;
}